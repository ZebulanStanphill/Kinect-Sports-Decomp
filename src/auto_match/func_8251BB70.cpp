#include "stdext/xmemory.h"

struct Str;

extern "C" {
void fn_8223B688(Str *dst, const Str *src);
}

inline void *operator new(unsigned int, void *p) { return p; }

struct Str {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
    char alval;
    Str(const Str &o) { fn_8223B688(this, &o); }
};

struct Second {
    Str str;
    char flag;
};

struct Val {
    Str key;
    Second second;
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Val value;
    char color;
    char isnil;
};

struct Tree {
    int alloc;
    Node *head;
    unsigned int size;
};

extern "C" Node *fn_8251BB70(Tree *t, Node *root, Node *where)
{
    Node *newroot = t->head;
    if (!root->isnil) {
        const Val &v = root->value;
        Node *p = std::_Allocate(1, (Node *)0);
        p->left = t->head;
        p->parent = t->head;
        p->right = t->head;
        p->color = 0;
        p->isnil = 0;
        Val *pv = &p->value;
        if (pv != 0) {
            const Str &a = v.key;
            const Second &b = v.second;
            fn_8223B688(&pv->key, &a);
            Second *ps = &pv->second;
            fn_8223B688(&ps->str, &b.str);
            ps->flag = b.flag;
        }
        p->parent = where;
        p->color = root->color;
        if (newroot->isnil)
            newroot = p;
        p->left = fn_8251BB70(t, root->left, p);
        p->right = fn_8251BB70(t, root->right, p);
    }
    return newroot;
}
