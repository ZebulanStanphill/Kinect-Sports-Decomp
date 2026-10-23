#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821ACA0C[];
}

struct Value {
    unsigned char b[0x18];
};

struct Impl {
    void **vtbl;
    int pad;
    Value value;
};

extern "C" Impl *fn_822B7B90(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821ACA0C;
    p->value = self->value;
    return p;
}
