#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    int val;
    char color;
    char isnil;
};

struct Tree {
    int alloc;
    Node *head;
    unsigned int size;
};

extern "C" Node *fn_822B45E8(Tree *self, Node *root, Node *where)
{
    Node *newroot = self->head;
    if (!root->isnil) {
        Node *p = std::_Allocate(1, (Node *)0);
        p->left = self->head;
        p->parent = self->head;
        p->right = self->head;
        p->color = 0;
        p->isnil = 0;
        new (&p->val) int(root->val);
        p->parent = where;
        p->color = root->color;
        if (newroot->isnil)
            newroot = p;
        p->left = fn_822B45E8(self, root->left, p);
        p->right = fn_822B45E8(self, root->right, p);
    }
    return newroot;
}
