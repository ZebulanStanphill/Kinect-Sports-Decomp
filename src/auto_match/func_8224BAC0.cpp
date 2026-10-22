#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_82197AB4[];
}

struct Value {
    __int64 first;
    unsigned char data[48];
};

struct Impl {
    void **vtbl;
    Value value;
};

extern "C" Impl *fn_8224BAC0(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_82197AB4;
    p->value = self->value;
    return p;
}
