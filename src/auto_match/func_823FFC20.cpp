#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B77D4[];
}

struct Value {
    unsigned char b[0x20];
};

struct Impl {
    void **vtbl;
    int pad;
    Value value;
};

extern "C" Impl *fn_823FFC20(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B77D4;
    p->value = self->value;
    return p;
}
