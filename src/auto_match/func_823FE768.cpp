#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B751C[];
}

struct Functor {
    unsigned char data[0x1c];
};

struct Impl {
    void **vtbl;
    Functor f;
};

extern "C" Impl *fn_823FE768(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B751C;
    p->f = self->f;
    return p;
}
