#include "graph_t.h"

graph_t::graph_t()
{
    qDebug() << "Creating empty graph";
    size = 0;
}

graph_t::~graph_t()
{
    branches.clear();
}

bool graph_t::graph_action(bool (*pre_action)(),\
                           bool (*action)(graph_t *, void *),\
                           void *arg)
{
    if (pre_action())
        return 1;
    bool result = false;
    QLinkedList<graph_t*>::iterator it = branches.begin();
    for (; it != branches.end(); it++)
        result = result || action(*it, arg);
    return result;
}

bool graph_t::clear_size()
{
    size = 0;
    return 0;
}

bool graph_t::size_count(graph_t* branch, void*)
{
    size++;
    return 0;
}
