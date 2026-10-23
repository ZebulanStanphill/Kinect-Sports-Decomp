#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B5670[];
}

struct Functor {
    unsigned char data[24];
};

struct Impl {
    void **vtbl;
    Functor f;
};

extern "C" Impl *fn_823AA0E0(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B5670;
    p->f = self->f;
    return p;
}
