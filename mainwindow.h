#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "global.h"
#include "widgetbase.h"
#include "splashform.h"
#include "qtuart.h"
#include <QSettings>
#include <QPalette>


namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void InitRc();
    void GotoPage(PAGE_CHANGE page);
    QString GetSetting(QString key);
    void SetSetting(QString key,QString value);
    void ErrorReport(ERROR_APP_SPLASH err);

public slots:
    void slot_serialRead();
    void slot_gotoMainPage();


public:
    QString             mRcPath;
//    QTimer              mStartupTimer;

private:
    Ui::MainWindow *ui;
    PAGE_CHANGE         mPage;
    SerialPort          *mSerialPort;
    QSettings           *mSetting;

protected:
    void keyPressEvent(QKeyEvent *e);
    void keyReleaseEvent(QKeyEvent *e);

};

#endif // MAINWINDOW_H
