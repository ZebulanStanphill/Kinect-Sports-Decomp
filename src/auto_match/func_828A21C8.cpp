#include "stdext/xmemory.h"

struct Node {
    Node *next;
    Node *prev;
    char val[12];
};

struct List {
    Node *head;
    unsigned int size;
};

extern "C" List *fn_828A21C8(List *self)
{
    self->size = 0;
    Node *n = std::_Allocate(1, (Node *)0);
    self->head = n;
    n->next = n;
    self->head->prev = self->head;
    return self;
}
