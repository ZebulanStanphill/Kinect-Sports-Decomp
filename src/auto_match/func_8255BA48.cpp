#include "stdext/exception.h"

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void *fn_8265C9E0(unsigned int size);
void fn_822315A0(void *rep);
}

inline void *operator new(unsigned int, void *p) { return p; }

struct Val {
    void *p;
    void *rep;
};

extern "C" Val *fn_82365BD8(Val *self, const Val *other);

struct Node {
    Node *next;
    Node *prev;
    Val val;
};

struct List {
    Node *head;
    unsigned int size;
};

struct Outer {
    int x;
    List list;
};

static inline Node *Buynode(Node *next, Node *prev, const Val &v)
{
    void *p0 = 0;
    unsigned int n = 1;
    if (n <= 0)
        n = 0;
    else if ((unsigned int)-1 / sizeof(Node) < n
             || (p0 = fn_8265C9E0(n * sizeof(Node))) == 0)
        stdext::bad_alloc(0)._Raise();
    Node *node = (Node *)p0;
    node->next = next;
    node->prev = prev;
    Val *dst = &node->val;
    if (dst != 0)
        fn_82365BD8(dst, &v);
    return node;
}

static inline void Insert(List *l, Node *where, const Val &v)
{
    Node *node = Buynode(where, where->prev, v);
    if (0x1ffffffe - l->size < 1)
        fn_82F622A8("list<T> too long");
    l->size += 1;
    where->prev = node;
    node->prev->next = node;
}

extern "C" void fn_8255BA48(Outer *self, Val *v)
{
    List *l = &self->list;
    Insert(l, l->head, *v);
    if (v->rep != 0)
        fn_822315A0(v->rep);
}
