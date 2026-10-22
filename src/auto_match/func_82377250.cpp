#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B3814[];
}

struct Impl {
    void **vtbl;
    unsigned char value;
};

extern "C" Impl *fn_82377250(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B3814;
    p->value = self->value;
    return p;
}
