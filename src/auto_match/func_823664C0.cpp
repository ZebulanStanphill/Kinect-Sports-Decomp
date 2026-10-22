#include "stdext/exception.h"

extern "C" {
void *fn_8265C9E0(unsigned int);
extern void *lbl_821B2CA4[];
}

struct Func {
    void **vtbl;
    unsigned int a;
    unsigned int b;
};

static inline void *Allocate(unsigned int n)
{
    void *p = fn_8265C9E0(n);
    if (p == 0)
        stdext::bad_alloc(0)._Raise();
    return p;
}

extern "C" Func *fn_823664C0(Func *self, void *where)
{
    if (where == 0)
        where = Allocate(0xc);
    Func *dst = (Func *)where;
    dst->vtbl = lbl_821B2CA4;
    dst->a = self->a;
    dst->b = self->b;
    return dst;
}
