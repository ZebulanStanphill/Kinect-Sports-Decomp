#include "stdext/exception.h"

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void *fn_8265C9E0(unsigned int size);
void fn_8265CA20(void *p);
}

struct Elem;
struct Sub;
extern "C" {
void fn_8243DED8(Elem *self, const Elem *src);
void fn_822980B0(Sub *self);
void fn_82230300(Elem *self, bool built, unsigned int newsize);
}

struct Sub {
    unsigned char bytes[0x14];
};

struct Elem {
    unsigned char str[0x1c];
    Sub sub;
};

struct Vec {
    Elem *first;
    Elem *last;
    Elem *end;
};

extern "C" void fn_8243DC28(Vec *v, unsigned int count)
{
    if (0x5555555 < count)
        fn_82F622A8("vector<T> too long");
    else if ((unsigned int)(v->end - v->first) < count) {
        void *p0 = 0;
        unsigned int n = count;
        if (n <= 0)
            n = 0;
        else if ((unsigned int)-1 / sizeof(Elem) < n
                 || (p0 = fn_8265C9E0(n * sizeof(Elem))) == 0)
            stdext::bad_alloc(0)._Raise();
        Elem *ptr = (Elem *)p0;
        {
            Elem *src = v->first, *last = v->last, *dst = ptr;
            for (; src != last; ++dst, ++src) {
                if (dst != 0)
                    fn_8243DED8(dst, src);
            }
        }
        unsigned int size = v->last - v->first;
        if (v->first != 0) {
            Elem *p = v->first;
            Elem *e = v->last;
            for (; p != e; ++p) {
                fn_822980B0(&p->sub);
                fn_82230300(p, true, 0);
            }
            fn_8265CA20(v->first);
        }
        v->first = ptr;
        v->end = ptr + count;
        v->last = ptr + size;
    }
}
