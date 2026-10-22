#include "stdext/exception.h"

extern "C" {
void *fn_8265C9E0(unsigned int);
extern void *lbl_821C098C[];
}

struct Obj {
    void **vtbl;
    unsigned char v;
};

static void *Allocate()
{
    void *p;
    if ((p = fn_8265C9E0(8)) == 0)
        stdext::bad_alloc(0)._Raise();
    return p;
}

extern "C" Obj *fn_824C54B0(Obj *self, void *where)
{
    if (where == 0)
        where = Allocate();
    Obj *o = (Obj *)where;
    o->vtbl = lbl_821C098C;
    o->v = self->v;
    return o;
}
