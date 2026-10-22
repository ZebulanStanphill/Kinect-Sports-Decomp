#include "stdext/xmemory.h"

struct String {
    int pad[7];
};

struct Pair {
    int first;
    String second;
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Pair val;
    char color;
    char isnil;
};

struct Tree {
    int comp;
    Node *head;
    unsigned int size;
};

struct Iter {
    Node *ptr;
};

extern "C" {
void fn_82297DB0(String *self, int, int);
String *fn_822959F8(String *self, const String *src);
Iter *fn_82299368(Iter *result, Tree *tree, Node *where, Node *node);
}

static inline Node *lbound(Tree *self, const int *key)
{
    Node *p = self->head->parent;
    Node *where = self->head;

    while (!p->isnil) {
        if (p->val.first < *key) {
            p = p->right;
        } else {
            where = p;
            p = p->left;
        }
    }
    return where;
}

extern "C" String *fn_82299000(Tree *self, const int *key)
{
    Node *where = lbound(self, key);
    Node *it = where;

    if (it == self->head || *key < it->val.first) {
        int k = *key;
        String tmp;
        Pair v;
        Node *n;
        Pair *pv;
        Iter r;

        fn_82297DB0(&tmp, 0, 0);
        v.first = k;
        fn_822959F8(&v.second, &tmp);
        n = std::_Allocate(1, (Node *)0);
        n->left = self->head;
        n->parent = self->head;
        n->right = self->head;
        n->color = 0;
        n->isnil = 0;
        pv = &n->val;
        if (pv != 0) {
            pv->first = v.first;
            fn_822959F8(&pv->second, &v.second);
        }
        fn_82299368(&r, self, where, n);
        it = r.ptr;
        fn_82297DB0(&v.second, 1, 0);
        fn_82297DB0(&tmp, 1, 0);
    }
    return &it->val.second;
}
