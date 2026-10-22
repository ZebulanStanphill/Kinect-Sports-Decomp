#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821C287C[];
}

struct Impl {
    void **vtbl;
    int value;
};

extern "C" Impl *fn_82519CB0(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    ((Impl *)where)->vtbl = lbl_821C287C;
    ((Impl *)where)->value = self->value;
    return (Impl *)where;
}
