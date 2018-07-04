#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	connect(ui.startB, SIGNAL(clicked()), ui.viewM, SLOT(start_Video()));
}

MainWindow::~MainWindow()
{
}
