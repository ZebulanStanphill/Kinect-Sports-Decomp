#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821C27E8[];
}

struct Payload {
    unsigned char data[0x38];
};

struct Impl {
    void **vtbl;
    unsigned char pad[0x8 - 4];
    Payload value;
};

extern "C" Impl *fn_82517AC0(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821C27E8;
    p->value = self->value;
    return p;
}
