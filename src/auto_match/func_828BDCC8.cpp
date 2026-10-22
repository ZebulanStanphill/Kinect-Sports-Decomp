#include "stdext/xmemory.h"

struct Value {
    int data[6];
};

extern "C" {
void fn_828C01A0(Value *dst, const Value *src);
__declspec(noreturn) void fn_82F622A8(const char *msg);
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Node {
    Node *next;
    Node *prev;
    Value val;
};

struct List {
    Node *head;
    unsigned int size;
};

extern "C" void fn_828BDCC8(List *self, Node *where, const Value *val)
{
    Node *prev = where->prev;
    Node *n = std::_Allocate(1, (Node *)0);
    n->next = where;
    n->prev = prev;
    Value *v = &n->val;
    if (v != 0)
        fn_828C01A0(v, val);
    if (0xaaaaaa9 - self->size < 1)
        fn_82F622A8("list<T> too long");
    self->size += 1;
    where->prev = n;
    n->prev->next = n;
}
