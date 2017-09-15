#include "global.h"


QStringList getFileFromPath(QString path)
{
    path.replace("//","/");
    if(!path.lastIndexOf("/"))
        path.append("/");

    QDir pDir = QDir(path);
    QStringList getAllFileList;

    QStringList mFileList;
    QString tmpFile;
    if(!pDir.exists())
        return getAllFileList;
    mFileList = pDir.entryList(QDir::Files | QDir::NoSymLinks|QDir::NoDotAndDotDot);
    for(int i=0; i<mFileList.count(); i++)
    {
        tmpFile = QString("%1/%2").arg(path).arg(mFileList.at(i));
        tmpFile.replace("//","/");
        getAllFileList.append(tmpFile);
    }
    return getAllFileList;
}



QStringList getPictureFromPath(QString path)
{
    QStringList tmpFileList = getFileFromPath(path);
    QStringList fileList;
    QString tmpFile;
    foreach (tmpFile, tmpFileList) {

        if(tmpFile.endsWith(".jpg",Qt::CaseInsensitive) ||
           tmpFile.endsWith(".png",Qt::CaseInsensitive) ||
           tmpFile.endsWith(".bmp",Qt::CaseInsensitive))
            fileList.append(tmpFile);
    }
//    QStringList tmpPixList;
//    for(int i=0; i<fileList.count(); i++)
//    {
//        QString tmpFile = path + fileList.at(i);
//        tmpFile.replace("//","/");
//        tmpPixList.append(tmpFile);
//    }

//    return tmpPixList;
    return fileList;

}

QStringList getAudioFromPath(QString path)
{
    QStringList tmpFileList = getFileFromPath(path);
    QStringList fileList;
    QString tmpFile;
    foreach (tmpFile, tmpFileList) {
        if(tmpFile.endsWith(".wav",Qt::CaseInsensitive) ||
           tmpFile.endsWith(".mp3",Qt::CaseInsensitive))
            fileList.append(tmpFile);
    }
    return fileList;
}

QStringList getMediaFromPath(QString path)
{
    QStringList tmpFileList = getFileFromPath(path);
    QStringList fileList;
    QString tmpFile;
    foreach (tmpFile, tmpFileList) {
        if(tmpFile.endsWith(".avi",Qt::CaseInsensitive) ||
           tmpFile.endsWith(".mp4",Qt::CaseInsensitive))
            fileList.append(tmpFile);
    }
    return fileList;
}




QString getFileName(QString filePath)
{
    QString tmpFile;
    if(filePath.isEmpty())
        return tmpFile;

    int index = filePath.lastIndexOf("/");
    if(index >= 0)
    {
        tmpFile = filePath.mid(index+1);
    }
    else
        tmpFile = filePath;
    return tmpFile;
}


int GetKey(QString name, QString pPrefix)
{
    if(name.isEmpty())
        return -1;
    int tmpIndex = name.lastIndexOf(".");
    QString tmpName = name.mid(0,tmpIndex);
    if(!tmpName.startsWith(pPrefix))
        return tmpName.toInt();
    bool ok = false;
    int index = tmpName.toInt(&ok,10);
    if(ok == false)
        return -1;
    return index;

}

QHash<int, QPixmap> getImgListFromPath(QString pPath)
{
    QHash<int, QPixmap> pFileList;
    if(pPath.isEmpty())
        return pFileList;

    pPath.replace("//","/");
    if(!pPath.lastIndexOf("/"))
        pPath.append("/");
    QDir pDir = QDir(pPath);

    QStringList tmpFileList;

    if(!pDir.exists())
        return pFileList;
    tmpFileList = pDir.entryList(QDir::Files | QDir::NoSymLinks|QDir::NoDotAndDotDot);


    for(int i=0; i<tmpFileList.count(); i++)
    {
        int tmpIndex = GetKey(tmpFileList.at(i));
        QString tmpFile;

        tmpFile = QString("%1/%2").arg(pPath).arg(tmpFileList.at(i));
        tmpFile.replace("//","/");
        pFileList.insert(tmpIndex,QPixmap(tmpFile));

    }
    return pFileList;
}



QHash<int, QString> getFileListFromPath(QString pPath)
{
    QHash<int, QString> pFileList;
    if(pPath.isEmpty())
        return pFileList;

    pPath.replace("//","/");
    if(!pPath.lastIndexOf("/"))
        pPath.append("/");
    QDir pDir = QDir(pPath);

    QStringList tmpFileList;

    if(!pDir.exists())
        return pFileList;
    tmpFileList = pDir.entryList(QDir::Files | QDir::NoSymLinks|QDir::NoDotAndDotDot);


    for(int i=0; i<tmpFileList.count(); i++)
    {
        int tmpIndex = GetKey(tmpFileList.at(i));
        QString tmpFile;

        tmpFile = QString("%1/%2").arg(pPath).arg(tmpFileList.at(i));
        tmpFile.replace("//","/");
        pFileList.insert(tmpIndex,tmpFile);
    }
    return pFileList;
}


void QtSleep(unsigned int msec, QEventLoop::ProcessEventsFlags flags)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents(flags, 1);
#if defined(Q_OS_WIN32)
        Sleep(1);
#elif defined(Q_OS_LINUX)
       usleep(1000);//sleep和usleep都已经obsolete，建议使用nanosleep代替;
#endif
    }
}



