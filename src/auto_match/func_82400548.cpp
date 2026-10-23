#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B78DC[];
}

struct Payload {
    unsigned char data[0xa0];
};

struct Impl {
    void **vtbl;
    unsigned char pad[0x10 - 4];
    Payload value;
};

extern "C" Impl *fn_82400548(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B78DC;
    p->value = self->value;
    return p;
}
