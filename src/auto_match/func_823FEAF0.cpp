#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B7564[];
}

struct Functor {
    unsigned char data[0x24];
};

struct Impl {
    void **vtbl;

    Functor f;
};

extern "C" Impl *fn_823FEAF0(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B7564;
    p->f = self->f;
    return p;
}
