#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B2C5C[];
}

struct Impl {
    void **vtbl;
    unsigned int value;
};

extern "C" Impl *fn_823661C0(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    Impl *p = (Impl *)where;
    p->vtbl = lbl_821B2C5C;
    p->value = self->value;
    return (Impl *)where;
}
