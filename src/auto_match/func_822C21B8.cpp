#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821ACDD4[];
}

struct Functor {
    unsigned char data[0x18];
};

struct Impl {
    void **vtbl;
    int pad;
    Functor f;
};

extern "C" Impl *fn_822C21B8(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821ACDD4;
    p->f = self->f;
    return p;
}
