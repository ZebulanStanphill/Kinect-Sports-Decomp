#include "stdext/exception.h"

extern "C" {
void *fn_8265C9E0(unsigned int);
extern void *lbl_821ACE14[];
}

struct Functor {
    void **vtbl;
    unsigned int a;
    unsigned int b;
    unsigned int c;
};

extern "C" Functor *fn_822C23B8(Functor *self, void *where)
{
    void *p;
    if (where == 0) {
        p = fn_8265C9E0(0x10);
        if (p == 0)
            stdext::bad_alloc(0)._Raise();
        where = p;
    }
    Functor *f = (Functor *)where;
    f->vtbl = lbl_821ACE14;
    f->a = self->a;
    f->b = self->b;
    f->c = self->c;
    return f;
}
