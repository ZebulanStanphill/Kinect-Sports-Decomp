#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B76CC[];
}

struct Functor {
    unsigned char data[0x24];
};

struct Impl {
    void **vtbl;
    Functor f;
};

extern "C" Impl *fn_823FF530(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B76CC;
    p->f = self->f;
    return p;
}
