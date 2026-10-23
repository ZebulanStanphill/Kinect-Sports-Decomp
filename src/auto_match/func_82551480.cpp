#include "stdext/xmemory.h"

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
}

struct Elem {
    int v;
};

struct Vec {
    Elem *first;
    Elem *last;
    Elem *end;
};

extern "C" bool fn_82551480(Vec *self, unsigned int count)
{
    self->first = 0;
    self->last = 0;
    self->end = 0;
    if (count == 0)
        return false;
    else if (0x3fffffff < count)
        fn_82F622A8("vector<T> too long");
    else {
        Elem *ptr = 0;
        unsigned int n = count;
        if (n <= 0)
            n = 0;
        else if ((unsigned int)-1 / sizeof(Elem) < n
                 || (ptr = (Elem *)fn_8265C9E0(n * sizeof(Elem))) == 0)
            stdext::bad_alloc(0)._Raise();
        self->first = ptr;
        self->last = self->first;
        self->end = self->first + count;
    }
    return true;
}
