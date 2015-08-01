#ifndef GRAPH_T_H
#define GRAPH_T_H

#include <QDebug>
#include <QLinkedList>

class graph_t
{
public:
    explicit graph_t();
    ~graph_t();
private:
    int size;
    QLinkedList<graph_t> branches;
};

#endif // GRAPH_T_H
