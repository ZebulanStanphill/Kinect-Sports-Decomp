#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *where) { return where; }

typedef __int64 T;

struct DequeVal {
    int proxy;
    T **map;
    unsigned int mapsize;
    unsigned int myoff;
    unsigned int mysize;
};

struct Deque : DequeVal {
};

extern "C" void fn_822CAE38(Deque *self);

extern "C" void fn_823B8438(Deque *self, const T *val)
{
    if ((self->myoff + self->mysize) % 2 == 0
        && self->mapsize <= (self->mysize + 2) / 2)
        fn_822CAE38(self);
    unsigned int newoff = self->myoff + self->mysize;
    unsigned int block = newoff / 2;
    if (self->mapsize <= block)
        block -= self->mapsize;
    if (self->map[block] == 0)
        self->map[block] = std::_Allocate(2, (T *)0);
    new ((void *)(self->map[block] + newoff % 2)) T(*val);
    ++self->mysize;
}
