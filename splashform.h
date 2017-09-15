#ifndef SPLASHFORM_H
#define SPLASHFORM_H

#include <QWidget>
#include <QPalette>
#include <QTimer>
#include "global.h"
#include "widgetbase.h"
#include "effectbase.h"
#include "splashform.h"

namespace Ui {
class SplashForm;
}

class SplashForm : public QWidget
{
    Q_OBJECT

public:
    explicit SplashForm(QWidget *parent = 0);
    ~SplashForm();

    void SetLogo(QString pLogo);
    void SetProgress(int pValue);
    void SetProgress(int pStart,int pEnd);
    void SetProgress(int pStart, int pEnd, QString str);   //use 100%
    void SetInfo(QString str);

    void SetProgress1(int pStart, int pEnd);



    void resizeEvent(QResizeEvent *event);
    void SetPixmap(QString pix);
    void ErrorReport(ERROR_APP_SPLASH err);

public slots:
    void slot_handle(int val);
    void slot_handleOver();
    void slot_timer();


private:
    QString             mRcPath;
    QStringList         errorPixList;
    QTimer              *mTimer;

    int                 mIndex;
    int                 mEndIndex;
    WorkThread          *workThread;
signals:
    void splashOver();


private:
    Ui::SplashForm *ui;
};

#endif // SPLASHFORM_H
