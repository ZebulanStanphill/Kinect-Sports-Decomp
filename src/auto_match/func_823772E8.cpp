#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B382C[];
}

struct Data {
    unsigned char b[0x28];
};

struct Impl {
    void **vtbl;
    int pad;
    Data data;
};

extern "C" Impl *fn_823772E8(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B382C;
    p->data = self->data;
    return p;
}
