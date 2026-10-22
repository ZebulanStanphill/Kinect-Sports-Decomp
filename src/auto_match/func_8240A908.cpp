#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B7F3C[];
}

struct Impl {
    void **vtbl;
    int v;
};

extern "C" Impl *fn_8240A908(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    Impl *o = (Impl *)where;
    o->vtbl = lbl_821B7F3C;
    o->v = self->v;
    return o;
}
