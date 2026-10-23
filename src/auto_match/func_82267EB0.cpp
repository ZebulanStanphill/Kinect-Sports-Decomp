#include "stdext/xmemory.h"
extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

template <class U> __forceinline U *Allocate(unsigned int count, U *)
{
    void *ptr = 0;
    if (count <= 0)
        count = 0;
    else if ((unsigned int)-1 / sizeof(U) < count
             || (ptr = fn_8265C9E0(count * sizeof(U))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (U *)ptr;
}

struct Node {
    Node *next;
    Node *prev;
    int val;
};

struct List {
    Node *head;
    unsigned int size;
};

extern "C" void fn_82267EB0(List *l, const int *val)
{
    Node *where = l->head;
    Node *prev = where->prev;
    Node *n = Allocate(1, (Node *)0);
    n->next = where;
    n->prev = prev;
    ::new ((void *)&n->val) int(*val);
    if (0x3ffffffe - l->size < 1)
        fn_82F622A8("list<T> too long");
    l->size += 1;
    where->prev = n;
    n->prev->next = n;
}
