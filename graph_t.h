#ifndef GRAPH_T_H
#define GRAPH_T_H

#include <QDebug>

class graph_t
{
public:
    explicit graph_t(int init_size = 0);
    ~graph_t();
private:
    const int size;
    graph_t** branches;
};

#endif // GRAPH_T_H
