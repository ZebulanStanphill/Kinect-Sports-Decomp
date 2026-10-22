#include "stdext/xmemory.h"

struct Functor {
    unsigned __int64 v[5];
};

struct Words {
    int w[10];
};

struct FuncImpl {
    void **vtbl;
    Functor callee;
};

struct Func {
    union {
        double align;
        char space[16];
    } s;
    FuncImpl *impl;
};

struct Obj;
struct A0;

struct RefObj {
    void **vtbl;
    int uses;
    int weaks;
    int pad;
    char storage[8];
};

extern "C" {
extern void *lbl_821B374C[];
extern void *lbl_821B382C[];
void fn_82378100(void *self, A0 *a0, int a1, Func *f, int a3, int a4, int a5, int a6, int a7);
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

extern "C" RefObj *fn_82376CE0(RefObj *self, A0 *a0, int *a1, const Functor *a2, int *a3,
                               int *a4, int *a5, int *a6, int *a7)
{
    void *p;
    self->uses = 1;
    self->vtbl = lbl_821B374C;
    self->weaks = 1;
    p = operator new(8, (void *)self->storage);
    if (p != 0) {
        FuncImpl *impl;
        {
            Functor tmp = *a2;
            impl = std::_Allocate(1, (FuncImpl *)0);
            impl->vtbl = lbl_821B382C;
            *(Words *)&impl->callee = *(const Words *)&tmp;
        }
        {
            Func f;
            f.impl = impl;
            fn_82378100(p, a0, *a1, &f, *a3, *a4, *a5, *a6, *a7);
        }
    }
    return self;
}
