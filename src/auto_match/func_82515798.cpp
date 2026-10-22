#include "stdext/xmemory.h"

struct String {
    char data[0x1c];
};

struct Mapped {
    int a;
    String s;
    char rest[0x18];
};

struct Pair {
    unsigned int first;
    Mapped second;
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Pair value;
    char color;
    char isnil;
};

struct Map {
    int comp;
    Node *head;
    unsigned int size;
};

struct It {
    Node *node;
};

extern "C" {
void fn_82230300(String *self, int built, unsigned int newsize);
Mapped *fn_822378A0(Mapped *self, const Mapped *src);
void fn_82515E60(It *ret, Map *self, Node *where, Node *node);
}

static inline Node *lbound(Map *self, const unsigned int *key)
{
    Node *pnode = self->head->parent;
    Node *wherenode = self->head;

    while (!pnode->isnil) {
        if (pnode->value.first < *key) {
            pnode = pnode->right;
        } else {
            wherenode = pnode;
            pnode = pnode->left;
        }
    }
    return wherenode;
}

extern "C" Mapped *fn_82515798(Map *self, const unsigned int *key)
{
    Node *where = lbound(self, key);

    if (where == self->head || *key < where->value.first) {
        Mapped tmp;
        Pair pr;
        Node *n;
        Pair *v;
        It res;

        fn_82230300(&tmp.s, 0, 0);
        pr.first = *key;
        fn_822378A0(&pr.second, &tmp);
        n = std::_Allocate(1, (Node *)0);
        n->left = self->head;
        n->parent = self->head;
        n->right = self->head;
        n->color = 0;
        n->isnil = 0;
        v = &n->value;
        if (v != 0) {
            v->first = pr.first;
            fn_822378A0(&v->second, &pr.second);
        }
        fn_82515E60(&res, self, where, n);
        where = res.node;
        fn_82230300(&pr.second.s, 1, 0);
        fn_82230300(&tmp.s, 1, 0);
    }
    return &where->value.second;
}
