#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821BC7B8[];
}

struct Impl {
    void **vtbl;
    unsigned int value;
};

extern "C" Impl *fn_82471920(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    Impl *p = (Impl *)where;
    p->vtbl = lbl_821BC7B8;
    p->value = self->value;
    return p;
}
