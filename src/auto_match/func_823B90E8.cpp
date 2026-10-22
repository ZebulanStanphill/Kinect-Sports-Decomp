#include "stdext/xmemory.h"

extern "C" {
void fn_822315A0(void *rep);
void fn_8265CA20(void *p);
__declspec(noreturn) void fn_82F622A8(const char *msg);
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

template <class T>
inline void Swap(T &left, T &right)
{
    T tmp = left;
    left = right;
    right = tmp;
}

struct SharedPtr {
    void *ptr;
    void *rep;

    SharedPtr(SharedPtr &&right) : ptr(0), rep(0)
    {
        if (this != &right) {
            Swap(rep, right.rep);
            Swap(ptr, right.ptr);
        }
    }
    ~SharedPtr()
    {
        if (rep != 0)
            fn_822315A0(rep);
    }
};

struct Elem {
    unsigned __int64 key;
    SharedPtr value;

    Elem(Elem &&right) : key(right.key), value((SharedPtr &&)right.value) {}
};

struct Vector {
    Elem *first;
    Elem *last;
    Elem *end;
};

extern "C" void fn_823B90E8(Vector *self, unsigned int count)
{
    if (0x0fffffff < count)
        fn_82F622A8("vector<T> too long");
    else if ((unsigned int)(self->end - self->first) < count) {
        Elem *ptr;
        {
            void *vp = 0;
            unsigned int n = count;
            if (n <= 0)
                n = 0;
            else if ((unsigned int)-1 / sizeof(Elem) < n
                     || (vp = fn_8265C9E0(n * sizeof(Elem))) == 0)
                stdext::bad_alloc(0)._Raise();
            ptr = (Elem *)vp;
        }
        {
            Elem *src = self->first;
            Elem *srcend = self->last;
            Elem *dest = ptr;
            for (; src != srcend; ++dest, ++src)
                new ((void *)dest) Elem((Elem &&)*src);
        }
        unsigned int size = self->last - self->first;
        if (self->first != 0) {
            Elem *p = self->first;
            Elem *e = self->last;
            for (; p != e; ++p)
                p->value.~SharedPtr();
            fn_8265CA20(self->first);
        }
        self->end = ptr + count;
        self->last = ptr + size;
        self->first = ptr;
    }
}
