#include "stdext/exception.h"

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void *fn_8265C9E0(unsigned int size);
}

struct Elem {
    unsigned char bytes[0x14];
};

extern "C" Elem *fn_82468C20(Elem *self, const Elem *other);

struct Vec {
    Elem *first;
    Elem *last;
    Elem *end;
    unsigned char al;
};

struct S {
    int a;
    Vec v;
};

static inline bool Buy(Vec *v, unsigned int cap)
{
    v->first = 0;
    v->last = 0;
    v->end = 0;
    if (cap == 0)
        return false;
    else if (0xccccccc < cap)
        fn_82F622A8("vector<T> too long");
    else {
        void *p0 = 0;
        unsigned int n = cap;
        if (n <= 0)
            n = 0;
        else if ((unsigned int)-1 / sizeof(Elem) < n
                 || (p0 = fn_8265C9E0(n * sizeof(Elem))) == 0)
            stdext::bad_alloc(0)._Raise();
        v->first = (Elem *)p0;
        v->last = v->first;
        v->end = v->first + cap;
    }
    return true;
}


static inline Elem *Ucopy(const Elem *src, const Elem *last, Elem *dst)
{
    for (; src != last; ++dst, ++src)
        if (dst != 0)
            fn_82468C20(dst, src);
    return dst;
}
struct It { const Elem *p; It(const Elem *q) : p(q) {} };
static inline Elem *Ucopy(It f, It l, Elem *dst)
{
    return Ucopy(f.p, l.p, dst);
}

extern "C" S *fn_82468D38(S *self, const S *other)
{
    self->a = other->a;
    Vec *v = &self->v;
    const Vec *r = &other->v;
    v->first = 0;
    v->last = 0;
    v->end = 0;
    if (Buy(v, r->last - r->first)) {
        v->last = Ucopy(It(r->first), It(r->last), v->first);
    }
    return self;
}
