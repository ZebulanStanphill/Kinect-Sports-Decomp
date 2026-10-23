#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B787C[];
}

struct Functor {
    unsigned char data[0xa0];
};

struct Impl {
    void **vtbl;
    char pad[12];
    Functor f;
};

extern "C" Impl *fn_82400140(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B787C;
    p->f = self->f;
    return p;
}
