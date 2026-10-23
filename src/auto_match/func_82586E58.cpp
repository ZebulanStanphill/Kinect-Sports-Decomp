#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

extern "C" {
int fn_8265BF48(void *key, int b);
__declspec(noreturn) void fn_82F622A8(const char *msg);
}

struct Pair {
    int first;
    int second;
    Pair(int a, int b) : first(a), second(b) {}
    Pair(const Pair &o) : first(o.first), second(o.second) {}
};

struct Node {
    Node *next;
    Node *prev;
    Pair val;
};

struct List {
    Node *head;
    unsigned int size;

    unsigned int max_size() const { return 0xffffffffu / sizeof(Pair); }

    void _Incsize(unsigned int count)
    {
        if (max_size() - size - 1 < count)
            fn_82F622A8("list<T> too long");
        size += count;
    }
};

struct Hash {
    int traits;
    List list;
};

struct Pairib {
    Node *it;
    bool second;
};

extern "C" Pairib *fn_825875C0(Pairib *ret, Hash *self, const Pair *val, Node *plist);

extern "C" void fn_82586E58(Hash *self, int second, void *key)
{
    Pair v(fn_8265BF48(key, 0), second);
    List *l = &self->list;
    Node *where = l->head->next;
    Node *prev = where->prev;
    Node *n = std::_Allocate(1, (Node *)0);
    n->next = where;
    n->prev = prev;
    ::new ((void *)&n->val) Pair(v);
    l->_Incsize(1);
    where->prev = n;
    n->prev->next = n;
    Pairib r;
    fn_825875C0(&r, self, &l->head->next->val, l->head->next);
}
