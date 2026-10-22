#include "stdext/xmemory.h"

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *msg);
}

inline void *operator new(unsigned int, void *p) { return p; }

struct Obj {
    int key;
    int f4;
    int f8;
    int fc;
    int f10;
    struct Obj2 *f14;
    int f18;
    int f1c;
    int f20;
    int f24;
    unsigned char f28;
};

struct Val {
    int key;
    Obj *obj;
};

struct Node {
    Node *next;
    Node *prev;
    Val val;
};

struct It {
    Node *p;
};

struct List {
    Node *head;
    unsigned int size;
};

struct Hash {
    int traits;
    List list;
};

struct Pair {
    It it;
    unsigned char ok;
};

struct Pool {
    char pad[0xc];
    int count;
    Obj **items;
};

struct Mgr {
    char pad0[0x10];
    Hash hash;
    char pad1c[0x40 - 0x1c];
    unsigned char flag;
    char pad41[0x64 - 0x41];
    Pool *pool;
};

struct Out {
    char pad[0x14];
    Obj *obj;
};

extern "C" {
Mgr *fn_82569B10(void);
void fn_825E7BF0(Pair *ret, Hash *h, Val *val, It where);
}

extern "C" void fn_8256AF38(int key, int *src, Out *out)
{
    fn_82569B10()->flag = 0;
    Pool *pool = fn_82569B10()->pool;
    Obj *obj;
    if (pool->count > 0) {
        pool->count--;
        obj = pool->items[pool->count];
    } else {
        obj = 0;
    }
    Hash *h = &fn_82569B10()->hash;
    List *l = &h->list;
    Node *where = l->head->next;
    Node *prev = where->prev;
    Node *n = std::_Allocate(1, (Node *)0);
    n->next = where;
    n->prev = prev;
    Val *v = &n->val;
    if (v != 0) {
        v->key = key;
        v->obj = obj;
    }
    if (0x1ffffffe - l->size < 1)
        fn_82F622A8("list<T> too long");
    l->size += 1;
    where->prev = n;
    n->prev->next = n;
    Pair ret;
    It it;
    it.p = l->head->next;
    fn_825E7BF0(&ret, h, &l->head->next->val, it);
    out->obj = obj;
    obj->f1c = -1;
    obj->f20 = -1;
    obj->f4 = 1;
    obj->fc = 0;
    obj->f8 = 0;
    obj->f10 = 0;
    obj->f24 = 0;
    obj->key = key;
    obj->f28 &= 7;
    obj->f18 = *src;
    obj->f14 = 0;
}
