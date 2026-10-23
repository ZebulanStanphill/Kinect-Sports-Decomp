#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B07E8[];
}

struct Functor {
    int v[6];
};

struct Impl {
    void **vtbl;
    int pad;
    Functor f;
};

extern "C" Impl *fn_8232E2D8(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B07E8;
    p->f = self->f;
    return p;
}
