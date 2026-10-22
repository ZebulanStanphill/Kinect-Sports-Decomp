#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B14A8[];
}

struct Value {
    unsigned char data[24];
};

struct Impl {
    void **vtbl;
    int pad;
    Value value;
};

extern "C" Impl *fn_8233D650(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B14A8;
    p->value = self->value;
    return p;
}
