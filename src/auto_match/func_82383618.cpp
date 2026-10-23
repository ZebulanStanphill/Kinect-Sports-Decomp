#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B3B54[];
}

struct Bind {
    union {
        double align;
        int v[20];
    } u;
};

struct Impl {
    void **vtbl;
    Bind b;
};

extern "C" Impl *fn_82383618(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B3B54;
    p->b = self->b;
    return p;
}
