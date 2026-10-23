#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B6254[];
}

struct __declspec(align(16)) Functor {
    unsigned char data[0xa0];
};

struct Impl {
    void **vtbl;
    Functor f;
};

extern "C" Impl *fn_823D25F0(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B6254;
    p->f = self->f;
    return p;
}
