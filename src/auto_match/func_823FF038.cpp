#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B760C[];
}

struct Bind {
    union {
        double align;
        int v[16];
    } u;
};

struct Impl {
    void **vtbl;
    Bind b;
};

extern "C" Impl *fn_823FF038(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B760C;
    p->b = self->b;
    return p;
}
