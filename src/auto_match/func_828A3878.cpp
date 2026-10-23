#include "stdext/xmemory.h"

extern "C" __declspec(noreturn) void fn_82F622A8(const char *msg);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Sub;

extern "C" Sub *fn_828B5580(Sub *self, const Sub *o);

struct Sub {
    void *p;
    void *rep;
    Sub(const Sub &o) { fn_828B5580(this, &o); }
};

struct Val {
    float f;
    Sub s;
};

struct Node {
    Node *next;
    Node *prev;
    Val val;
};

struct List {
    Node *head;
    unsigned int size;

    unsigned int max_size() const { return 0xffffffffu / sizeof(Val); }

    void _Incsize(unsigned int count)
    {
        if (max_size() - size - 1 < count)
            fn_82F622A8("list<T> too long");
        size += count;
    }
};

extern "C" void fn_828A3878(List *self, Node *where, const Val *v)
{
    Node *prev = where->prev;
    Node *n = std::_Allocate(1, (Node *)0);
    n->next = where;
    n->prev = prev;
    ::new ((void *)&n->val) Val(*v);
    self->_Incsize(1);
    where->prev = n;
    n->prev->next = n;
}
