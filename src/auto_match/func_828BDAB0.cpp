#include "stdext/xmemory.h"

struct Node {
    Node *next;
    Node *prev;
    int value[6];
};

struct List {
    Node *head;
    unsigned int size;
};

extern "C" List *fn_828BDAB0(List *list)
{
    list->size = 0;
    list->head = std::_Allocate(1, (Node *)0);
    list->head->next = list->head;
    list->head->prev = list->head;
    return list;
}
