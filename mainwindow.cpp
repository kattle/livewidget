#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mRcPath = qApp->applicationDirPath();



//    int tmpRotate = GetSetting("System/Rotate").toInt();
//    mView->SetRotate(tmpRotate);

//    if(tmpRotate == 90 || tmpRotate == 270)
//        mSplashForm->setFixedSize(QSize(qApp->desktop()->height(), qApp->desktop()->width()));
//    else
//        mSplashForm->setFixedSize(qApp->desktop()->size());

    InitRc();

}

MainWindow::~MainWindow()
{
    delete ui;
}


/*! initial all the widgets in the splash screen*/
void MainWindow::InitRc()
{
    GotoPage(E_PAGE_STARTUP);
    //getSetting
    mSetting = new QSettings((mRcPath + QString("/../System/Setting.ini")),QSettings::IniFormat);
    mSetting->setIniCodec("UTF-8");
    ui->splash->SetProgress(0,100,"Taking configuration...");

    mSerialPort = new SerialPort;
    QString tmpParity = GetSetting("SerialPort/Parity");
    if(!tmpParity.compare("ODD", Qt::CaseInsensitive))
        mSerialPort->setParity(PAR_ODD);
    else if(!tmpParity.compare("EVEN", Qt::CaseInsensitive))
        mSerialPort->setParity(PAR_EVEN);
    else
        mSerialPort->setParity(PAR_NONE);
#ifdef WINDOWS
    mSerialPort->Init(1,9600);
#else
    mSerialPort->Init(1,GetSetting("SerialPort/Baudrates").toInt());
#endif
    connect(mSerialPort,SIGNAL(readyRead()),this,SLOT(slot_serialRead()));


    if(!mSerialPort->isOpen())
    {

        return;
    }

    connect(ui->splash,SIGNAL(splashOver()),this,SLOT(slot_gotoMainPage()));

//    GotoPage(E_PAGE_SETTING);


}

void MainWindow::GotoPage(PAGE_CHANGE page)
{
    switch(page)
    {
    case E_PAGE_STARTUP:
         ui->stackedWidget->setCurrentIndex(0);
        break;
    case E_PAGE_LIFT:
         ui->stackedWidget->setCurrentIndex(1);
        break;
    case E_PAGE_SETTING:
        ui->stackedWidget->setCurrentIndex(2);
        break;
    }

}


QString MainWindow::GetSetting(QString key)
{
    return mSetting->value(key).toString();
}

void MainWindow::SetSetting(QString key, QString value)
{
    if(mSetting->contains(key))
        mSetting->setValue(key,value);
    else
        return;

}


void MainWindow::slot_serialRead()
{

}

void MainWindow::slot_gotoMainPage()
{
//    GotoPage(E_PAGE_LIFT);
//    ui->wid_arrow->InitRc(mRcPath+ QString("/../Arrow/"));
//    ui->wid_arrow->slot_ExecOperate(OPERATE_CHANGE, ARROW_DOWN);

    GotoPage(E_PAGE_SETTING);
    ui->label->setFocus();  //>  nofocuspolicy

}

void MainWindow::keyPressEvent(QKeyEvent *e)
{
    //here you gan do your own operation
    ui->label->setText(QString("keyPressed: [0x") + QString("%1]").arg(QString::number(e->key(),16)));
}

void MainWindow::keyReleaseEvent(QKeyEvent *e)
{
    ui->label->setText(QString("keyReleased: [0x") + QString("%1]").arg(QString::number(e->key(),16)));

}



