#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B16B8[];
}

struct Functor {
    unsigned char data[0x20];
};

struct Impl {
    void **vtbl;
    char pad[4];
    Functor f;
};

extern "C" Impl *fn_8233FE38(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B16B8;
    p->f = self->f;
    return p;
}
