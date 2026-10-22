#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B7E20[];
}

struct Impl {
    void **vtbl;
    int value;
};

extern "C" Impl *fn_82407AB8(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    ((Impl *)where)->vtbl = lbl_821B7E20;
    ((Impl *)where)->value = self->value;
    return (Impl *)where;
}
