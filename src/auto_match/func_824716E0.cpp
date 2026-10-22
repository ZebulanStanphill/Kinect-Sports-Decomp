#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821BC758[];
}

struct Impl {
    void **vtbl;
    int v;
};

extern "C" Impl *fn_824716E0(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    Impl *o = (Impl *)where;
    o->vtbl = lbl_821BC758;
    o->v = self->v;
    return o;
}
