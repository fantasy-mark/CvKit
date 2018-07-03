/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *toolBarL;
    QPushButton *drawB;
    QPushButton *testB;
    QOpenGLWidget *viewM;
    QPushButton *exitB;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1920, 1080);
        gridLayoutWidget = new QWidget(MainWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 30, 160, 80));
        toolBarL = new QGridLayout(gridLayoutWidget);
        toolBarL->setSpacing(6);
        toolBarL->setContentsMargins(11, 11, 11, 11);
        toolBarL->setObjectName(QStringLiteral("toolBarL"));
        toolBarL->setContentsMargins(0, 0, 0, 0);
        drawB = new QPushButton(gridLayoutWidget);
        drawB->setObjectName(QStringLiteral("drawB"));

        toolBarL->addWidget(drawB, 0, 0, 1, 1);

        testB = new QPushButton(gridLayoutWidget);
        testB->setObjectName(QStringLiteral("testB"));

        toolBarL->addWidget(testB, 0, 1, 1, 1);

        viewM = new QOpenGLWidget(MainWindow);
        viewM->setObjectName(QStringLiteral("viewM"));
        viewM->setGeometry(QRect(40, 200, 600, 800));
        exitB = new QPushButton(MainWindow);
        exitB->setObjectName(QStringLiteral("exitB"));
        exitB->setGeometry(QRect(1874, 30, 30, 30));

        retranslateUi(MainWindow);
        QObject::connect(exitB, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        drawB->setText(QApplication::translate("MainWindow", "drawB", nullptr));
        testB->setText(QApplication::translate("MainWindow", "testB", nullptr));
        exitB->setText(QApplication::translate("MainWindow", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
