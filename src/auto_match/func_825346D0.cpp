#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct K {
    char d[0x24];
};

extern "C" {
K *fn_828648F0(K *, unsigned int);
unsigned int fn_828647D8(K *);
unsigned char fn_828647A8(const K *, const K *);
void fn_82864898(K *);
K *fn_82292780(K *, const K *);
}

struct KC : K {
    KC() {}
    KC(const KC &o) { fn_82292780(this, &o); }
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    KC key;
    char color;
    char isnil;
};

struct It {
    Node *p;
    It() {}
    It(Node *n) : p(n) {}
    It(const It &o) : p(o.p) {}
    bool operator==(const It &r) const { return p == r.p; }
};

struct PR {
    It first;
    bool second;
    PR() {}
    PR(const PR &o) : first(o.first), second(o.second) {}
};

struct Slot;
extern "C" PR *fn_82537040(PR *, Slot *, Node *);

struct Slot {
    int comp;
    Node *head;
    unsigned int size;
    int pad;

    __forceinline Node *_Lbound(const K &key)
    {
        Node *p = head->parent;
        Node *where = head;
        while (!p->isnil)
            if (fn_828647A8(&p->key, &key))
                p = p->right;
            else {
                where = p;
                p = p->left;
            }
        return where;
    }
    __forceinline It end() { return It(head); }
    __forceinline It find(const K &key)
    {
        It where = It(_Lbound(key));
        return (where == end() || fn_828647A8(&key, &where.p->key)) ? end() : where;
    }
};

struct Obj {
    int pad;
    Slot slots[1];
};

extern "C" int fn_825346D0(Obj *self, int idx, unsigned int arg)
{
    KC key;
    fn_828648F0(&key, arg);
    Slot *m = &self->slots[idx];
    fn_828647D8(&key);
    It where = It(m->_Lbound(key));
    bool found;
    PR tmp;
    {
        const It *sel;
        if (where == m->end() || fn_828647A8(&key, &where.p->key)) {
            tmp.first = m->end();
            sel = &tmp.first;
        } else
            sel = &where;
        found = sel->p != m->head;
    }
    if (found) {
        fn_82864898(&key);
        return 0x80004005;
    }
    {
        Node *n = std::_Allocate(1, (Node *)0);
        n->left = m->head;
        n->parent = m->head;
        n->right = m->head;
        n->color = 0;
        n->isnil = 0;
        ::new ((void *)&n->key) KC(key);
        fn_82537040(&tmp, m, n);
        fn_82864898(&key);
        return 0;
    }
}
