#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B48D0[];
}

struct Functor {
    int v[11];
};

struct Impl {
    void **vtbl;
    Functor f;
};

extern "C" Impl *fn_823938F0(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B48D0;
    p->f = self->f;
    return p;
}
