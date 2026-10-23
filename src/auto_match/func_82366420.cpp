#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B2C8C[];
}

struct Bind {
    int v[6];
};

struct Impl {
    void **vtbl;
    int pad;
    Bind b;
};

extern "C" Impl *fn_82366420(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B2C8C;
    p->b = self->b;
    return p;
}
