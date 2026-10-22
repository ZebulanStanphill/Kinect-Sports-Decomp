#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Key {
    char data[0x1c];
};

struct Mapped {
    char data[0x1c];
};

extern "C" {
void *fn_8223B688(Key *self, const Key *src);
void *fn_82240378(Mapped *self, const Mapped *src);
__declspec(noreturn) void fn_82F622A8(const char *msg);
}

struct Pair {
    Key first;
    Mapped second;
    Pair(const Pair &r)
    {
        fn_8223B688(&first, &r.first);
        fn_82240378(&second, &r.second);
    }
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

    Node *_Buynode(Node *next, Node *prev, const Pair &v)
    {
        Node *n = std::_Allocate(1, (Node *)0);
        n->next = next;
        n->prev = prev;
        ::new ((void *)&n->val) Pair(v);
        return n;
    }

    void _Insert(Node *where, const Pair &v)
    {
        Node *n = _Buynode(where, where->prev, v);
        _Incsize(1);
        where->prev = n;
        n->prev->next = n;
    }

    void push_front(const Pair &v) { _Insert(head->next, v); }
};

struct Hash {
    int traits;
    List list;
};

struct Pairib {
    Node *it;
    bool second;
};

extern "C" Pairib *fn_8257AE28(Pairib *ret, Hash *self, const Pair *val, Node *plist);

extern "C" Pairib *fn_8257AD50(Pairib *ret, Hash *self, const Pair *val)
{
    List *l = &self->list;
    Node *where = l->head->next;
    Node *prev = where->prev;
    Node *n = std::_Allocate(1, (Node *)0);
    n->next = where;
    n->prev = prev;
    ::new ((void *)&n->val) Pair(*val);
    l->_Incsize(1);
    where->prev = n;
    n->prev->next = n;
    fn_8257AE28(ret, self, &l->head->next->val, l->head->next);
    return ret;
}
