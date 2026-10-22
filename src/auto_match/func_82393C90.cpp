#include "stdext/xmemory.h"

struct Member {
    char data[0x70];
};

extern "C" {
extern void *lbl_821B4930[];
void fn_823927F0(Member *dst, const Member *src);
}

struct Impl {
    void **vtbl;
    int pad[3];
    Member value;
};

extern "C" Impl *fn_82393C90(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B4930;
    fn_823927F0(&p->value, &self->value);
    return p;
}
