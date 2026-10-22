#include "stdext/xmemory.h"

struct Str;

extern "C" {
void fn_8265CA20(void *p);
__declspec(noreturn) void fn_82F622A8(const char *msg);
void fn_8223B688(Str *self, const Str *src);
void fn_82230300(Str *self, bool built, unsigned int newsize);
}

inline void *operator new(unsigned int, void *p) { return p; }

struct Str {
    char data[0x1c];
    Str(const Str &o) { fn_8223B688(this, &o); }
    ~Str() { fn_82230300(this, true, 0); }
};

struct Elem {
    Str s;
    float f;
};

struct Vec {
    Elem *first;
    Elem *last;
    Elem *end;
};

extern "C" void fn_8236D250(Vec *v, unsigned int count)
{
    if (0x7ffffff < count)
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
            for (; src != last; ++dst, ++src)
                new ((void *)dst) Elem(*src);
        }
        unsigned int size = v->last - v->first;
        if (v->first != 0) {
            Elem *f = v->first, *l = v->last;
            for (; f != l; ++f)
                f->~Elem();
            fn_8265CA20(v->first);
        }
        v->end = ptr + count;
        v->last = ptr + size;
        v->first = ptr;
    }
}
