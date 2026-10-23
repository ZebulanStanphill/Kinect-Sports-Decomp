#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B75DC[];
}

struct Functor {
    unsigned char data[0x48];
};

struct Impl {
    void **vtbl;
    char pad[4];
    Functor f;
};

extern "C" Impl *fn_823FEE80(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B75DC;
    p->f = self->f;
    return p;
}
