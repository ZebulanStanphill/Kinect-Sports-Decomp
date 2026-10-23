#include "stdext/xmemory.h"

extern "C" {
void fn_822315A0(void *rep);
unsigned char fn_8223AAC0(void *rep);
__declspec(noreturn) void fn_82F622A8(const char *msg);
extern void *lbl_821AE598[];
}

inline void *operator new(unsigned int, void *p) { return p; }

struct Item {
    int a;
    int b;
    int c;
    float d;
    int e;
    Item(int a_, int b_, float d_, int e_) : a(a_), b(b_), c(0), d(d_), e(e_) {}
};

struct RefObj {
    void **vtbl;
    int uses;
    int weaks;
    Item storage;
};

struct SP {
    Item *ptr;
    RefObj *rep;
};

struct Node {
    Node *next;
    Node *prev;
    SP val;
};

struct List {
    Node *head;
    unsigned int size;
};

struct Owner {
    int pad;
    List list;
};

extern "C" void fn_823A7970(Owner *self, int a, int b, float d, int e)
{
    RefObj *mem = (RefObj *)fn_8265C9E0(sizeof(RefObj));
    RefObj *rx;
    if (mem != 0) {
        mem->uses = 1;
        mem->vtbl = lbl_821AE598;
        mem->weaks = 1;
        ::new ((void *)&mem->storage) Item(a, b, d, e);
        rx = mem;
    } else {
        rx = 0;
    }
    SP tmp;
    tmp.ptr = &rx->storage;
    tmp.rep = rx;
    List *l = &self->list;
    Node *where = l->head;
    Node *prev = where->prev;
    Node *n = std::_Allocate(1, (Node *)0);
    n->next = where;
    n->prev = prev;
    SP *v = &n->val;
    if (v != 0) {
        v->ptr = 0;
        v->rep = 0;
        if (tmp.rep && fn_8223AAC0(tmp.rep)) {
            if (v->rep != 0)
                fn_822315A0(v->rep);
            v->rep = tmp.rep;
            v->ptr = tmp.ptr;
        }
    }
    if (0x1ffffffe - l->size < 1)
        fn_82F622A8("list<T> too long");
    l->size += 1;
    where->prev = n;
    n->prev->next = n;
    if (tmp.rep != 0)
        fn_822315A0(tmp.rep);
}
