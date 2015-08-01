#ifndef GRAPH_T_H
#define GRAPH_T_H

#include <QDebug>
#include <QLinkedList>

class graph_t
{
public:
    explicit graph_t();
    ~graph_t();

    bool size_count(graph_t* branch, void*);
    bool graph_action(bool (*action)(graph_t*, void*), void* arg = NULL);

    int get_size() {return size;}
protected:
    int size;
private:
    QLinkedList<graph_t*> branches;
};

#endif // GRAPH_T_H
