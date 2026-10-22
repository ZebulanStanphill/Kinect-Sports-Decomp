#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B9064[];
}

struct Impl {
    void **vtbl;
    unsigned char value;
};

extern "C" Impl *fn_8242EF58(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B9064;
    p->value = self->value;
    return p;
}
