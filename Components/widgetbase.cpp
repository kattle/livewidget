#include "widgetbase.h"

WidgetBase::WidgetBase(QWidget *parent) : QWidget(parent)
{
    mImgList.clear();
    mFileList.clear();
}

WidgetBase::~WidgetBase()
{
    mImgList.clear();
    mFileList.clear();

}

void WidgetBase::InitRc(QString pPath, bool pInitial)
{
    if(pPath.isEmpty())
        return;
    mImgList =  getImgListFromPath(pPath);
    mFileList = getFileListFromPath(pPath);
    mImgFileList = getPictureFromPath(pPath);


}

void WidgetBase::SetPixmap(QPixmap pix)
{
    mPix = pix;
    if(mPix.isNull())
        return;
    update();
}

void WidgetBase::ParseFloor()
{
    QString tmpStr = "Protocol: ";

    for(int i=0; i<11; i++)
    {
        tmpStr.append(QString("%1 ").arg(mCurFrame[i]&0xff));

    }
    tmpStr.append("\r\n");
    IDE_DEBUG(tmpStr);
}

void WidgetBase::slot_ExecOperate(AREA_OPERATE pOperate, QVariant pPara)
{

}

void WidgetBase::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.save();
    painter.drawPixmap(this->rect(),mPix);
    painter.restore();

}

FloorInfo::FloorInfo()
{

}

FloorInfo::FloorInfo(char pSingle)
{
    mSingleBits = pSingle;

}

FloorInfo::FloorInfo(char pTen, char pSingle)
{
    mTenBits = pTen;
    mSingleBits = pSingle;

}

FloorInfo::FloorInfo(char pHundred, char pTen, char pSingle)
{

    mHundredBits = pHundred;
    mTenBits = pTen;
    mSingleBits = pSingle;

}
