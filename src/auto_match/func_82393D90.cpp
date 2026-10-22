#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B4948[];
}

struct __declspec(align(16)) Member {
    char data[0xc0 - 0x10];
};

extern "C" Member *fn_82392860(Member *self, const Member *other);

struct Impl {
    void **vtbl;
    Member m;
};

extern "C" Impl *fn_82393D90(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821B4948;
    fn_82392860(&p->m, &self->m);
    return p;
}
