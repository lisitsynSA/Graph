#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    graph_t graph;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
