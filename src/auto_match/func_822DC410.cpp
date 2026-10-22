#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821ADB2C[];
}

struct Impl {
    void **vtbl;
    char value;
};

extern "C" Impl *fn_822DC410(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    ((Impl *)where)->vtbl = lbl_821ADB2C;
    ((Impl *)where)->value = self->value;
    return (Impl *)where;
}
