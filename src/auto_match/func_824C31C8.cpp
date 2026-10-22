#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821C0814;
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Impl {
    void *vtbl;
    unsigned int a;
    Impl(const Impl &o) { vtbl = &lbl_821C0814; a = o.a; }
};

extern "C" Impl *fn_824C31C8(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    new (where) Impl(*self);
    return (Impl *)where;
}
