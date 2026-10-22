#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B51BC[];
}

struct Impl {
    void **vtbl;
    unsigned int value;
};

extern "C" Impl *fn_8239E080(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B51BC;
    p->value = self->value;
    return p;
}
