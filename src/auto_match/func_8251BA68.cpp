#include "stdext/xmemory.h"

struct String {
    int pad[7];
};

struct SharedPtr {
    void *ptr;
    void *rep;
};

struct Val {
    String s;
    SharedPtr sp;
    char c;
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Val val;
    char color;
    char isnil;
};

struct Tree {
    int comp;
    Node *head;
    unsigned int size;
};

extern "C" {
String *fn_8223B688(String *self, const String *src);
void fn_82517978(SharedPtr *self, void *ptr, void *rep, int);
}

extern "C" Node *fn_8251BA68(Tree *self, Node *root, Node *where)
{
    Node *newroot = self->head;

    if (!root->isnil) {
        const Val *src = &root->val;
        Node *p = std::_Allocate(1, (Node *)0);
        Val *pv;
        p->left = self->head;
        p->parent = self->head;
        p->right = self->head;
        p->color = 0;
        p->isnil = 0;
        pv = &p->val;
        if (pv != 0) {
            fn_8223B688(&pv->s, &src->s);
            pv->sp.ptr = 0;
            pv->sp.rep = 0;
            fn_82517978(&pv->sp, src->sp.ptr, src->sp.rep, 0);
            pv->c = src->c;
        }
        p->parent = where;
        p->color = root->color;
        if (newroot->isnil)
            newroot = p;
        p->left = fn_8251BA68(self, root->left, p);
        p->right = fn_8251BA68(self, root->right, p);
    }
    return newroot;
}
