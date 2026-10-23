#include "stdext/exception.h"

struct Elem;
typedef Elem *Ptr;

struct Deque {
    void *proxy;
    Ptr *map;
    unsigned int mapsize;
    unsigned int off;
    unsigned int size;
};

extern "C" {
extern Deque lbl_832967A0;
__declspec(noreturn) void fn_82F622A8(const char *msg);
void fn_8265CA20(void *p);
void *fn_8265C9E0(unsigned int n);
void *memmove(void *dst, const void *src, unsigned int n);
}

static __forceinline Ptr *allocate(unsigned int count)
{
    void *ptr = 0;
    if (count <= 0) {
        count = 0;
    } else if ((unsigned int)-1 / sizeof(Ptr) < count || (ptr = fn_8265C9E0(count * sizeof(Ptr))) == 0) {
        stdext::bad_alloc(0)._Raise();
    }
    return (Ptr *)ptr;
}

static Ptr *copy(Ptr *first, Ptr *last, Ptr *dest)
{
    int n = last - first;
    return (Ptr *)memmove(dest, first, n * sizeof(Ptr)) + n;
}

static void fill_n(Ptr *first, unsigned int count, Ptr val)
{
    for (; 0 < count; --count, ++first)
        *first = val;
}

extern "C" void fn_82530448(void)
{
    Deque *d = &lbl_832967A0;
    unsigned int count = 1;
    if (0x2762762 - d->mapsize < count)
        fn_82F622A8("deque<T> too long");
    unsigned int inc = d->mapsize / 2;
    if (inc < 8)
        inc = 8;
    count = count < inc && d->mapsize <= 0x2762762 - inc ? inc : count;
    unsigned int myboff = d->off;
    Ptr *newmap = allocate(d->mapsize + count);
    Ptr *myptr = newmap + myboff;
    myptr = copy(d->map + myboff, d->map + d->mapsize, myptr);
    if (myboff <= count) {
        Ptr *myptr1 = copy(d->map, d->map + myboff, myptr);
        fill_n(myptr1, count - myboff, 0);
        fill_n(newmap, myboff, 0);
    } else {
        copy(d->map, d->map + count, myptr);
        Ptr *myptr1 = copy(d->map + count, d->map + myboff, newmap);
        fill_n(myptr1, count, 0);
    }
    if (d->map != 0)
        fn_8265CA20(d->map);
    d->map = newmap;
    d->mapsize += count;
}
