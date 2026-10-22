#include "stdext/xmemory.h"

struct Member {
    char data[0x8];
};

extern "C" {
extern void *lbl_821B5EA4[];
void fn_82365BD8(Member *dst, const Member *src);
}

struct Impl {
    void **vtbl;
    Member value;
};

extern "C" Impl *fn_823BCAF8(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B5EA4;
    fn_82365BD8(&p->value, &self->value);
    return p;
}
