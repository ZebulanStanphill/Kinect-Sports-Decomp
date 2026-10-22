#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B25B4[];
}

struct Impl {
    void **vtbl;
    unsigned int value;
};

extern "C" Impl *fn_82359EE0(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    Impl *p = (Impl *)where;
    p->vtbl = lbl_821B25B4;
    p->value = self->value;
    return (Impl *)where;
}
