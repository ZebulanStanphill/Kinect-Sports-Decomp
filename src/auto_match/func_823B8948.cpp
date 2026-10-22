#include "stdext/xmemory.h"

template <class T> inline void swap(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}

struct SharedPtr {
    void *ptr;
    void *rep;
};

struct Other {
    int pad[2];
};

struct Inner {
    SharedPtr sp;
    Other o;
};

struct Elem {
    __int64 a;
    Inner b;
};

struct Deque {
    int proxy;
    Elem **map;
    unsigned int mapsize;
    unsigned int off;
    unsigned int size;
};

extern "C" {
void fn_823915C8(Deque *self);
void fn_8235A028(Other *self, Other *src);
}

static inline void construct(Elem *p, Elem *val)
{
    if (p != 0) {
        Inner *d = &p->b;
        Inner *s = &val->b;
        p->a = val->a;
        d->sp.ptr = 0;
        d->sp.rep = 0;
        if (&d->sp != &s->sp) {
            swap(d->sp.rep, s->sp.rep);
            swap(d->sp.ptr, s->sp.ptr);
        }
        fn_8235A028(&d->o, &s->o);
    }
}

extern "C" void fn_823B8948(Deque *self, Elem *val)
{
    unsigned int block;

    if (self->mapsize <= self->size + 1)
        fn_823915C8(self);
    block = self->off + self->size;
    if (self->mapsize <= block)
        block -= self->mapsize;
    if (self->map[block] == 0)
        self->map[block] = std::_Allocate(1, (Elem *)0);
    construct(self->map[block], val);
    ++self->size;
}
