#include "stdext/xmemory.h"

struct Node {
    Node *next;
    Node *prev;
    char value[8];
};

struct List {
    Node *head;
    unsigned int size;
};

extern "C" List *fn_824A7F80(List *self)
{
    self->size = 0;
    self->head = std::_Allocate(1, (Node *)0);
    self->head->next = self->head;
    self->head->prev = self->head;
    return self;
}
