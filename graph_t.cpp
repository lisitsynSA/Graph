#include "graph_t.h"

graph_t::graph_t(int init_size):
    size(init_size)
{
    qDebug() << "Creating graph (size = " << size << ")";
    branches = new graph_t*[size];
}

graph_t::~graph_t()
{
    delete [] branches;
}
