#include "widgetinfo.h"

WidgetInfo::WidgetInfo(QWidget *parent) : WidgetBase(parent)
{
    m_Font = QFont("Arial",30);

    m_Pen.mBackGroundColor= QColor(0, 0, 0, 0);
    m_Pen.mFrameColor = QColor(255,255,255,0);
    m_Pen.mFontColor = QColor(255,255,255,255);
    m_Pen.mBackPen = QPen(QColor(125, 0, 0, 255));
    m_Pen.mFrontPen = QPen(QColor(255,255,255,255));

    m_Direction = MOVE_LEFT;
    m_AnimationCharacter = new QTimeLine(1000);
    m_AnimationCharacter->setCurveShape(QTimeLine::EaseInCurve);
    m_AnimationCharacter->setStartFrame(0);
    m_AnimationCharacter->setLoopCount(0);
    m_AnimationCharacter->setFrameRange(0,15);
    connect(m_AnimationCharacter,SIGNAL(frameChanged(int)),this,SLOT(slot_ChangeFrame(int)));


}

WidgetInfo::WidgetInfo(QString &str, QWidget *parent) : WidgetBase(parent)
{

    m_AnimationCharacter->stop();
    delete m_AnimationCharacter;
}

WidgetInfo::~WidgetInfo()
{

}

void WidgetInfo::setText(QString str)
{

}


void WidgetInfo::getStrSize(QString str)
{
    QFontMetrics fontMet(m_Font);
    m_StringHeight = fontMet.height();
    m_StringWidth = fontMet.width(str);
}

void WidgetInfo::setString(QString str)
{
    m_String = str;
    m_AnimationCharacter->start();
}

void WidgetInfo::setFontColor(QColor col)
{
    m_Pen.mFrontPen.setColor(col);
}

void WidgetInfo::setFrameColor(QColor col)
{
    m_Pen.mFrameColor = col;

}

void WidgetInfo::setBackgroundColor(QColor col)
{
    m_Pen.mBackGroundColor = col;


}



void WidgetInfo::setMoveDirection(MOVE_DIRECTOIN dir)
{
    m_Direction = dir;
}

int WidgetInfo::slot_ChangeFrame(int pFrame)
{
    m_Frame = pFrame;
    update();
}


void WidgetInfo::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.save();
    getStrSize(m_String);

    switch(m_Direction)
    {
        case MOVE_UP:
        case MOVE_DOWN:
        case MOVE_LEFT:
        {
            QRect tmpRect = QRect(this->width()-(this->width()+m_StringWidth)*m_Frame/(qreal)(16.0),0,
                                  this->width(),this->height());
            m_Pen.mBackPen.setBrush(m_Pen.mBackGroundColor);
            m_Pen.mBackPen.setColor(m_Pen.mFrameColor);
            painter.setPen(m_Pen.mBackPen);
            painter.drawRect(QRectF(0,0,this->width()-1,this->height()-1));
            m_Pen.mFrontPen.setColor(m_Pen.mFontColor);
            painter.setPen(m_Pen.mFrontPen);
            painter.drawText(tmpRect,Qt::AlignCenter,m_String);
        }

            break;
        case MOVE_RIGHT:

            break;
        default:
        ;

    }
    painter.restore();


}
