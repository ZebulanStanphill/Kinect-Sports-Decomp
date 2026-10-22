#include "stdext/xmemory.h"

struct Inner {
    int data[5];
};

struct InnerVec {
    Inner *first;
    Inner *last;
    Inner *end;
};

struct Elem {
    int a;
    InnerVec v;
    int b;
};

extern "C" {
void fn_82468D38(Elem *dst, const Elem *src);
void fn_82468F58(Inner *p);
void fn_8265CA20(void *p);
__declspec(noreturn) void fn_82F622A8(const char *msg);
}

struct Vec {
    Elem *first;
    Elem *last;
    Elem *end;
};

static inline void InnerDestroy(Inner *f, Inner *l)
{
    for (; f != l; ++f)
        fn_82468F58(f);
}

static inline void InnerTidy(InnerVec *v)
{
    if (v->first != 0) {
        InnerDestroy(v->first, v->last);
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
}

static inline void Destroy(Elem *f, Elem *l)
{
    for (; f != l; ++f)
        InnerTidy(&f->v);
}

static inline Elem *Umove(Elem *f, Elem *l, Elem *d)
{
    for (; f != l; ++d, ++f)
        if ((void *)d != 0)
            fn_82468D38(d, f);
    return d;
}

static inline Elem *Allocate(unsigned int count)
{
    void *ptr = 0;
    if (count <= 0)
        count = 0;
    else if ((unsigned int)-1 / sizeof(Elem) < count
             || (ptr = fn_8265C9E0(count * sizeof(Elem))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (Elem *)ptr;
}

extern "C" void fn_824680D0(Vec *self, unsigned int count)
{
    if (0xccccccc < count)
        fn_82F622A8("vector<T> too long");
    else if ((unsigned int)(self->end - self->first) < count) {
        Elem *ptr = Allocate(count);
        Umove(self->first, self->last, ptr);
        unsigned int size = self->last - self->first;
        if (self->first != 0) {
            Destroy(self->first, self->last);
            fn_8265CA20(self->first);
        }
        self->end = ptr + count;
        self->last = ptr + size;
        self->first = ptr;
    }
}
