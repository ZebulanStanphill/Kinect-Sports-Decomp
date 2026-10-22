#include "stdext/xmemory.h"

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *msg);
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Value {
    int a;
    int b;
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

extern "C" Pairib *fn_8259C040(Pairib *ret, Hash *self, const Value *val)
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
        *v = *val;
    }
    if (0x1ffffffe - list->size < 1)
        fn_82F622A8("list<T> too long");
    ++list->size;
    where->prev = node;
    node->prev->next = node;
    It it;
    it.p = list->head->next;
    fn_825BF5C0(ret, self, &it.p->value, it);
    return ret;
}
