#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    graph_t graph(5);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
