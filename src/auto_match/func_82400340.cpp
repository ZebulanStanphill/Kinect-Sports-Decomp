#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B78AC[];
}

struct __declspec(align(16)) Bind {
    union {
        __int64 align;
        int v[48];
    } u;
};

struct Impl {
    void **vtbl;
    Bind b;
};

extern "C" Impl *fn_82400340(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B78AC;
    p->b = self->b;
    return p;
}
