#include "stdext/xmemory.h"

extern "C" __declspec(noreturn) void fn_82F622A8(const char *msg);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Self;

struct Node {
    Node *next;
    Node *prev;
    Self *val;
};

struct List {
    Node *head;
    unsigned int size;

    unsigned int max_size() const { return 0xffffffffu / sizeof(Self *); }

    void _Incsize(unsigned int count)
    {
        if (max_size() - size - 1 < count)
            fn_82F622A8("list<T> too long");
        size += count;
    }
};

struct Owner {
    char pad0[0xa0];
    List list;
};

struct Src {
    char pad0[0x44];
    Owner *owner;
};

struct Self {
    void *vtbl;
    Owner *owner;
    int m8;
    char mc[4];
};

extern "C" {
extern void *lbl_821C2CCC[];
void fn_82230110(void *p);
}

extern "C" Self *fn_82520D38(Self *self, Src *src)
{
    self->vtbl = lbl_821C2CCC;
    self->owner = src->owner;
    self->m8 = 0;
    fn_82230110(self->mc);
    List *l = &self->owner->list;
    Node *where = l->head;
    Node *prev = where->prev;
    Node *n = std::_Allocate(1, (Node *)0);
    n->next = where;
    n->prev = prev;
    ::new ((void *)&n->val) Self *(self);
    l->_Incsize(1);
    where->prev = n;
    n->prev->next = n;
    return self;
}
