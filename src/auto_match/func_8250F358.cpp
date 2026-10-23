#include "stdext/xmemory.h"
extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
}

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

struct Inner { __int64 a, b, c, d; };

static __forceinline void destroy_inner(Inner *first, Inner *last)
{
    for (; first != last; ++first)
        ;
}

struct InnerVec {
    Inner *first;
    Inner *last;
    Inner *end;
    __forceinline void tidy()
    {
        if (first != 0) {
            destroy_inner(first, last);
            fn_8265CA20(first);
        }
        first = 0;
        last = 0;
        end = 0;
    }
};

struct T {
    int pad[4];
    InnerVec vec;
    int pad2;
};

static __forceinline void destroy_range(T *first, T *last)
{
    for (; first != last; ++first)
        first->vec.tidy();
}

extern "C" void fn_8250F498(T *dst, T *src);

struct Vec {
    T *first;
    T *last;
    T *end;
};

static T *umove(T *src, T *last, T *dst)
{
    for (; src != last; ++dst, ++src)
        fn_8250F498(dst, src);
    return dst;
}

extern "C" void fn_8250F358(Vec *v, unsigned int count)
{
    if (0x7ffffff < count)
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
