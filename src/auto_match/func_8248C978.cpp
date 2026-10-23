#include "stdext/xmemory.h"

struct Elem {
    char data[0x68];
};

extern "C" {
Elem *fn_8248CC38(Elem *self, const Elem *other);
void fn_8248BC38(Elem *self, int flags);
__declspec(noreturn) void fn_82F622A8(const char *msg);
void fn_8265CA20(void *p);
}

struct Vec {
    Elem *first;
    Elem *last;
    Elem *end;
};

extern "C" void fn_8248C978(Vec *self, unsigned int count)
{
    if (0x2762762 < count)
        fn_82F622A8("vector<T> too long");
    else if ((unsigned int)(self->end - self->first) < count) {
        Elem *ptr = 0;
        unsigned int n = count;
        if (n <= 0)
            n = 0;
        else if ((unsigned int)-1 / sizeof(Elem) < n
                 || (ptr = (Elem *)fn_8265C9E0(n * sizeof(Elem))) == 0)
            stdext::bad_alloc(0)._Raise();
        Elem *src = self->first;
        Elem *last = self->last;
        Elem *dest = ptr;
        for (; src != last; ++dest, ++src) {
            if (dest != 0)
                fn_8248CC38(dest, src);
        }
        unsigned int size = self->last - self->first;
        if (self->first != 0) {
            Elem *p = self->first;
            Elem *e = self->last;
            for (; p != e; ++p)
                fn_8248BC38(p, 0);
            fn_8265CA20(self->first);
        }
        self->end = ptr + count;
        self->last = ptr + size;
        self->first = ptr;
    }
}
