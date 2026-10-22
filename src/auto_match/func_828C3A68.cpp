#include "stdext/exception.h"

extern "C" void *fn_8265C9E0(unsigned int);

template<class T> inline void swap(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}

struct Ptr {
    void *ptr;
    void *rep;
};

struct Node {
    Node *next;
    Node *prev;
    Ptr value;
};

struct List {
    int alloc;
};

extern "C" Node *fn_828C3A68(List *self, Node *next, Node *prev, Ptr *val)
{
    Node *p = (Node *)fn_8265C9E0(sizeof(Node));
    if (p != 0) {
        Ptr *v;
        p->next = next;
        p->prev = prev;
        v = &p->value;
        if (v != 0) {
            v->ptr = 0;
            v->rep = 0;
            if (v != val) {
                swap(v->rep, val->rep);
                swap(v->ptr, val->ptr);
            }
        }
        return p;
    }
    stdext::bad_alloc(0)._Raise();
}
