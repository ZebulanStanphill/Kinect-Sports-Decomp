#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B3784[];
}

struct Impl {
    void **vtbl;
    unsigned int value;
};

extern "C" Impl *fn_82376E80(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B3784;
    p->value = self->value;
    return p;
}
