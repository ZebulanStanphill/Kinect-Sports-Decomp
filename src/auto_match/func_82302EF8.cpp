#include "stdext/exception.h"

extern "C" {
void *fn_8265C9E0(unsigned int);
extern char lbl_821AEDF0[];
}

struct Impl {
    void *vtbl;
    int a;
    int b;
};

static inline void *allocate(unsigned int count)
{
    void *p;
    if (count > 0x15555555 || (p = fn_8265C9E0(count * sizeof(Impl))) == 0)
        stdext::bad_alloc(0)._Raise();
    return p;
}

extern "C" Impl *fn_82302EF8(Impl *self, void *where)
{
    if (where == 0)
        where = allocate(1);
    Impl *p = (Impl *)where;
    p->vtbl = lbl_821AEDF0;
    p->a = self->a;
    p->b = self->b;
    return p;
}
