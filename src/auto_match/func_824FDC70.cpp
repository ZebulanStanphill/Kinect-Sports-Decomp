#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821C21B4[];
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

extern "C" Impl *fn_824FDC70(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    ((Impl *)where)->vtbl = lbl_821C21B4;
    ((Impl *)where)->fn = self->fn;
    return (Impl *)where;
}
