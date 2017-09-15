#include "widgetarrow.h"

WidgetArrow::WidgetArrow(QWidget *parent):WidgetBase(parent)
{

}

WidgetArrow::~WidgetArrow()
{

}

void WidgetArrow::InitRc(QString pPath, bool pInitial)
{
    WidgetBase::InitRc(pPath);

}

void WidgetArrow::ParseFloor()
{

    ARROW_STATE tmpArrowState = (ARROW_STATE)(mCurFrame.at(5)&(0x7));
    if(mArrowBk != tmpArrowState)
    {
        emit sOperate(OPERATE_CHANGE, tmpArrowState);
        mArrowBk = tmpArrowState;
    }


}

void WidgetArrow::slot_ExecOperate(AREA_OPERATE pOperate, QVariant pPara)
{
    if(mImgFileList.count()<3)
        return;
    switch(pOperate)
    {
        case OPERATE_CHANGE:
        {
            ARROW_STATE tmpArrowState = (ARROW_STATE)pPara.toInt();
            switch(tmpArrowState)
            {
                case ARROW_UP:
                mCurArrowPix = QPixmap(mImgFileList.at(0));
                mArrowOrientation = ARROW_ROLLUP;
                break;

                case ARROW_DOWN:
                mCurArrowPix = QPixmap(mImgFileList.at(1));
                mArrowOrientation = ARROW_ROLLDOWN;
                break;

                case ARROW_UPDOWN:
                mCurArrowPix = QPixmap(mImgFileList.at(2));
                mArrowOrientation = ARROW_STANDBY;
                break;

                default:
                mCurArrowPix = QPixmap(mImgFileList.at(0));
                mArrowOrientation = ARROW_ROLLUP;
                break;



            }
            break;
        }
        default:
            break;
    }
    this->update();

}

void WidgetArrow::paintEvent(QPaintEvent *e)
{
    if(mImgFileList.count() <2)
       return;
    QPainter painter(this);
    painter.save();
    painter.drawPixmap(this->rect(),QPixmap(mCurArrowPix));
    painter.restore();

}
