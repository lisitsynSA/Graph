#include <QtGui/QApplication>
#include "mainwindow.h"

#define GRAPH_PRE_ACTION_ARG(graph, pre_action, action, arg)\
    {graph.graph_action(\
        (bool (*)()) &pre_action,\
        (bool (*)(graph_t*, void*)) &action,\
        (void *) arg);}

#define GRAPH_PRE_ACTION(graph, pre_action, action)\
    {graph.graph_action(\
        (bool (*)()) &pre_action,\
        (bool (*)(graph_t*, void*)) &action);}

//TODO:change to lambda-function
#define GRAPH_ONLY_ACTION(graph, action)\
    {graph.graph_action(\
        (bool (*)()) &graph_t::nop,\
        (bool (*)(graph_t*, void*)) &action);}

int main(int argc, char *argv[])
{
    graph_t graph;
    GRAPH_PRE_ACTION(graph, graph_t::clear_size, graph_t::size_count)
    qDebug() << "Graph size :" << graph.get_size();
    GRAPH_ONLY_ACTION(graph, graph_t::size_count)

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
