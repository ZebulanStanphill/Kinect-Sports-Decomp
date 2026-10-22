#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821A96B0[];
}

struct Impl {
    void **vtbl;
    int value;
};

extern "C" Impl *fn_8228B988(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    ((Impl *)where)->vtbl = lbl_821A96B0;
    ((Impl *)where)->value = self->value;
    return (Impl *)where;
}
