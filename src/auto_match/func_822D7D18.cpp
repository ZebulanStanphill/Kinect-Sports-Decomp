#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821AD9A8[];
}

struct Payload {
    unsigned char data[0x28];
};

struct Impl {
    void **vtbl;
    int unk[1];
    Payload value;
};

extern "C" Impl *fn_822D7D18(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821AD9A8;
    p->value = self->value;
    return p;
}
