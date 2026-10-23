#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821AEE08[];
}

struct Bind {
    int v[10];
};

struct Impl {
    void **vtbl;
    Bind b;
};

extern "C" Impl *fn_82302F90(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821AEE08;
    p->b = self->b;
    return p;
}
