#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821C0FF4[];
}

struct Impl {
    void **vtbl;
    unsigned char value;
};

extern "C" Impl *fn_824DF970(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    ((Impl *)where)->vtbl = lbl_821C0FF4;
    ((Impl *)where)->value = self->value;
    return (Impl *)where;
}
