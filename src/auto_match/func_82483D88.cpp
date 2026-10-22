#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821BDA14[];
}

struct Impl {
    void **vtbl;
    unsigned int value;
};

extern "C" Impl *fn_82483D88(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    Impl *p = (Impl *)where;
    p->vtbl = lbl_821BDA14;
    p->value = self->value;
    return (Impl *)where;
}
