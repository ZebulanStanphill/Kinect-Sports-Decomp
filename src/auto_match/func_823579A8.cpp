#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B23F0[];
}

struct Impl {
    void **vtbl;
    int value;
};

extern "C" Impl *fn_823579A8(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    ((Impl *)where)->vtbl = lbl_821B23F0;
    ((Impl *)where)->value = self->value;
    return (Impl *)where;
}
