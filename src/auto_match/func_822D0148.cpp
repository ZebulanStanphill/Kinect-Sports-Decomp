#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821AD4FC[];
}

struct Payload {
    unsigned char data[0x18];
};

struct Impl {
    void **vtbl;
    unsigned char pad[0x8 - 4];
    Payload value;
};

extern "C" Impl *fn_822D0148(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821AD4FC;
    p->value = self->value;
    return p;
}
