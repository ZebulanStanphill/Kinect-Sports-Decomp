#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821BD4A4[];
}

struct Impl {
    void **vtbl;
    unsigned int value;
};

extern "C" Impl *fn_8247BA08(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821BD4A4;
    p->value = self->value;
    return p;
}
