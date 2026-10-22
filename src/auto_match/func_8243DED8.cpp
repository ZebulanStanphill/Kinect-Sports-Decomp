#include "stdext/exception.h"

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    int key;
    int value;
    char color;
    char isnil;
};

struct Tree {
    int alloc;
    Node *head;
    unsigned int size;
};

struct Obj {
    char pad[0x1c];
    Tree tree;
    int pad28;
    int x2c;
};

extern "C" {
void fn_8223B688(Obj *, Obj *);
Node *fn_8243DFF8(Tree *, Node *, Node *);
void *fn_8265C9E0(unsigned int);
}

extern "C" Obj *fn_8243DED8(Obj *self, Obj *other)
{
    Tree *t;
    Node *p;
    Node *head;
    Node *n;

    fn_8223B688(self, other);
    t = &self->tree;
    t->size = 0;
    p = (Node *)fn_8265C9E0(sizeof(Node));
    if (p != 0) {
        t->head = p;
        t->head->left = t->head;
        t->head->parent = t->head;
        t->head->right = t->head;
        t->head->color = 1;
        t->head->isnil = 1;
        head = t->head;
        head->parent = fn_8243DFF8(t, other->tree.head->parent, head);
        t->size = other->tree.size;
        if (!t->head->parent->isnil) {
            for (n = t->head->parent; !n->left->isnil; n = n->left)
                ;
            t->head->left = n;
            for (n = t->head->parent; !n->right->isnil; n = n->right)
                ;
            t->head->right = n;
        } else {
            t->head->left = t->head;
            t->head->right = t->head;
        }
        self->x2c = other->x2c;
        return self;
    }
    stdext::bad_alloc(0)._Raise();
}
