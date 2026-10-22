#include "stdext/xmemory.h"

struct X;

extern "C" {
void fn_827D9630(X *self, const X *o);
__declspec(noreturn) void fn_82F622A8(const char *msg);
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct X {
    int a;
    __int64 b;
    int c;
    int d;
};

struct Y {
    X x;
    int z;
};

struct Value {
    unsigned int key;
    Y y;
};

struct Node {
    Node *next;
    Node *prev;
    Value value;
};

struct It {
    Node *p;
};

struct Pairib {
    It it;
    unsigned char ok;
};

struct List {
    Node *head;
    unsigned int size;
};

struct Hash {
    int traits;
    List list;
};

extern "C" Pairib *fn_825BF5C0(Pairib *ret, Hash *self, const Value *val, It where);

static void copy_y(Y *d, const Y *s)
{
    fn_827D9630(&d->x, &s->x);
    d->z = s->z;
}

extern "C" Pairib *fn_825BF4E0(Pairib *ret, Hash *self, const Value *val)
{
    List *list = &self->list;
    Node *where = list->head->next;
    Node *prev = where->prev;
    Node *node = std::_Allocate(1, (Node *)0);
    Value *v;
    node->next = where;
    node->prev = prev;
    v = (Value *)operator new(sizeof(Value), (void *)&node->value);
    if (v != 0) {
        v->key = val->key;
        copy_y(&v->y, &val->y);
    }
    if (0x6666665 - list->size < 1)
        fn_82F622A8("list<T> too long");
    ++list->size;
    where->prev = node;
    node->prev->next = node;
    It it;
    it.p = list->head->next;
    fn_825BF5C0(ret, self, &it.p->value, it);
    return ret;
}
