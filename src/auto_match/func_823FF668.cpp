#include "stdext/exception.h"

extern "C" {
void *fn_8265C9E0(unsigned int);
extern void *lbl_821B76FC[];
}

struct Callee {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
};

struct Functor {
    void **vtbl;
    Callee obj;
};

extern "C" Functor *fn_823FF668(Functor *self, void *where)
{
    void *p;
    if (where == 0) {
        p = fn_8265C9E0(0x14);
        if (p == 0)
            stdext::bad_alloc(0)._Raise();
        where = p;
    }
    Functor *f = (Functor *)where;
    f->vtbl = lbl_821B76FC;
    f->obj = self->obj;
    return f;
}
