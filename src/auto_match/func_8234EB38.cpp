#include "stdext/xmemory.h"

extern "C" __declspec(noreturn) void fn_82F622A8(const char *);
extern "C" void *memmove(void *, const void *, unsigned);
extern "C" void fn_8265CA20(void *);

struct Vec {
    unsigned *first, *last, *end;
};

static unsigned *Ucopy(unsigned *a, unsigned *z, unsigned *d)
{
    unsigned n = (z - a) * sizeof(unsigned);
    return (unsigned *)((char *)memmove(d, a, n) + n);
}

static void Ufill_n(unsigned *p, unsigned n, const unsigned *v)
{
    for (; 0 < n; --n, ++p)
        *p = *v;
}

static unsigned *Ufill(unsigned *p, unsigned n, const unsigned *v)
{
    Ufill_n(p, n, v);
    return p + n;
}

static __forceinline unsigned *Alloc(unsigned n)
{
    void *p = 0;
    if (n == 0)
        n = 0;
    else if (n > 0x3fffffff || (p = fn_8265C9E0(n * 4)) == 0)
        stdext::bad_alloc(0)._Raise();
    return (unsigned *)p;
}

extern "C" void fn_8234EB38(Vec *self, unsigned *where, unsigned count, const unsigned *val)
{
    if (count == 0)
        return;
    unsigned size = self->last - self->first;
    if (0x3fffffff - size < count)
        fn_82F622A8("vector<T> too long");
    unsigned cap = self->end - self->first;
    if (cap < size + count) {
        cap = (0x3fffffff - cap / 2 < cap) ? 0 : cap + cap / 2;
        if (cap < size + count)
            cap = size + count;
        unsigned *newvec = Alloc(cap);
        unsigned off = where - self->first;
        Ufill_n(newvec + off, count, val);
        Ucopy(self->first, where, newvec);
        Ucopy(where, self->last, newvec + (off + count));
        count += self->last - self->first;
        if (self->first != 0)
            fn_8265CA20(self->first);
        self->first = newvec;
        self->end = newvec + cap;
        self->last = newvec + count;
    } else if ((unsigned)(self->last - where) < count) {
        unsigned tmp = *val;
        Ucopy(where, self->last, where + count);
        Ufill(self->last, count - (self->last - where), &tmp);
        self->last += count;
        unsigned *e = self->last - count;
        for (unsigned *p = where; p != e; ++p)
            *p = tmp;
    } else {
        unsigned tmp = *val;
        unsigned *oldend = self->last;
        self->last = Ucopy(oldend - count, oldend, self->last);
        unsigned n = (oldend - count - where);
        memmove(oldend - n, where, n * sizeof(unsigned));
        for (unsigned *p = where; p != where + count; ++p)
            *p = tmp;
    }
}
