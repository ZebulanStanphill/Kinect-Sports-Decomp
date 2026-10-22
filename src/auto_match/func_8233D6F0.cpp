#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B14C0[];
}

struct Impl {
    void **vtbl;
    unsigned int value;
};

extern "C" Impl *fn_8233D6F0(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    Impl *p = (Impl *)where;
    p->vtbl = lbl_821B14C0;
    p->value = self->value;
    return p;
}
