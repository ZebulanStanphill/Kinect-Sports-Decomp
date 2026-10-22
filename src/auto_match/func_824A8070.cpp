#include "stdext/xmemory.h"

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Value {
    int a;
    int b;
};

struct Node {
    Node *next;
    Node *prev;
    Value value;
};

struct List {
    Node *head;
    unsigned int size;
};

extern "C" void fn_824A8070(List *self, const Value *val)
{
    Node *where = self->head;
    Node *prev = where->prev;
    Node *n = std::_Allocate(1, (Node *)0);
    n->next = where;
    n->prev = prev;
    ::new ((void *)&n->value) Value(*val);
    if (0x1ffffffe - self->size < 1)
        fn_82F622A8("list<T> too long");
    self->size += 1;
    where->prev = n;
    n->prev->next = n;
}
