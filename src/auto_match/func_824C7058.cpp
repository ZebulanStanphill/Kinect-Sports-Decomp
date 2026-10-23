#include "stdext/xmemory.h"

extern "C" {
void fn_82365BD8(void *dst, const void *src);
extern void *lbl_821C0A2C[];
}

struct Ref {
    int a;
    void *p;
    int c;
};

struct Functor {
    int a;
    Ref r;
};

struct Impl {
    void **vtbl;
    Functor f;
};

extern "C" Impl *fn_824C7058(Impl *self, void *where)
{
    Impl *p;
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    p = (Impl *)where;
    p->vtbl = lbl_821C0A2C;
    const Functor *sf = &self->f;
    Functor *pf = &p->f;
    pf->a = sf->a;
    fn_82365BD8(&pf->r, &sf->r);
    return p;
}
