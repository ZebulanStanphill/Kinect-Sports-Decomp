#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Pair {
    int key;
    int val;
    Pair(int k,int v):key(k),val(v){}
};

struct Node {
    Node *next;
    Node *prev;
    Pair value;
};

struct List {
    Node *head;
    unsigned int size;
};

struct Hash {
    int traits;
    List list;
};

struct Ret {
    Node *it;
    bool second;
};

extern "C" {
void fn_825873E0(Ret *ret, Hash *self, const Pair *val, Node *where);
__declspec(noreturn) void fn_82F622A8(const char *msg);
}

extern "C" void fn_82586D90(Hash *self, int key, int val)
{
    Ret ret;
    {
        List *l = &self->list;
        Node *where = self->list.head->next;
        Node *prev = where->prev;
        Node *n = std::_Allocate(1, (Node *)0);
        n->next = where;
        n->prev = prev;
        ::new ((void *)&n->value) Pair(Pair(key, val));
        if (0x1ffffffe - l->size < 1)
            fn_82F622A8("list<T> too long");
        l->size++;
        where->prev = n;
        n->prev->next = n;
    }
    fn_825873E0(&ret, self, &self->list.head->next->value, self->list.head->next);
}
