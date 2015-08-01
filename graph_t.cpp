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
