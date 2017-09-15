#ifndef GLOBAL_H
#define GLOBAL_H

#include <QtGui>
#include <QString>
#include <QDir>
#include <QPixmap>
#include <QTimeLine>
#include <QPen>
#include <QPainter>
#include <QPaintEvent>
#include <QEventLoop>
#include <QTime>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>
#include <errno.h>
#include <fcntl.h>
#include <assert.h>
#include <time.h>
#include <unistd.h>



#ifdef WINDOWS
#include <conio.h>
#include <windows.h>
#include <winver.h>
#include "tlhelp32.h"
#include <winbase.h>
#include <setupapi.h>
#include <commctrl.h>
#include <tchar.h>
#include <process.h>
#include <basetyps.h>
#include <initguid.h>
#include <devguid.h>
//>@注册表常用宏定义
#include <RegStr.h>

#elif LINUX
# include <sys/stat.h>
# include <sys/mman.h>
# include <sys/soundcard.h>
# include <sys/ioctl.h>
# include <sys/fcntl.h>
# include <sys/types.h>
#endif

#define GBKToUnicode(x)                         QTextCodec::codecForName("GBK")->toUnicode(x)
#define GBKToUTF8(x)                            QTextCodec::codecForName("UTF-8")->fromUnicode(GBKToUnicode(x)).data()

#define _DEBUG_
//>@__PRETTY_FUNCTION__ 用于打印函数名
#ifdef _DEBUG_
#define IDE_DEBUG(x)         qDebug(QString("[%1,%2(),Line %3]-%4").arg(__FILE__).arg(__func__).arg(__LINE__).arg(QString(x)).toStdString().c_str())
#define IDE_TRACE()			 qDebug(QString("[%1,%2(),Line %3]-Trace").arg(__FILE__).arg(__func__).arg(__LINE__).toStdString().c_str())
#define IDE_TRACE_INT(x)	 qDebug(QString("[%1,%2(),Line %3]-%4=%5").arg(__FILE__).arg(__func__).arg(__LINE__).arg(#x).arg((int)x).toStdString().c_str())
#define IDE_TRACE_STR(x)	 qDebug(QString("[%1,%2(),Line %3]-%4=%5").arg(__FILE__).arg(__func__).arg(__LINE__).arg(#x).arg(x).toStdString().c_str())
#define IDE_PRINTF(fmt, ...) qDebug("[%s,%s(),Line %s]-"#fmt, __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define IDE_DEBUG(x)         //GlobalPara.m_Logger->info(QString("[%1,%2(),Line %3]-%4").arg(__FILE__).arg(__func__).arg(__LINE__).arg(QString(x)))
#define IDE_TRACE()			 //GlobalPara.m_Logger->info(QString("[%1,%2(),Line %3]-Trace").arg(__FILE__).arg(__func__).arg(__LINE__))
#define IDE_TRACE_INT(x)	 //GlobalPara.m_Logger->info(QString("[%1,%2(),Line %3]-%4=%5").arg(__FILE__).arg(__func__).arg(__LINE__).arg(#x).arg((int)x))
#define IDE_TRACE_STR(x)	 //GlobalPara.m_Logger->info(QString("[%1,%2(),Line %3]-%4=%5").arg(__FILE__).arg(__func__).arg(__LINE__).arg(#x).arg(x))
#define IDE_PRINTF(fmt, ...) //GlobalPara.m_Logger->info(QString("[%s,%s(),Line %s]-"#fmt, __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__))
#endif



typedef enum{
    EFFECT_NONE = 0,
    EFFECT_FADE,
    EFFECT_FLOATUP,
    EFFECT_FLOATDOWN,
    EFFECT_FLOATLEFT,
    EFFECT_FLOATRIGHT,
    EFFECT_FLOATTOPLEFT,
    EFFECT_FLOATBOTTOMRIGHT,
    EFFECT_LOUVERHORIZONTAL,
    EFFECT_LOUVERVERTICAL,
}ANIMATIO_EFFECT;

typedef enum{
    MOVE_UP=0,
    MOVE_DOWN,
    MOVE_LEFT,
    MOVE_RIGHT

}MOVE_DIRECTOIN;


typedef struct{
    QPen         mBackPen;
    QPen         mFrontPen;
    QColor       mBackGroundColor;
    QColor       mFontColor;
    QColor       mFrameColor;
}PAINTER_PEN;

typedef enum{
    E_PAGE_STARTUP,
    E_PAGE_LIFT,
    E_PAGE_SETTING,
}PAGE_CHANGE;


typedef enum{
    ERR_NOTHEME =0,
    ERR_WRONGTHEME,
    ERR_WRONGUI,
    ERR_NOSERIAL,
}ERROR_APP_SPLASH;

typedef enum{
    ARROW_UNKNOWN = 0x00,
    ARROW_UP = 0x01,
    ARROW_DOWN = 0x02,
    ARROW_UPDOWN = 0x03,
}ARROW_STATE;

typedef enum
{
    OPERATE_NONE = 0,
    OPERATE_CHANGE,
}AREA_OPERATE;

typedef enum{
    ARROW_ROLLUP=0,
    ARROW_ROLLDOWN,
    ARROW_STANDBY,

}ARROW_ORIENTATION;




QStringList getFileFromPath(QString path);
QString getFileName(QString filePath);
QHash<int, QPixmap> getImgListFromPath(QString pPath);
QHash<int, QString> getFileListFromPath(QString pPath);
int GetKey(QString name, QString pPrefix = QString("rc"));
QStringList getPictureFromPath(QString path);
QStringList getAudioFromPath(QString path);
QStringList getMediaFromPath(QString path);
void QtSleep(unsigned int msec, QEventLoop::ProcessEventsFlags flags = QEventLoop::AllEvents);



#endif // GLOBAL_H
