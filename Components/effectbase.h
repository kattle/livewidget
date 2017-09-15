#ifndef EFFECTBASE_H
#define EFFECTBASE_H

#include <QWidget>
#include <QPainter>
#include <QThread>
#include <QMutexLocker>
#include <QMutex>
#include "global.h"



class WorkThread : public QThread
{
    Q_OBJECT
public:

    explicit WorkThread(QObject *parent = 0) ;
    ~WorkThread();
    void setProgress(int startV,int endV);

private:
    int             startVal;
    int             endVal;
    int             val;
    QMutex          mMutex;
    bool            mStopped;


protected:
    virtual void run() Q_DECL_OVERRIDE;
    void stop();

signals:
    void resultReady(int value);
    void threadOver();




};

class EffectBase : public QWidget
{
    Q_OBJECT
public:
    explicit EffectBase(QWidget *parent = 0);
    ~EffectBase();

public:
    void SetEffect(ANIMATIO_EFFECT val);
    void SetPixmap(QPixmap pix);
    void StartRender();

public:
private:
    QTimeLine                   *mAnimationMachine;
    ANIMATIO_EFFECT             mAnimationEffect;
    QPixmap                     mPixmap;
    QPixmap                     mCurrentPix;
    int                         mMaxFrame;
    int                         mCurrentFrame;



signals:

public slots:
    void slot_changeFrame(int pFrame);
protected:
    void paintEvent(QPaintEvent *e);
};


#endif // EFFECTBASE_H
