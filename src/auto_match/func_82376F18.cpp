#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B379C[];
}

struct Bind {
    int v[6];
};

struct Impl {
    void **vtbl;
    int pad;
    Bind b;
};

extern "C" Impl *fn_82376F18(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B379C;
    p->b = self->b;
    return p;
}
