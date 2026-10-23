#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821ACDBC[];
}

struct Functor {
    unsigned char data[0x18];
};

struct Impl {
    void **vtbl;
    char pad[4];
    Functor f;
};

extern "C" Impl *fn_822C2118(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821ACDBC;
    p->f = self->f;
    return p;
}
