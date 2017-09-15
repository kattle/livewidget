#include "splashform.h"
#include "ui_splashform.h"

SplashForm::SplashForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SplashForm)
{
    ui->setupUi(this);
    workThread = new WorkThread(this);
    ui->lab_info->setScaledContents(true);
    ui->progressBar->setValue(0);
    ui->progressBar->setRange(0,100);
    QPalette tmpPal;
    tmpPal.setColor(QPalette::WindowText,Qt::white);
    ui->lab_info->setPalette(tmpPal);
    ui->lab_info->setFont(QFont("Arial"));
    ui->lab_info->setAlignment(Qt::AlignCenter);

    mRcPath = qApp->applicationDirPath();
    ui->wid_icon->InitRc(mRcPath + QString("/../Error/"));
    errorPixList = ui->wid_icon->mImgFileList;
    ui->wid_icon->SetPixmap(errorPixList.at(0));

    mIndex = 0;
    mTimer = new QTimer;
    mTimer->setInterval(50);
    connect(mTimer,SIGNAL(timeout()),this,SLOT(slot_timer()));

}

SplashForm::~SplashForm()
{
    delete ui;
}

void SplashForm::SetLogo(QString pLogo)
{
    ui->wid_icon->SetPixmap(QPixmap(pLogo));
}

void SplashForm::SetProgress(int pValue)
{
    ui->progressBar->setValue(pValue);
    QtSleep(500);

}

void SplashForm::SetProgress(int pStart, int pEnd)
{
    WorkThread *workThread = new WorkThread(this);
    workThread->setProgress(pStart,pEnd);
    connect(workThread, SIGNAL(resultReady(int)), this, SLOT(slot_handle(int)));
    connect(workThread, SIGNAL(finished()), workThread, SLOT(deleteLater()));
    workThread->start();
}

void SplashForm::SetProgress(int pStart, int pEnd, QString str)
{
    if(!str.isEmpty())
        ui->lab_info->setText(str);
     workThread->setProgress(pStart,pEnd);
     connect(workThread, SIGNAL(resultReady(int)), this, SLOT(slot_handle(int)));
     connect(workThread,SIGNAL(threadOver()),this,SLOT(slot_handleOver()));
     connect(workThread, SIGNAL(finished()), workThread, SLOT(deleteLater()));
     if(!workThread->isRunning())
         workThread->start();

}

void SplashForm::SetInfo(QString str)
{
    ui->lab_info->setText(str);
}

void SplashForm::SetProgress1(int pStart, int pEnd)
{
    mIndex = pStart;
    mEndIndex = pEnd;
    mTimer->start();
}

void SplashForm::resizeEvent(QResizeEvent *event)
{/*
    QSize tmpSize = event->size();
    int tmpLen = qMin(tmpSize.width(), tmpSize.height());
    QRect tmpMiddleRect = QRect((tmpSize.width()-tmpLen)/2, (tmpSize.height()-tmpLen)/2, tmpLen, tmpLen);

    int tmpLabelLen = tmpLen / 4;
    QRect tmpLabelRect = QRect(tmpMiddleRect.x() + (tmpLen-tmpLabelLen)/2,
                               tmpMiddleRect.y() + (tmpLen/2-tmpLabelLen)/2,
                               tmpLabelLen, tmpLabelLen);
    ui->wid_icon->setGeometry(tmpLabelRect);

    int tmpProgressWidth = tmpLen * 2 / 3;
    int tmpProgressHeight = tmpLen / 22;
    QRect tmpProgressRect = QRect(tmpMiddleRect.x() + (tmpLen-tmpProgressWidth)/2,
                               tmpMiddleRect.y() + tmpLen/3 + (tmpLen/2-tmpProgressHeight)/2,
                               tmpProgressWidth, tmpProgressHeight);
    ui->progressBar->setGeometry(tmpProgressRect);

    QWidget::resizeEvent(event);
    */
}

void SplashForm::SetPixmap(QString pix)
{
    ui->wid_icon->SetPixmap(QPixmap(pix));
}


void SplashForm::ErrorReport(ERROR_APP_SPLASH err)
{
    switch(err)
    {
        case ERR_NOTHEME:
            ui->wid_icon->SetPixmap(errorPixList.at(1));
            break;
        case ERR_WRONGTHEME:
            ui->wid_icon->SetPixmap(errorPixList.at(2));
            break;
        case ERR_WRONGUI:
            ui->wid_icon->SetPixmap(errorPixList.at(3));
            break;
        case ERR_NOSERIAL:
            ui->wid_icon->SetPixmap(errorPixList.at(4));
            break;
    }

}

void SplashForm::slot_handle(int val)
{
    ui->progressBar->setValue(val);

}

void SplashForm::slot_handleOver()
{
    emit splashOver();

}

void SplashForm::slot_timer()
{
    ui->progressBar->setValue(mIndex);
    mIndex++;
    if(mIndex = mEndIndex)
        mTimer->stop();


}






