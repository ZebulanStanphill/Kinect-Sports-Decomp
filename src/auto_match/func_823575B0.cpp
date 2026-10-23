#include "stdext/xmemory.h"
extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
}

struct T { unsigned char d[0x5c]; };

template <class U> __forceinline U *Allocate(unsigned int count, U *)
{
    void *ptr = 0;
    if (count <= 0)
        count = 0;
    else if ((unsigned int)-1 / sizeof(U) < count
             || (ptr = fn_8265C9E0(count * sizeof(U))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (U *)ptr;
}

struct Vec {
    T *first;
    T *last;
    T *end;
};

template <class U> inline void destroy_one(U *p)
{
    p->~U();
}

template <class U> inline void destroy_range(U *first, U *last)
{
    for (; first != last; ++first)
        destroy_one(first);
}

static T *umove(T *src, T *last, T *dst)
{
    for (; src != last; ++dst, ++src)
        if (dst != 0) *dst = *src;
    return dst;
}

extern "C" void fn_823575B0(Vec *v, unsigned int count)
{
    if (0x2c8590b < count)
        fn_82F622A8("vector<T> too long");
    else if ((unsigned int)(v->end - v->first) < count) {
        T *ptr = Allocate(count, (T *)0);
        umove(v->first, v->last, ptr);
        unsigned int size = v->last - v->first;
        if (v->first != 0) {
            destroy_range(v->first, v->last);
            fn_8265CA20(v->first);
        }
        v->end = ptr + count;
        v->last = ptr + size;
        v->first = ptr;
    }
}
