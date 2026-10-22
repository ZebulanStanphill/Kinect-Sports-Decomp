#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821C07FC[];
}

struct Impl {
    void **vtbl;
    int value;
};

extern "C" Impl *fn_824C30D0(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    ((Impl *)where)->vtbl = lbl_821C07FC;
    ((Impl *)where)->value = self->value;
    return (Impl *)where;
}
