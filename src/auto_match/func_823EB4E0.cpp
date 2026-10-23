#include "stdext/xmemory.h"

struct Owner;

struct PMF {
    void (*fn)(Owner *);
    int adj;
};

struct Bind {
    PMF pmf;
    char *obj;
    int pad0;
    void *arg;
    int pad1;
    int arg2;
    int pad2;
};

struct FuncImpl;

struct Func {
    union {
        double align;
        char space[16];
    } s;
    FuncImpl *impl;
};

struct FuncImpl {
    void **vtbl;
    int unk;
    Bind callee;
};

struct Owner {
    int pad;
    char *obj;
};

extern "C" {
extern void *lbl_821B7834[];
void fn_823D15A8(Owner *);
void fn_8227CB30(void *, Func *);
void fn_82359C18(Func *);
}

extern "C" void fn_823EB4E0(Owner *self, void *arg, int arg2)
{
    FuncImpl *impl;
    {
        Bind bd;
        PMF pm;
        pm.fn = fn_823D15A8;
        pm.adj = 0;
        bd.pmf = pm;
        bd.obj = self->obj;
        bd.arg = arg;
        bd.arg2 = arg2;
        impl = std::_Allocate(1, (FuncImpl *)0);
        impl->vtbl = lbl_821B7834;
        impl->callee = bd;
    }
    {
        Func f;
        f.impl = impl;
        fn_8227CB30(self->obj + 0xc20, &f);
        fn_82359C18(&f);
    }
}
