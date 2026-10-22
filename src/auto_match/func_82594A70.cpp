#include "stdext/xmemory.h"

struct Pair {
    unsigned int key;
    int val;
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Pair val;
    char color;
    char isnil;
};

struct Map {
    int comp;
    Node *head;
    unsigned int size;
};

struct It {
    Node *p;
};

extern "C" {
extern Map lbl_83297004;
It *fn_82595528(It *ret, It where, Node *n);
}

extern "C" void fn_82594A70(unsigned int key, int value)
{
    Map *m = &lbl_83297004;
    Node *where = m->head;
    Node *p = m->head->parent;
    while (!p->isnil) {
        if (p->val.key < key)
            p = p->right;
        else {
            where = p;
            p = p->left;
        }
    }
    It it;
    it.p = where;
    if (where == m->head || key < where->val.key) {
        Node *n = std::_Allocate(1, (Node *)0);
        n->left = m->head;
        n->parent = m->head;
        n->right = m->head;
        n->color = 0;
        n->isnil = 0;
        Pair *pv = &n->val;
        if (pv != 0) {
            pv->key = key;
            pv->val = 0;
        }
        It r;
        It w;
        w.p = where;
        fn_82595528(&r, w, n);
        it = r;
    }
    it.p->val.val = value;
}
