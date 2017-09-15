#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene tmpScene;
    MainWindow w;
    QGraphicsView tmpView;
    tmpScene.addWidget(&w);
    tmpView.setScene(&tmpScene);
#ifdef WINDOWS
    tmpView.setBackgroundBrush(QBrush(Qt::black));
    tmpView.showMaximized();
#else
    tmpView.setAutoFillBackground(true);
    tmpView.setBackgroundBrush(QBrush(Qt::black));
    tmpView.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    tmpView.setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    tmpView.setDragMode(QGraphicsView::NoDrag);
    tmpView.setWindowFlags(Qt::FramelessWindowHint | Qt::NoDropShadowWindowHint);
    tmpView.setGeometry(-5,-5,810,490);
    tmpView.rotate(180);
    tmpView.show();
#endif
    return a.exec();
}
