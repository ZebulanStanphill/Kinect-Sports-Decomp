#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_8219854C[];
}

struct Impl {
    void **vtbl;
    unsigned int value;
};

extern "C" Impl *fn_8225C2B0(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_8219854C;
    p->value = self->value;
    return p;
}
