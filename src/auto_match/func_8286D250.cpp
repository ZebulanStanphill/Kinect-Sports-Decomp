#include "stdext/xmemory.h"

struct Node {
    Node *next;
    Node *prev;
    char value[4];
};

struct List {
    Node *head;
    unsigned int size;
};

extern "C" List *fn_8286D250(List *self)
{
    self->size = 0;
    self->head = std::_Allocate(1, (Node *)0);
    self->head->next = self->head;
    self->head->prev = self->head;
    return self;
}
