#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    graph_t graph;
    graph.graph_action((bool (*)(graph_t*, void*)) &graph_t::size_count);
    qDebug() << "Graph size :" << graph.get_size();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
