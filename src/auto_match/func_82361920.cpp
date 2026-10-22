#include "stdext/xmemory.h"

struct String {
    int pad[7];
};

struct Value {
    int a;
    int b;
};

struct Pair {
    String first;
    Value second;
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

struct Obj {
    int pad[2];
    Tree tree;
};

struct Pairib {
    Node *it;
    bool ok;
};

extern "C" {
String *fn_82230110(String *self, const char *s);
String *fn_82240378(String *self, const String *src);
void fn_82230300(String *self, int, int);
Pairib *fn_824A3140(Pairib *result, Tree *tree, Node *node);
}

extern "C" void fn_82361920(Obj *self, const char *key, int a)
{
    String name;
    Pair p;
    Tree *tree;
    Node *n;
    Pair *pv;

    {
        Value v;
        v.a = a;
        v.b = 0x40;
        fn_82240378(&p.first, fn_82230110(&name, key));
        p.second = v;
    }
    tree = &self->tree;
    n = std::_Allocate(1, (Node *)0);
    n->left = tree->head;
    n->parent = tree->head;
    n->right = tree->head;
    n->color = 0;
    n->isnil = 0;
    pv = &n->val;
    if (pv != 0) {
        fn_82240378(&pv->first, &p.first);
        pv->second = p.second;
    }
    {
        Pairib r;
        fn_824A3140(&r, tree, n);
    }
    fn_82230300(&p.first, 1, 0);
    fn_82230300(&name, 1, 0);
}
