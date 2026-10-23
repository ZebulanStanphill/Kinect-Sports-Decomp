#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821AD0F8[];
}

struct Data {
    unsigned char b[0x38];
};

struct Impl {
    void **vtbl;
    int pad;
    Data data;
};

extern "C" Impl *fn_822CBB08(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821AD0F8;
    p->data = self->data;
    return p;
}
