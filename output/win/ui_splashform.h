/********************************************************************************
** Form generated from reading UI file 'splashform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASHFORM_H
#define UI_SPLASHFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>
#include "widgetbase.h"

QT_BEGIN_NAMESPACE

class Ui_SplashForm
{
public:
    QProgressBar *progressBar;
    QLabel *lab_info;
    WidgetBase *wid_icon;

    void setupUi(QWidget *SplashForm)
    {
        if (SplashForm->objectName().isEmpty())
            SplashForm->setObjectName(QStringLiteral("SplashForm"));
        SplashForm->resize(400, 400);
        SplashForm->setStyleSheet(QLatin1String("QProgressBar{\n"
"        border: none;\n"
"        color: white;\n"
"        text-align: center;\n"
"        background: rgb(68, 69, 73);\n"
"}\n"
"QProgressBar::chunk {\n"
"        border: none;\n"
"        background: rgb(0, 160, 230);\n"
"}"));
        progressBar = new QProgressBar(SplashForm);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(0, 370, 400, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy);
        progressBar->setValue(24);
        lab_info = new QLabel(SplashForm);
        lab_info->setObjectName(QStringLiteral("lab_info"));
        lab_info->setGeometry(QRect(120, 340, 161, 21));
        wid_icon = new WidgetBase(SplashForm);
        wid_icon->setObjectName(QStringLiteral("wid_icon"));
        wid_icon->setGeometry(QRect(125, 100, 150, 200));
        sizePolicy.setHeightForWidth(wid_icon->sizePolicy().hasHeightForWidth());
        wid_icon->setSizePolicy(sizePolicy);

        retranslateUi(SplashForm);

        QMetaObject::connectSlotsByName(SplashForm);
    } // setupUi

    void retranslateUi(QWidget *SplashForm)
    {
        SplashForm->setWindowTitle(QApplication::translate("SplashForm", "Form", Q_NULLPTR));
        lab_info->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SplashForm: public Ui_SplashForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASHFORM_H
