#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821BAAB0;
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Impl {
    void *vtbl;
    unsigned char a;
    Impl(const Impl &o) { vtbl = &lbl_821BAAB0; a = o.a; }
};

extern "C" Impl *fn_824595A8(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    new (where) Impl(*self);
    return (Impl *)where;
}
