#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821AEE80[];
}

struct Impl {
    void **vtbl;
    unsigned char value;
};

extern "C" Impl *fn_82303D80(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821AEE80;
    p->value = self->value;
    return p;
}
