#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821C103C[];
}

struct Impl {
    void **vtbl;
    unsigned char value;
};

extern "C" Impl *fn_824DFFA8(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821C103C;
    p->value = self->value;
    return p;
}
