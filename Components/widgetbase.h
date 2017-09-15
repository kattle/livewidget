#ifndef WIDGETBASE_H
#define WIDGETBASE_H

#include <QWidget>
#include "global.h"
#include <QPainter>
#include <QPaintEvent>
#include <QByteArray>
#include <QVariant>


class FloorInfo{
public:
    FloorInfo();
    FloorInfo(char pSingle);
    FloorInfo(char pTen, char pSingle);
    FloorInfo(char pHundred, char pTen, char pSingle);

public:
    quint8  mSingleBits;  //>@保存为ASCII码，比如0表示为0x30
    quint8  mTenBits;
    quint8  mHundredBits;
    quint8  mReserve;

};

class WidgetBase : public QWidget
{
    Q_OBJECT
public:
    WidgetBase(QWidget *parent = 0);
    ~WidgetBase();
    virtual void InitRc(QString pPath, bool pInitial = true);
    void SetPixmap(QPixmap pix);
    virtual void ParseFloor();
    virtual void slot_ExecOperate(AREA_OPERATE pOperate, QVariant pPara);



public:

    
    QHash<int,QPixmap>              mImgList;
    QHash<int,QString>              mFileList;
    QStringList                     mImgFileList;
    QByteArray                      mCurFrame;
    ARROW_STATE                     mArrowBk;

signals:
    void     sArrow(AREA_OPERATE op,QVariant para);
    virtual void sOperate(AREA_OPERATE op, QVariant para);
private:
    QPixmap                         mPix;
protected:
    void paintEvent(QPaintEvent *e);




};

#endif // WIDGETBASE_H
