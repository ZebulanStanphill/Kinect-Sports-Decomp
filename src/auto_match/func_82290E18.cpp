#include "stdext/exception.h"

extern "C" {
void *fn_8265C9E0(unsigned int);
extern void *lbl_821A9CB0[];
}

struct Obj {
    void **vtbl;
    int v;
};

static void *Allocate()
{
    void *p;
    if ((p = fn_8265C9E0(8)) == 0)
        stdext::bad_alloc(0)._Raise();
    return p;
}

extern "C" Obj *fn_82290E18(Obj *self, void *where)
{
    if (where == 0)
        where = Allocate();
    Obj *o = (Obj *)where;
    o->vtbl = lbl_821A9CB0;
    o->v = self->v;
    return o;
}
