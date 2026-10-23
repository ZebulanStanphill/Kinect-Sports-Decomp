#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B757C[];
}

struct Functor {
    __int64 v[9];
};

struct Impl {
    void **vtbl;
    Functor f;
};

extern "C" Impl *fn_823FEBC0(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B757C;
    p->f = self->f;
    return p;
}
