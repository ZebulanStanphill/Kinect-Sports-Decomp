#include "stdext/xmemory.h"

struct PMF {
    void (*fn)();
    int adj;
};

struct Bind {
    PMF pmf;
    int *obj;
    int pad[3];
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

struct Pair { void *ptr, *owner; };

extern "C" {
extern void *lbl_821B0820[];
void fn_8232E820();
Pair *fn_824563F0(Pair *, int, const Func *);
void fn_823F2E20(void *, Pair *);
void fn_822315A0(void *);
}

extern "C" void fn_8232E540(int *self)
{
    FuncImpl *impl;
    {
        Bind bd;
        PMF pm;
        pm.fn = fn_8232E820;
        pm.adj = 0;
        bd.pmf = pm;
        bd.obj = self;
        impl = std::_Allocate(1, (FuncImpl *)0);
        impl->vtbl = lbl_821B0820;
        impl->callee = bd;
    }
    {
        Func f;
        Pair result;
        f.impl = impl;
        fn_823F2E20((char *)self + 24, fn_824563F0(&result, self[10], &f));
        if (result.owner) fn_822315A0(result.owner);
    }
    if (self[4]) { self[5] = 0; self[4] = 0; }
}
