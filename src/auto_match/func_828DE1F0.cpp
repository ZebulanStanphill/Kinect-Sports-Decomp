#include "stdext/xmemory.h"

extern "C" __declspec(noreturn) void fn_82F622A8(const char *msg);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Node {
    Node *next;
    Node *prev;
    unsigned __int64 val;
};

struct List {
    Node *head;
    unsigned int size;

    unsigned int max_size() const { return 0xffffffffu / sizeof(unsigned __int64); }

    void _Incsize(unsigned int count)
    {
        if (max_size() - size - 1 < count)
            fn_82F622A8("list<T> too long");
        size += count;
    }
};

extern "C" void fn_828DE1F0(List *self, Node *where, const unsigned __int64 *val)
{
    Node *prev = where->prev;
    Node *n = std::_Allocate(1, (Node *)0);
    n->next = where;
    n->prev = prev;
    ::new ((void *)&n->val) unsigned __int64(*val);
    self->_Incsize(1);
    where->prev = n;
    n->prev->next = n;
}
