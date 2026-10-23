#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B0560[];
}

struct Functor {
    unsigned char data[0x48];
};

struct Impl {
    void **vtbl;
    int pad;
    Functor f;
};

extern "C" Impl *fn_8232A610(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B0560;
    p->f = self->f;
    return p;
}
