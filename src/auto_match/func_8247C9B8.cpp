#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821BD534[];
}

struct Impl {
    void **vtbl;
    int value;
};

extern "C" Impl *fn_8247C9B8(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    ((Impl *)where)->vtbl = lbl_821BD534;
    ((Impl *)where)->value = self->value;
    return (Impl *)where;
}
