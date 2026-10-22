#include "stdext/exception.h"

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    char value[0xc];
    char color;
    char isnil;
};

struct Tree {
    int alloc;
    Node *head;
    unsigned int size;
};

extern "C" {
void fn_825AD990(Tree *, Node *);
void fn_828B55B0(void *);
void *fn_8265C9E0(unsigned int);
void fn_8265CA20(void *);
}

template<class T> inline void swap(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}

extern "C" Tree *fn_825AD818(Tree *self, Tree *other)
{
    Node *p;
    Node *root;

    self->size = 0;
    p = (Node *)fn_8265C9E0(sizeof(Node));
    if (p != 0) {
        self->head = p;
        self->head->left = self->head;
        self->head->parent = self->head;
        self->head->right = self->head;
        self->head->color = 1;
        self->head->isnil = 1;
        if (self != other) {
            root = self->head->parent;
            for (p = root; !p->isnil; root = p) {
                fn_825AD990(self, p->right);
                p = p->left;
                fn_828B55B0(root->value);
                fn_8265CA20(root);
            }
            self->head->parent = self->head;
            self->head->left = self->head;
            self->head->right = self->head;
            self->size = 0;
            swap(self->head, other->head);
            swap(self->size, other->size);
        }
        return self;
    }
    stdext::bad_alloc(0)._Raise();
}
