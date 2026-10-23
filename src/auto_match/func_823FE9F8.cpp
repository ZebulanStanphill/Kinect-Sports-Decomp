#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B754C[];
}

struct Functor {
    unsigned char data[0x40];
};

struct Impl {
    void **vtbl;
    int pad;
    Functor f;
};

extern "C" Impl *fn_823FE9F8(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B754C;
    p->f = self->f;
    return p;
}
