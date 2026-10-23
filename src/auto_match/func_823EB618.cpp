#include "stdext/xmemory.h"

struct Obj;

struct PMF {
    void (*fn)();
    int adj;
};

struct Bind {
    PMF pmf;
    Obj *obj;
    int pad;
    void *arg;
    int pad2;
};

struct FuncImpl {
    void **vtbl;
    int unk;
    Bind callee;
};

struct Func {
    union {
        double align;
        char space[16];
    } s;
    FuncImpl *impl;
};

struct Owner {
    int pad;
    Obj *obj;
};

extern "C" {
extern void *lbl_821B784C[];
void fn_823D1670();
void fn_8227CB30(void *self, Func *f);
void fn_82359C18(Func *f);
}

extern "C" void fn_823EB618(Owner *self, void *arg)
{
    FuncImpl *impl;
    {
        Bind bd;
        PMF pm;
        pm.fn = fn_823D1670;
        pm.adj = 0;
        bd.pmf = pm;
        bd.obj = self->obj;
        bd.arg = arg;
        impl = std::_Allocate(1, (FuncImpl *)0);
        impl->vtbl = lbl_821B784C;
        impl->callee = bd;
    }
    {
        Func f;
        f.impl = impl;
        fn_8227CB30((char *)self->obj + 0xcb0, &f);
        fn_82359C18(&f);
    }
}
