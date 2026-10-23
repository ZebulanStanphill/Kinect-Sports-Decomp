#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B48B8[];
}

struct Functor {
    unsigned char data[28];
};

struct Impl {
    void **vtbl;
    Functor f;
};

extern "C" Impl *fn_82393850(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B48B8;
    p->f = self->f;
    return p;
}
