#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_82165F1C[];
}

struct Impl {
    void **vtbl;
    int value;
};

extern "C" Impl *fn_82F568E0(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    ((Impl *)where)->vtbl = lbl_82165F1C;
    ((Impl *)where)->value = self->value;
    return (Impl *)where;
}
