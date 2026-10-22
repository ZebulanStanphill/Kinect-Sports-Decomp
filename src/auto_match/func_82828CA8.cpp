#include "stdext/exception.h"

struct Value {
    char data[0x104];
};

struct Node {
    Node *next;
    Node *prev;
    Value value;
};

struct List {
    int alloc;
};

extern "C" void *fn_8265C9E0(unsigned int);

extern "C" Node *fn_82828CA8(List *self, Node *next, Node *prev, const Value *val)
{
    Node *p = (Node *)fn_8265C9E0(sizeof(Node));
    if (p != 0) {
        Value *v;
        p->next = next;
        p->prev = prev;
        v = &p->value;
        if (v != 0)
            *v = *val;
        return p;
    }
    stdext::bad_alloc(0)._Raise();
}
