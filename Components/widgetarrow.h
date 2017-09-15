#ifndef WIDGETARROW_H
#define WIDGETARROW_H

#include <QWidget>
#include "widgetbase.h"
#include "global.h"

class WidgetArrow : public WidgetBase
{
    Q_OBJECT
public:
    WidgetArrow(QWidget *parent = 0);
    ~WidgetArrow();

    void InitRc(QString pPath, bool pInitial=true);
    void ParseFloor();
    void slot_ExecOperate(AREA_OPERATE pOperate, QVariant pPara);

public:

private:
    QPixmap      mCurArrowPix;
    ARROW_ORIENTATION    mArrowOrientation;

signals:

protected:
    void paintEvent(QPaintEvent *e);

};

#endif // WIDGETARROW_H
