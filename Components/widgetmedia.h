#ifndef WIDGETMEDIA_H
#define WIDGETMEDIA_H

#include <QWidget>
#include "widgetbase.h"
#include "effectbase.h"
#include <QTimer>
class WidgetMedia : public WidgetBase
{
    Q_OBJECT
public:
    WidgetMedia(QWidget *parent = 0);
    ~WidgetMedia();
    void InitRc(QString pString,bool pInitial = true);
    void SetEffect(ANIMATIO_EFFECT effect);


public:
    QTimer                     *mPlayTimer;
    int                         mMediaIndex;

private:
    QPixmap                     mPix;
    QList<EffectBase*>          mEffectRenders;
    int                         mBlocks;
    EffectBase*                 mEffectRender;
    ANIMATIO_EFFECT             mEffect;

signals:

public slots:
    void slot_ExecPlayMedia();
protected:
    void paintEvent(QPaintEvent *e);
};

#endif // WIDGETMEDIA_H
