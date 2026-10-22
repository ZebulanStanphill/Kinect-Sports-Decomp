#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821C1054[];
}

struct Impl {
    void **vtbl;
    char v;
};

extern "C" Impl *fn_824E0030(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    Impl *o = (Impl *)where;
    o->vtbl = lbl_821C1054;
    o->v = self->v;
    return o;
}
