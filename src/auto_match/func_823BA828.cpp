#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B5C40[];
}

struct Data {
    int v[5];
};

struct Impl {
    void **vtbl;
    Data data;
};

extern "C" Impl *fn_823BA828(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B5C40;
    p->data = self->data;
    return p;
}
