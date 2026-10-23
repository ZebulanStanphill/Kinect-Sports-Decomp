#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B790C[];
}

struct Payload {
    unsigned char data[0x100];
};

struct Impl {
    void **vtbl;
    int unk[3];
    Payload value;
};

extern "C" Impl *fn_82400778(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B790C;
    p->value = self->value;
    return p;
}
