#include "stdext/xmemory.h"

extern "C" void fn_822315A0(void *rep);

inline void *operator new(unsigned int, void *p) throw() { return p; }

template <class T> inline void swap(T &a, T &b) { T t = a; a = b; b = t; }

struct SP {
    void *ptr;
    void *rep;
    SP() : ptr(0), rep(0) {}
    ~SP() { if (rep != 0) fn_822315A0(rep); }
    void _Swap(SP &o) { ::swap(rep, o.rep); ::swap(ptr, o.ptr); }
    void reset() { SP().swap(*this); }
    void swap(SP &o) { _Swap(o); }
};

struct Node1 {
    Node1 *left;
    Node1 *parent;
    Node1 *right;
    char value[0x28];
    char color;
    char isnil;
};

struct Node2 {
    Node2 *left;
    Node2 *parent;
    Node2 *right;
    char value[0x3c];
    char color;
    char isnil;
};

struct Obj {
    int f0;
    int alloc1;
    Node1 *head1;
    unsigned int size1;
    int f10;
    int alloc2;
    Node2 *head2;
    unsigned int size2;
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    SP sp;
    int f3c;
};

extern "C" Obj *fn_8224F398(Obj *self)
{
    self->f0 = 0;
    self->size1 = 0;
    self->head1 = std::_Allocate(1, (Node1 *)0);
    self->head1->left = self->head1;
    self->head1->parent = self->head1;
    self->head1->right = self->head1;
    self->head1->color = 1;
    self->head1->isnil = 1;
    self->size2 = 0;
    self->head2 = std::_Allocate(1, (Node2 *)0);
    self->head2->left = self->head2;
    self->head2->parent = self->head2;
    self->head2->right = self->head2;
    self->head2->color = 1;
    self->head2->isnil = 1;
    SP *s = &self->sp;
    s->ptr = 0;
    s->rep = 0;
    self->f24 = 0;
    self->f28 = 0;
    self->f2c = 0;
    self->f30 = 0;
    {
        void **r = &s->rep;
        void *old = *r;
        *r = 0;
        s->ptr = 0;
        if (old != 0) fn_822315A0(old);
    }
    self->f3c = 0;
    return self;
}
