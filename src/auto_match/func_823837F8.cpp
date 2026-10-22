#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B3B9C[];
}

struct Value {
    __int64 first;
    unsigned char data[80];
};

struct Impl {
    void **vtbl;
    Value value;
};

extern "C" Impl *fn_823837F8(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B3B9C;
    p->value = self->value;
    return p;
}
