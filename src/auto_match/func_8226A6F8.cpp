#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821A7E0C[];
}

struct Impl {
    void **vtbl;
    unsigned int value;
};

extern "C" Impl *fn_8226A6F8(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    Impl *p = (Impl *)where;
    p->vtbl = lbl_821A7E0C;
    p->value = self->value;
    return (Impl *)where;
}
