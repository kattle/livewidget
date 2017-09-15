#include "widgetmedia.h"

WidgetMedia::WidgetMedia(QWidget *parent)
    : WidgetBase(parent)
{
    mEffect = EFFECT_NONE;
    mMediaIndex = 0;
    mBlocks = 6;
    mPlayTimer = new QTimer();
    mPlayTimer->setInterval(2000);
    connect(mPlayTimer,SIGNAL(timeout()),this,SLOT(slot_ExecPlayMedia()));
}

WidgetMedia::~WidgetMedia()
{

}

void WidgetMedia::InitRc(QString pString, bool pInitial)
{
    //@> getImg
    WidgetBase::InitRc(pString);
    mPlayTimer->start();
}

void WidgetMedia::SetEffect(ANIMATIO_EFFECT effect)
{
    mEffect = effect;
    mEffectRender->SetEffect(mEffect);
}

void WidgetMedia::slot_ExecPlayMedia()
{
    update();
    mMediaIndex++;
    if(mMediaIndex >= mImgFileList.count())
        mMediaIndex = 0;


}

void WidgetMedia::paintEvent(QPaintEvent *e)
{
    if(mImgFileList.isEmpty())
        return;
    mPix = QPixmap(this->mImgFileList.at(mMediaIndex));
    mPix.scaled(this->size());
    switch(mEffect)
    {
        case EFFECT_NONE:
        {
            QPainter painter(this);
            painter.save();
            painter.drawPixmap(0,0,this->width(),this->height(),mPix);
            painter.restore();
            break;
        }
        default:
            break;
    }


}
