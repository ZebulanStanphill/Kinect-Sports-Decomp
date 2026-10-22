#include "stdext/xmemory.h"

struct String;
struct Value;
struct Sub;

extern "C" {
void fn_82230300(String *self, unsigned char built, unsigned int newsize);
void fn_8223B688(String *self, const String *right);
int fn_8260D428(const String *self, unsigned int off, unsigned int n0,
                const char *ptr, unsigned int count);
void fn_824CA0B8(Sub *self);
void fn_824CAEF0(Value *self, const Value *right);
void fn_824C9CB8(Value *self);
}

struct String {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
    int alval;

    unsigned int Size() const { return size; }
    const char *Myptr() const { return 16 <= res ? bx.ptr : bx.buf; }
    int compare(const String &right) const
    {
        return fn_8260D428(this, 0, size, right.Myptr(), right.Size());
    }
};

struct Sub {
    int d[4];
};

struct Vec {
    void *first;
    void *last;
    void *end;
    int alval;
};

struct Func {
    union {
        double align;
        int pad[4];
    } space;
    void *impl;
};

struct Value {
    String a;
    String b;
    Sub sub;
    Vec vec;
    Func f1;
    Func f2;
};

struct Pair {
    String first;
    Value second;
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Pair value;
    char color;
    char isnil;
};

struct Map {
    int comp;
    Node *head;
    unsigned int size;
};

extern "C" {
void fn_824CBB98(Node **result, Map *self, Node *where, Node *newnode);
}

extern "C" Value *fn_824CA898(Map *self, const String *keyval)
{
    Node *wherenode = self->head;
    Node *pnode = wherenode->parent;
    while (!pnode->isnil) {
        if (pnode->value.first.compare(*keyval) < 0)
            pnode = pnode->right;
        else {
            wherenode = pnode;
            pnode = pnode->left;
        }
    }
    Node *where = wherenode;
    if (where == self->head || keyval->compare(where->value.first) < 0) {
        Value mv;
        Pair val;
        Node *node;
        Node *res;
        fn_82230300(&mv.a, 0, 0);
        fn_82230300(&mv.b, 0, 0);
        fn_824CA0B8(&mv.sub);
        mv.vec.first = 0;
        mv.vec.last = 0;
        mv.vec.end = 0;
        mv.f1.impl = 0;
        mv.f2.impl = 0;
        fn_8223B688(&val.first, keyval);
        fn_824CAEF0(&val.second, &mv);
        node = std::_Allocate(1, (Node *)0);
        node->left = self->head;
        node->parent = self->head;
        node->right = self->head;
        node->color = 0;
        node->isnil = 0;
        {
            Pair *p = &node->value;
            if (p != 0) {
                fn_8223B688(&p->first, &val.first);
                fn_824CAEF0(&p->second, &val.second);
            }
        }
        fn_824CBB98(&res, self, where, node);
        where = res;
        fn_824C9CB8(&val.second);
        fn_82230300(&val.first, 1, 0);
        fn_824C9CB8(&mv);
    }
    return &where->value.second;
}
