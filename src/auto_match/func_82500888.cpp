#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821C220C[];
}

struct Data {
    int v[5];
};

struct Impl {
    void **vtbl;
    Data data;
};

extern "C" Impl *fn_82500888(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821C220C;
    p->data = self->data;
    return p;
}
