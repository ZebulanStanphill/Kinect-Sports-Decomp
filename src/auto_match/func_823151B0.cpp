#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821AF6B8[];
}

struct Functor {
    union {
        double align;
        unsigned char data[48];
    } u;
};

struct Impl {
    void **vtbl;
    Functor f;
};

extern "C" Impl *fn_823151B0(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821AF6B8;
    p->f = self->f;
    return p;
}
