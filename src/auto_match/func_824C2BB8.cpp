#include "stdext/exception.h"

extern "C" {
void *fn_8265C9E0(unsigned int);
extern void *lbl_821C0784[];
}

struct Impl {
    void **vtbl;
    unsigned int value;
};

template <class T>
inline T *Allocate(unsigned int count, T *)
{
    void *ptr = 0;
    if (count <= 0)
        count = 0;
    else if ((unsigned int)(-1) / count < sizeof(T)
             || (ptr = fn_8265C9E0(count * sizeof(T))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (T *)ptr;
}

extern "C" Impl *fn_824C2BB8(Impl *self, void *where)
{
    if (where == 0)
        where = Allocate(1, (Impl *)0);
    Impl *p = (Impl *)where;
    p->vtbl = lbl_821C0784;
    p->value = self->value;
    return (Impl *)where;
}
