#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B7894[];
}

struct Value {
    unsigned char b[0xd0];
};

struct Impl {
    void **vtbl;
    int pad[3];
    Value value;
};

extern "C" Impl *fn_82400230(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B7894;
    p->value = self->value;
    return p;
}
