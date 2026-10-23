#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B74EC[];
}

struct Functor {
    int v[9];
};

struct Impl {
    void **vtbl;
    Functor f;
};

extern "C" Impl *fn_823FE570(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B74EC;
    p->f = self->f;
    return p;
}
