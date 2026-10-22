#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_82196E7C[];
}

struct Impl {
    void **vtbl;
    int value;
};

extern "C" Impl *fn_8223A8D0(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    ((Impl *)where)->vtbl = lbl_82196E7C;
    ((Impl *)where)->value = self->value;
    return (Impl *)where;
}
