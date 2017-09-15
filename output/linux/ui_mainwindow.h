/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "splashform.h"
#include "widgetarrow.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *desktop;
    QStackedWidget *stackedWidget;
    QWidget *page_startup;
    SplashForm *splash;
    QWidget *page_lift;
    WidgetArrow *wid_arrow;
    QWidget *page_setting;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        MainWindow->setStyleSheet(QLatin1String("QWidget#desktop {\n"
"        background: rgb(68, 69, 73);\n"
"}\n"
""));
        desktop = new QWidget(MainWindow);
        desktop->setObjectName(QStringLiteral("desktop"));
        stackedWidget = new QStackedWidget(desktop);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 480));
        page_startup = new QWidget();
        page_startup->setObjectName(QStringLiteral("page_startup"));
        splash = new SplashForm(page_startup);
        splash->setObjectName(QStringLiteral("splash"));
        splash->setGeometry(QRect(200, 0, 400, 400));
        stackedWidget->addWidget(page_startup);
        page_lift = new QWidget();
        page_lift->setObjectName(QStringLiteral("page_lift"));
        wid_arrow = new WidgetArrow(page_lift);
        wid_arrow->setObjectName(QStringLiteral("wid_arrow"));
        wid_arrow->setGeometry(QRect(100, 60, 151, 161));
        stackedWidget->addWidget(page_lift);
        page_setting = new QWidget();
        page_setting->setObjectName(QStringLiteral("page_setting"));
        label = new QLabel(page_setting);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 170, 221, 41));
        pushButton = new QPushButton(page_setting);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 80, 99, 27));
        stackedWidget->addWidget(page_setting);
        MainWindow->setCentralWidget(desktop);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "label", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
