#include "stdext/xmemory.h"
inline void *operator new(unsigned int, void *p) throw() { return p; }

extern "C" {
void *memcpy(void *dst, const void *src, unsigned int n);
}

struct Data {
    unsigned char bytes[0x68];
};

extern "C" {
extern void *lbl_821C16E0[];
extern Data lbl_832967B8[];
}

struct Impl {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void _Delete_this(bool deallocate);
};

struct Func {
    union {
        double align;
        unsigned char bytes[0x10];
    } _Space;
    Impl *_Impl;
    Func() { _Impl = 0; }
    bool _Local() const { return (void *)_Impl == (void *)&_Space; }
    void _Tidy()
    {
        if (_Impl != 0) {
            _Impl->_Delete_this(!_Local());
            _Impl = 0;
        }
    }
    void clear() { _Tidy(); _Impl = 0; }
};

struct Elem {
    Data data;
    unsigned char pad68[0x138 - 0x68];
    int f138;
    unsigned char pad13c[0x150 - 0x13c];
    int f150;
    int f154;
    Func func;
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    unsigned char value[0x84];
    char color;
    char isnil;
};

struct Map {
    int comp;
    Node *head;
    unsigned int size;
};

struct Obj {
    void **vtbl;
    int *owner;
    int f8;
    int fc;
    Elem elems[2];
    Map map;


};

extern "C" Obj *fn_824E6908(Obj *self, int *o)
{
        self->owner = o;
        self->vtbl = lbl_821C16E0;
        { Elem *e = self->elems; for (int n = 2; n != 0; --n, ++e) e->func._Impl = 0; }
        self->map.size = 0;
        self->map.head = std::_Allocate(1, (Node *)0);
        self->map.head->left = self->map.head;
        self->map.head->parent = self->map.head;
        self->map.head->right = self->map.head;
        self->map.head->color = 1;
        self->map.head->isnil = 1;
        if (o != 0)
            self->f8 = *o;
        else
            self->f8 = 0;
        for (int i = 0; i != 2; i++) {
            self->elems[i].f138 = 0;
            self->elems[i].f150 = 0;
            Func *f = &self->elems[i].func;
            if (f->_Impl != 0) {
                f->_Impl->_Delete_this(!f->_Local());
                f->_Impl = 0;
            }
            f->_Impl = 0;
            Data *d = &self->elems[i].data;
            if (i >= -1 && i <= 1) {
                if (i == -1) *d = lbl_832967B8[0];
                else *d = lbl_832967B8[i];
            }
        }

    return self;
}
