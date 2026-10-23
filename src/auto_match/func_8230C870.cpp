#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821AF3B8[];
}

struct Functor {
    int v[6];
};

struct Impl {
    void **vtbl;
    int pad;
    Functor f;
};

extern "C" Impl *fn_8230C870(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821AF3B8;
    p->f = self->f;
    return p;
}
