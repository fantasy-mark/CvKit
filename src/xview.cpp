#include "xview.h"
#include <QApplication>
#include <QPainter>
#include <QTime>

static VideoCapture capture;

XView::XView(QWidget *parent)
	: QOpenGLWidget(parent)
{
}

XView::~XView()
{
}

void msleep(unsigned int msec)
{
	QTime _Timer = QTime::currentTime().addMSecs(msec);

	while (QTime::currentTime() < _Timer)
	QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void XView::paintEvent(QPaintEvent *e)
{
	QPainter p;
	p.begin(this);
	p.drawImage(QPoint(0, 0), img);
	p.end();
}

void XView::start_Video()
{
	capture.open(0);
	for (;;) {
		//判断视频是否打开
		if (!capture.isOpened()) {
			msleep(20);
			continue;
		}
		//读取一帧视频
		if (!capture.read(srcFrame) || srcFrame.empty()) {
			msleep(20);
			continue;
		}
		//分配显示区内存
		if (img.isNull()) {
			uchar *buf = new uchar[width() * height() * 3];
			img = QImage(buf, width(), height(), QImage::Format_RGB888);
		}
		//绘图显示
		cv::resize(srcFrame, srcFrame, Size(img.size().width(), img.size().height()));
		cvtColor(srcFrame, destFrame, COLOR_BGR2RGB);
		memcpy(img.bits(), destFrame.data, destFrame.cols * destFrame.rows * destFrame.elemSize());
		update();
		msleep(20);
	}
}