#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B7534[];
}

struct Value {
    unsigned char data[32];
};

struct Impl {
    void **vtbl;
    Value value;
};

extern "C" Impl *fn_823FE8B0(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B7534;
    p->value = self->value;
    return p;
}
