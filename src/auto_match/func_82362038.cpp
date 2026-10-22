#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B2994[];
}

struct Impl {
    void **vtbl;
    unsigned char value;
};

extern "C" Impl *fn_82362038(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    ((Impl *)where)->vtbl = lbl_821B2994;
    ((Impl *)where)->value = self->value;
    return (Impl *)where;
}
