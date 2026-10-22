#include "stdext/xmemory.h"

struct Elem {
    int a;
    int b;
};

extern "C" {
void fn_82365BD8(Elem *dst, const Elem *src);
__declspec(noreturn) void fn_82F622A8(const char *msg);
}

struct Vec {
    Elem *first;
    Elem *last;
    Elem *end;
    bool buy(unsigned int cap)
    {
        first = 0;
        last = 0;
        end = 0;
        if (cap == 0)
            return false;
        else if (0x1fffffff < cap)
            fn_82F622A8("vector<T> too long");
        else {
            first = std::_Allocate(cap, (Elem *)0);
            last = first;
            end = first + cap;
        }
        return true;
    }
};

struct CIt {
    const Elem *p;
    CIt(const Elem *q) : p(q) {}
    bool operator!=(const CIt &o) const { return p != o.p; }
    CIt &operator++() { ++p; return *this; }
    const Elem &operator*() const { return *p; }
};
static Elem *uninit(const Elem *f, const Elem *l, Elem *d)
{
    for (; f != l; ++d, ++f)
        if ((void *)d != 0)
            fn_82365BD8(d, f);
    return d;
}

static Elem *ucopy(CIt f, CIt l, Elem *d)
{
    return uninit(f.p, l.p, d);
}

extern "C" Vec *fn_822CFF20(Vec *self, const Vec *right)
{
    self->first = 0;
    self->last = 0;
    self->end = 0;
    bool ok;
    unsigned int cap = right->last - right->first;
    self->first = 0;
    self->last = 0;
    self->end = 0;
    if (cap == 0)
        ok = false;
    else {
        if (0x1fffffff < cap)
            fn_82F622A8("vector<T> too long");
        void *p0 = 0;
        unsigned int n = cap;
        if (n <= 0)
            n = 0;
        else if ((unsigned int)-1 / sizeof(Elem) < n
                 || (p0 = fn_8265C9E0(n * sizeof(Elem))) == 0)
            stdext::bad_alloc(0)._Raise();
        self->first = (Elem *)p0;
        self->last = self->first;
        self->end = self->first + cap;
        ok = true;
    }
    if (ok)
        self->last = ucopy(CIt(right->first), CIt(right->last), self->first);
    return self;
}
