#include "stdext/xmemory.h"

struct SetNode {
    SetNode *left;
    SetNode *parent;
    SetNode *right;
    void *val;
    char color;
    char isnil;
};

struct Set {
    int comp;
    SetNode *head;
    unsigned int size;
};

struct Pairib {
    SetNode *it;
    bool ok;
};

struct Item {
    void **arr;
    int pad[3];
    int idx;
};

struct Inner {
    char pad[0xbc];
    int count;
};

struct A {
    int pad[2];
    Item ***items;
    char pad2[0x174 - 0xc];
    Inner *inner;
};

struct Key {
    char pad[0x40];
    void *key;
};

struct Got {
    char pad[0x1a0];
    Key *k;
};

struct B {
    char pad[0x1c];
    void *key;
    char pad2[0x30 - 0x20];
    Set set;
};

struct Obj {
    char pad[0x14];
    int state;
    char pad2[0x40 - 0x18];
    A **a;
    int pad44;
    B *b;
};

extern "C" {
void fn_8244F3B0(Obj *self);
Got *fn_822ABA88(void *p, int);
Pairib *fn_82273600(Pairib *result, Set *set, SetNode *node);
}

extern "C" void fn_82448550(Obj *self)
{
    int i;

    fn_8244F3B0(self);
    if (self->state == 10) {
        for (i = 0; i < (*self->a)->inner->count; i++) {
            Item *it = (*(*self->a)->items)[i];
            Got *g = fn_822ABA88(it->arr[it->idx], 0);
            B *b = self->b;
            if (g->k->key == b->key) {
                Set *s = &b->set;
                SetNode *n = std::_Allocate(1, (SetNode *)0);
                void **pv;
                Pairib r;
                n->left = s->head;
                n->parent = s->head;
                n->right = s->head;
                n->color = 0;
                n->isnil = 0;
                pv = &n->val;
                if (pv != 0)
                    *pv = g;
                fn_82273600(&r, s, n);
            }
        }
    }
}
