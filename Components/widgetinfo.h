#ifndef WIDGETINFO_H
#define WIDGETINFO_H

#include <QWidget>
#include <QFontMetrics>
#include "global.h"
#include "widgetbase.h"
#include <QFont>
#include <QPainter>
#include <QPaintEvent>


/*!
 *注意：
 * 由于是图片机，所以所有该类只为自定义字体，如果是图片的话，那么功能上与widgetmedia 重合，使用widgetmedia类即可
*/



class WidgetInfo: public WidgetBase
{
    Q_OBJECT
public:
    WidgetInfo(QWidget *parent=0);
    WidgetInfo(QString &str,QWidget *parent=0);
    ~WidgetInfo();
    void setText(QString str);
    void getStrSize(QString str);
    void setString(QString str);
    void setFontColor(QColor col);
    void setFrameColor(QColor col);
    void setBackgroundColor(QColor col);

    void setMoveDirection(MOVE_DIRECTOIN dir);


public:

    QTimeLine           *m_AnimationCharacter;
    int                 m_Frame;
    QString             m_String;
    QFont               m_Font;
    int                 m_StringHeight;
    int                 m_StringWidth;
    MOVE_DIRECTOIN      m_Direction;
    PAINTER_PEN         m_Pen;


public slots:
    int slot_ChangeFrame(int pFrame);

protected:
    void paintEvent(QPaintEvent *e);


};

#endif // WIDGETINFO_H
