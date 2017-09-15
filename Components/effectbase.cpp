#include "effectbase.h"

EffectBase::EffectBase(QWidget *parent) : QWidget(parent)
{
    mMaxFrame = 15;
    mAnimationEffect = EFFECT_NONE;
    mAnimationMachine = new QTimeLine(1000,this);
    mAnimationMachine->setStartFrame(0);
    mAnimationMachine->setCurveShape(QTimeLine::LinearCurve);
    connect(mAnimationMachine,SIGNAL(frameChanged(int)),this,SLOT(slot_changeFrame(int)));

}

EffectBase::~EffectBase()
{

}

void EffectBase::SetEffect(ANIMATIO_EFFECT val)
{
    mAnimationEffect = val;

}

void EffectBase::SetPixmap(QPixmap pix)
{
    mPixmap = pix;

}

void EffectBase::StartRender()
{
    IDE_TRACE_STR("StartRender");
    if(mPixmap.isNull())
        return;
    mAnimationMachine->setFrameRange(0,mPixmap.height()/8);
    mAnimationMachine->start();


}

void EffectBase::slot_changeFrame(int pFrame)
{
    mCurrentFrame = pFrame;
    int val = mCurrentFrame*8+(mPixmap.height())%8;

    switch (mAnimationEffect) {
    case EFFECT_NONE:

        break;
    case EFFECT_FLOATLEFT:
        break;

    case EFFECT_FADE:
        break;
    case EFFECT_FLOATRIGHT:
        break;
    case EFFECT_FLOATUP:
        break;
    case EFFECT_FLOATDOWN:
        break;
    case EFFECT_FLOATTOPLEFT:
        break;
    case EFFECT_FLOATBOTTOMRIGHT:
        break;

    default:
        break;
    }
    /*
    if(effect == 1)
    {
        mCurrentImage = mDrawImage.copy((mDrawImage.width()-mDrawImage.width()*val/mDrawImage.height())/2,
                        (mDrawImage.height()-val)/2,
                        mDrawImage.width()*val/mDrawImage.height(),
                        val);
    }

    else if(effect == 2)
    {
        mCurrentImage = mDrawImage.copy(0, 0,
                        mDrawImage.width(), val);
    }

    else if(effect == 3)
    {
        mCurrentImage = mDrawImage.copy(0, 0,
                        mDrawImage.width()*val/mDrawImage.height(), mDrawImage.height());
    }

    else if(effect == 4)
    {
        mCurrentImage = mDrawImage.copy(0, 0,
                        mDrawImage.width()*val/mDrawImage.height(),
                        val);
    }

    else if(effect == 5)
    {
        mCurrentImage = mDrawImage.copy(mDrawImage.width()-mDrawImage.width()*val/mDrawImage.height(),
                        mDrawImage.height()-val,
                        mDrawImage.width()*val/mDrawImage.height(),
                        val);
    }

    else
    {
        mCurrentImage = mDrawImage;
    }
    //qDebug() << mCurrentImage.width() <<mCurrentImage.height();
    m_currentHeight = val;*/
    update();

}

void EffectBase::paintEvent(QPaintEvent *e)
{
    if(mPixmap.isNull())
        return;
    QPainter painter(this);
    switch(mAnimationEffect)
    {
        case EFFECT_NONE:
        {
            painter.save();
            painter.setPen(Qt::NoPen);
            painter.drawPixmap(0,0,this->width(),this->height(),mPixmap);
            painter.restore();
            break;

        }
        default:
            break;
    }


}

WorkThread::WorkThread(QObject *parent) : QThread(parent)
{
    val=0;
    startVal=0;

    endVal = 1;
    mStopped = false;

}

WorkThread::~WorkThread()
{
    stop();
    quit();
    wait();
}

void WorkThread::setProgress(int startV, int endV)
{
    startVal = startV;
    endVal = endV;

}

void WorkThread::run()
{
    for(int i=startVal; i<=endVal; i++)
    {
        msleep(50);
        emit resultReady(i);
        if(i==100)
        {
            msleep(50);
            emit threadOver();
        }
        QMutexLocker locker(&mMutex);
        if(mStopped)
            break;
    }

}

void WorkThread::stop()
{
    QMutexLocker locker(&mMutex);
    mStopped = true;

}
