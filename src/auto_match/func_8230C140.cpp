#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821AF354[];
}

struct Functor {
    unsigned char data[0x38];
};

struct Impl {
    void **vtbl;
    char pad[4];
    Functor f;
};

extern "C" Impl *fn_8230C140(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821AF354;
    p->f = self->f;
    return p;
}
