#include "stdext/xmemory.h"
extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_822315A0(void *rep);
}

struct SP {
    void *ptr;
    void *rep;
};

struct T {
    int pad[0x13];
    SP sp;
    int pad2[3];
};

extern "C" void fn_8250B068(T *dst, const T *src);

struct Vec {
    T *first;
    T *last;
    T *end;
};

extern "C" void fn_8250AB88(Vec *v, unsigned int count)
{
    if (0x2aaaaaa < count)
        fn_82F622A8("vector<T> too long");
    if ((unsigned int)(v->end - v->first) < count) {
        void *p0 = 0;
        if (count <= 0)
            ;
        else if ((unsigned int)-1 / sizeof(T) < count
                 || (p0 = fn_8265C9E0(count * sizeof(T))) == 0)
            stdext::bad_alloc(0)._Raise();
        T *ptr = (T *)p0;
        T *src = v->first;
        T *last = v->last;
        T *dst = ptr;
        for (; src != last; ++dst, ++src)
            if (dst != 0)
                fn_8250B068(dst, src);
        unsigned int size = v->last - v->first;
        if (v->first != 0) {
            T *p = v->first;
            T *e = v->last;
            for (; p != e; ++p) {
                SP *s = &p->sp;
                if (s->rep != 0) fn_822315A0(s->rep);
            }
            fn_8265CA20(v->first);
        }
        v->end = ptr + count;
        v->last = ptr + size;
        v->first = ptr;
    }
}
