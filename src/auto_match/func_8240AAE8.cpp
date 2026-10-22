#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B7F84[];
}

struct Impl {
    void **vtbl;
    char value;
};

extern "C" Impl *fn_8240AAE8(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    ((Impl *)where)->vtbl = lbl_821B7F84;
    ((Impl *)where)->value = self->value;
    return (Impl *)where;
}
