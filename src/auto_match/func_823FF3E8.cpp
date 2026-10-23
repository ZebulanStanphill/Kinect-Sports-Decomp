#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B769C[];
}

struct Functor {
    union {
        double align;
        unsigned char data[48];
    } u;
};

struct Impl {
    void **vtbl;
    Functor f;
};

extern "C" Impl *fn_823FF3E8(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B769C;
    p->f = self->f;
    return p;
}
