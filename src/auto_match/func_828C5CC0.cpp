#include "stdext/xmemory.h"

// Inlined _Uninitialized_default_fill_n for a scalar type: _Fill_n(first, count, 0)
template <class T> inline void Fill_n(T *first, unsigned int count, const T &val)
{
    for (; 0 < count; --count, ++first)
        *first = val;
}

struct ContBase;

struct Proxy {
    const ContBase *cont;
    struct IterBase *firstiter;
};

struct ContBase {
    Proxy *proxy;
};

struct IterBase {
    Proxy *proxy;
    IterBase *next;
    IterBase() : proxy(0), next(0) {}
    IterBase(const IterBase &right) : proxy(0), next(0) { *this = right; }
    IterBase &operator=(const IterBase &right)
    {
        if (proxy != right.proxy)
            Adopt(right.proxy->cont);
        return *this;
    }
    void Adopt(const ContBase *parent)
    {
        if (parent != 0)
            proxy = parent->proxy;
    }
};

struct ConstIter : IterBase {
    unsigned int off;
    ConstIter(unsigned int o, const ContBase *d)
    {
        Adopt(d);
        off = o;
    }
};

struct Iter : ConstIter {
    Iter(unsigned int o, const ContBase *d) : ConstIter(o, d) {}
    Iter &operator+=(int n)
    {
        off += n;
        return *this;
    }
    Iter operator+(int n) const
    {
        Iter tmp = *this;
        return tmp += n;
    }
};

struct Deque;

extern "C" {
void fn_828C49F8(Deque *, unsigned int);
Iter fn_828C5A90(Deque *, ConstIter, ConstIter);
}

struct Deque : ContBase {
    unsigned int **map;
    unsigned int mapsize;
    unsigned int myoff;
    unsigned int mysize;

    Iter begin() { return Iter(myoff, this); }
    Iter end() { return Iter(myoff + mysize, this); }
    unsigned int size() const { return mysize; }
};

extern "C" void fn_828C5CC0(Deque *self, unsigned int newsize)
{
    if (newsize < self->mysize) {
        fn_828C5A90(self, self->begin() + newsize, self->end());
    } else if (self->mysize < newsize) {
        while (self->mysize < newsize) {
            if ((self->myoff + self->mysize) % 4 == 0 && self->mapsize <= (self->mysize + 4) / 4)
                fn_828C49F8(self, 1);
            unsigned int newoff = self->myoff + self->mysize;
            unsigned int block = newoff / 4;
            if (self->mapsize <= block)
                block -= self->mapsize;
            if (self->map[block] == 0)
                self->map[block] = std::_Allocate(4, (unsigned int *)0);
            Fill_n(self->map[block] + newoff % 4, 1, (unsigned int)0);
            ++self->mysize;
        }
    }
}
