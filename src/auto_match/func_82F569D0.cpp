#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_82165F4C[];
}

struct Impl {
    void **vtbl;
    int v;
};

extern "C" Impl *fn_82F569D0(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    Impl *o = (Impl *)where;
    o->vtbl = lbl_82165F4C;
    o->v = self->v;
    return o;
}
