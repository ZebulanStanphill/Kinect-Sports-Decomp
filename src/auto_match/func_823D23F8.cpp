#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B6224[];
}

struct Payload {
    unsigned char data[0x30];
};

struct Impl {
    void **vtbl;
    __declspec(align(16)) Payload value;
};

extern "C" Impl *fn_823D23F8(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B6224;
    p->value = self->value;
    return p;
}
