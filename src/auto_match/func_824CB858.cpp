#include "stdext/xmemory.h"

struct String;
extern "C" void fn_8223B688(String *self, const String *src);

struct String {
    int data[7];
};

struct Mapped {
    String s;
    float x, y, z;
};

struct Value {
    String first;
    Mapped second;
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Value value;
    char color;
    char isnil;
};

struct Tree {
    int alloc;
    Node *head;
};

struct Iterator {
    Node *ptr;
};

extern "C" Iterator *fn_824CB920(Iterator *ret, Tree *self, unsigned int where, Node *node);

extern "C" Iterator *fn_824CB858(Iterator *ret, Tree *self, unsigned int where, const Value &val)
{
    Node *p = std::_Allocate(1, (Node *)0);
    p->left = self->head;
    p->parent = self->head;
    p->right = self->head;
    p->color = 0;
    p->isnil = 0;
    {
        void *vp = &p->value;
        if (vp != 0) {
            Value *v = (Value *)vp;
            const Mapped *r = &val.second;
            fn_8223B688(&v->first, &val.first);
            Mapped *m = &v->second;
            fn_8223B688(&m->s, &r->s);
            m->x = r->x;
            m->y = r->y;
            m->z = r->z;
        }
    }
    fn_824CB920(ret, self, where, p);
    return ret;
}
