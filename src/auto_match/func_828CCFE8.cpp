#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_82026598[];
}

struct Payload {
    int v[6];
};

struct Impl {
    void **vtbl;
    int pad;
    Payload f;
};

extern "C" Impl *fn_828CCFE8(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_82026598;
    p->f = self->f;
    return p;
}
