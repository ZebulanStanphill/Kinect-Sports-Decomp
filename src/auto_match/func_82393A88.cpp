#include "stdext/xmemory.h"

struct Member {
    char data[0xa0];
};

extern "C" {
extern void *lbl_821B4900[];
void fn_823926F0(Member *dst, const Member *src);
}

struct Impl {
    void **vtbl;
    int pad[3];
    Member value;
};

extern "C" Impl *fn_82393A88(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B4900;
    fn_823926F0(&p->value, &self->value);
    return p;
}
