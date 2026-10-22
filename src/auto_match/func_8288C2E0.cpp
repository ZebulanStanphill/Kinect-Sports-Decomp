#include "stdext/xmemory.h"

struct Node {
    Node *next;
    Node *prev;
    int value;
};

struct List {
    Node *head;
    unsigned int size;
};

extern "C" List *fn_8288C2E0(List *list)
{
    list->size = 0;
    list->head = std::_Allocate(1, (Node *)0);
    list->head->next = list->head;
    list->head->prev = list->head;
    return list;
}
