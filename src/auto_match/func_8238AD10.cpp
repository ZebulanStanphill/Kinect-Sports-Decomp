#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B44D4[];
}

struct Impl {
    void **vtbl;
    char v;
};

extern "C" Impl *fn_8238AD10(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    Impl *o = (Impl *)where;
    o->vtbl = lbl_821B44D4;
    o->v = self->v;
    return o;
}
