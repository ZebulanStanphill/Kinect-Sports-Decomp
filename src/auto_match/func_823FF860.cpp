#include "stdext/exception.h"

extern "C" {
void *fn_8265C9E0(unsigned int);
extern char lbl_821B7744[];
}

struct Impl {
    void *vtbl;
    unsigned int a;
    unsigned int b;
    unsigned int c;
};

extern "C" Impl *fn_823FF860(Impl *self, Impl *where)
{
    if (where == 0) {
        void *p = fn_8265C9E0(0x10);
        if (p == 0)
            stdext::bad_alloc(0)._Raise();
        where = (Impl *)p;
    }
    where->vtbl = lbl_821B7744;
    where->a = self->a;
    where->b = self->b;
    where->c = self->c;
    return where;
}
