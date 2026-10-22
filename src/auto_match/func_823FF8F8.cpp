#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B775C[];
}

struct Fn {
    int a;
    int b;
    int c;
    int d;
};

struct Impl {
    void **vtbl;
    Fn fn;
};

extern "C" Impl *fn_823FF8F8(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    ((Impl *)where)->vtbl = lbl_821B775C;
    ((Impl *)where)->fn = self->fn;
    return (Impl *)where;
}
