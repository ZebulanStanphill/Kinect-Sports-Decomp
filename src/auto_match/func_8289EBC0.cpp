#include "stdext/exception.h"

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    int value;
    char color;
    char isnil;
};

struct Tree {
    int comp;
    Node *head;
    unsigned int size;
};

extern "C" {
void *fn_8265C9E0(unsigned int);
}

extern "C" Tree *fn_8289EBC0(Tree *self)
{
    Node *p;

    self->size = 0;
    p = (Node *)fn_8265C9E0(sizeof(Node));
    if (p != 0) {
        self->head = p;
        self->head->left = self->head;
        self->head->parent = self->head;
        self->head->right = self->head;
        self->head->color = 1;
        self->head->isnil = 1;
        return self;
    }
    stdext::bad_alloc(0)._Raise();
}
