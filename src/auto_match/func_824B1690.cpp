#include "stdext/exception.h"

struct Elem {
    unsigned __int64 d[4];
};

struct CB {
    Elem *buff;
    Elem *end;
    Elem *first;
    Elem *last;
    unsigned int size;
};

struct Iter {
    CB *cb;
    Elem *it;
};

extern "C" {
void fn_824B1A08(Iter *self, int n);
void fn_8265CA20(void *p);
void *fn_8265C9E0(unsigned int n);
}

static __forceinline Elem *allocate(unsigned int count)
{
    void *ptr = 0;
    if (count <= 0) {
        count = 0;
    } else if ((unsigned int)-1 / sizeof(Elem) < count || (ptr = fn_8265C9E0(count * sizeof(Elem))) == 0) {
        stdext::bad_alloc(0)._Raise();
    }
    return (Elem *)ptr;
}

static const unsigned int &Min(const unsigned int &a, const unsigned int &b)
{
    return b < a ? b : a;
}

static unsigned int Size(CB *cb)
{
    return cb->size;
}

static void add(Iter *self, int n)
{
    CB *cb = self->cb;
    if (n > 0) {
        Elem *p = self->it;
        self->it = p + (n < (cb->end - p) ? n : n - (cb->end - cb->buff));
        if (self->it == cb->last)
            self->it = 0;
    } else if (n < 0) {
        fn_824B1A08(self, -n);
    }
}

static void increment(CB *cb, Elem *&p)
{
    if (++p == cb->end)
        p = cb->buff;
}

extern "C" void fn_824B1690(CB *cb)
{
    unsigned int newcap = 200;
    if ((unsigned int)(cb->end - cb->buff) != newcap) {
        Elem *buff = allocate(newcap);
        Elem *bit = 0;
        if (Size(cb) != 0)
            bit = cb->first;
        int n = Min(newcap, Size(cb));
        Iter e;
        e.cb = cb;
        e.it = bit;
        add(&e, n);
        Elem *last = e.it;
        Elem *it = bit;
        Elem *dest = buff;
        for (; it != last; ++dest) {
            if (dest != 0)
                *dest = *it;
            increment(cb, it);
            if (it == cb->last)
                it = 0;
        }
        for (unsigned int ii = 0; ii < cb->size; ++ii, increment(cb, cb->first))
            ;
        if (cb->buff != 0)
            fn_8265CA20(cb->buff);
        cb->buff = buff;
        cb->first = buff;
        cb->end = buff + newcap;
        cb->size = dest - buff;
        cb->last = dest == cb->end ? buff : dest;
    }
}
