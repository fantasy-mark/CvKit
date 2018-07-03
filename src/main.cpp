#include "mainwindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.setWindowFlags(Qt::FramelessWindowHint);		//нч╠ъ©Р
	w.show();

	return a.exec();
}
