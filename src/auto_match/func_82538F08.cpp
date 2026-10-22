#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821C4044[];
}

struct Impl {
    void **vtbl;
    unsigned int value;
};

extern "C" Impl *fn_82538F08(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821C4044;
    p->value = self->value;
    return p;
}
