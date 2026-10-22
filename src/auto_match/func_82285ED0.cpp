#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821A8DE4[];
}

struct Impl {
    void **vtbl;
    int v;
};

extern "C" Impl *fn_82285ED0(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    Impl *o = (Impl *)where;
    o->vtbl = lbl_821A8DE4;
    o->v = self->v;
    return o;
}
