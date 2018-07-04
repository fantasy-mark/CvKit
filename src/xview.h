#pragma once

#include <opencv2/opencv.hpp>
#include <QOpenGLWidget>

using namespace cv;

class XView : public QOpenGLWidget
{
	Q_OBJECT

public:
	XView(QWidget *parent);
	~XView();

public slots:
	void paintEvent(QPaintEvent *e);
	void start_Video();
	
protected:
	Mat srcFrame;
	Mat destFrame;

	QImage img;
};
