#include "stdext/xmemory.h"

extern "C" {
void fn_822315A0(void *rep);
void fn_8265CA20(void *p);
void fn_82231540(struct SP *first, struct SP *last);
__declspec(noreturn) void fn_82F622A8(const char *msg);
}

inline void *operator new(unsigned int, void *p) { return p; }

template <class T> struct RemRef { typedef T type; };
template <class T> struct RemRef<T &> { typedef T type; };

template <class T> inline typename RemRef<T>::type &&mv(T &&a)
{
    return (typename RemRef<T>::type &&)a;
}

template <class T> inline void swp(T &l, T &r)
{
    T tmp = mv(l);
    l = mv(r);
    r = mv(tmp);
}

struct Rep;

struct SP {
    void *ptr;
    Rep *rep;
    SP(SP &&right) : ptr(0), rep(0)
    {
        assign_rv(mv(right));
    }
    void assign_rv(SP &&right)
    {
        if (this != &right)
            swap_(right);
    }
    void swap_(SP &right)
    {
        swp(rep, right.rep);
        swp(ptr, right.ptr);
    }
    ~SP() { if (rep != 0) fn_822315A0(rep); }
};

struct Vec {
    SP *first;
    SP *last;
    SP *end;
};

extern "C" void fn_8248E8E8(Vec *v, unsigned int count)
{
    if (0x1fffffff < count)
        fn_82F622A8("vector<T> too long");
    else if ((unsigned int)(v->end - v->first) < count) {
        void *p0 = 0;
        unsigned int n = count;
        if (n <= 0)
            n = 0;
        else if ((unsigned int)-1 / sizeof(SP) < n
                 || (p0 = fn_8265C9E0(n * sizeof(SP))) == 0)
            stdext::bad_alloc(0)._Raise();
        SP *ptr = (SP *)p0;
        {
            SP *src = v->first, *last = v->last, *dst = ptr;
            for (; src != last; ++dst, ++src)
                new ((void *)dst) SP(mv(*src));
        }
        unsigned int size = v->last - v->first;
        if (v->first != 0) {
            fn_82231540(v->first, v->last);
            fn_8265CA20(v->first);
        }
        v->end = ptr + count;
        v->last = ptr + size;
        v->first = ptr;
    }
}
