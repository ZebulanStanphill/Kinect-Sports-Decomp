#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B623C[];
}

struct __declspec(align(16)) Functor {
    unsigned char data[80];
};

struct Impl {
    void **vtbl;
    Functor f;
};

extern "C" Impl *fn_823D24E8(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B623C;
    p->f = self->f;
    return p;
}
