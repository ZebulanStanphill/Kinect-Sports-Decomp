#include "stdext/xmemory.h"

extern "C" {
void fn_823B8BB8(void *self);
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
};

struct Elem {
    unsigned __int64 key;
    SharedPtr value;

    Elem(Elem &&right) : key(right.key), value((SharedPtr &&)right.value) {}
};

struct Deque {
    int proxy;
    Elem **map;
    unsigned int mapsize;
    unsigned int off;
    unsigned int size;
};

extern "C" void fn_823B8510(Deque *self, Elem *val)
{
    if ((self->off + self->size) % 1 == 0
        && self->mapsize <= (self->size + 1) / 1)
        fn_823B8BB8(self);
    unsigned int newoff = self->off + self->size;
    unsigned int block = newoff / 1;
    if (self->mapsize <= block)
        block -= self->mapsize;
    if (self->map[block] == 0)
        self->map[block] = std::_Allocate(1, (Elem *)0);
    new ((void *)(self->map[block] + newoff % 1)) Elem((Elem &&)*val);
    ++self->size;
}
