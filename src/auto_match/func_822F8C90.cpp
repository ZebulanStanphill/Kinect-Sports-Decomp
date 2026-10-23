#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821AE6E4[];
}

struct Functor {
    int v[8];
};

struct Impl {
    void **vtbl;
    int pad;
    Functor f;
};

extern "C" Impl *fn_822F8C90(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821AE6E4;
    p->f = self->f;
    return p;
}
