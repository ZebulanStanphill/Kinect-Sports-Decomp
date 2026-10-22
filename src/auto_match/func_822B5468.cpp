#include "stdext/exception.h"

extern "C" {
void *fn_8265C9E0(unsigned int);
extern void *lbl_821AC9A0[];
}

struct Impl {
    void **vtable;
    int a;
    int b;
};

template<class T> inline T *Allocate(unsigned int count, T *)
{
    void *ptr = 0;
    if (count <= 0)
        count = 0;
    else if (((unsigned int)(-1) / sizeof(T) < count)
        || (ptr = fn_8265C9E0(count * sizeof(T))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (T *)ptr;
}

extern "C" Impl *fn_822B5468(Impl *self, void *where)
{
    if (where == 0)
        where = Allocate(1, (Impl *)0);
    Impl *p = (Impl *)where;
    p->vtable = lbl_821AC9A0;
    p->a = self->a;
    p->b = self->b;
    return (Impl *)where;
}
