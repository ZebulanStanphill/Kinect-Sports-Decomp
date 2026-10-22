#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

extern "C" void fn_8265CA20(void *p);

struct String {
    char data[0x1c];
};

extern "C" {
String *fn_8223B688(String *self, const String *src);
void fn_82230300(String *self, bool built, unsigned int newsize);
__declspec(noreturn) void fn_82F622A8(const char *msg);
}

struct Pair {
    String first;
    String second;
};

struct Vector {
    Pair *first;
    Pair *last;
    Pair *end;
};

extern "C" void fn_822C1B68(Vector *self, unsigned int count)
{
    if (0x4924924 < count)
        fn_82F622A8("vector<T> too long");
    else if ((unsigned int)(self->end - self->first) < count) {
        void *p0 = 0;
        unsigned int n = count;
        if (n <= 0)
            n = 0;
        else if ((unsigned int)-1 / sizeof(Pair) < n
                 || (p0 = fn_8265C9E0(n * sizeof(Pair))) == 0)
            stdext::bad_alloc(0)._Raise();
        Pair *ptr = (Pair *)p0;
        {
            Pair *src = self->first, *srcend = self->last, *dst = ptr;
            for (; src != srcend; ++dst, ++src) {
                if (dst != 0) {
                    fn_8223B688(&dst->first, &src->first);
                    fn_8223B688(&dst->second, &src->second);
                }
            }
        }
        unsigned int size = self->last - self->first;
        if (self->first != 0) {
            Pair *p = self->first;
            Pair *e = self->last;
            for (; p != e; ++p) {
                fn_82230300(&p->second, true, 0);
                fn_82230300(&p->first, true, 0);
            }
            fn_8265CA20(self->first);
        }
        self->end = ptr + count;
        self->last = ptr + size;
        self->first = ptr;
    }
}
