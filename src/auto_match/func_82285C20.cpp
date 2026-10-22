#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821A8D9C[];
}

struct Impl {
    void **vtbl;
    unsigned int value;
};

extern "C" Impl *fn_82285C20(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821A8D9C;
    p->value = self->value;
    return p;
}
