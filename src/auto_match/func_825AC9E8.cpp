#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *where) { return where; }

typedef int T;

struct DequeVal {
    int proxy;
    T **map;
    unsigned int mapsize;
    unsigned int myoff;
    unsigned int mysize;
};

struct Deque : DequeVal {
};

extern "C" void fn_825AD308(Deque *self, unsigned int count);

extern "C" void fn_825AC9E8(Deque *self, const T *val)
{
    if ((self->myoff + self->mysize) % 4 == 0
        && self->mapsize <= (self->mysize + 4) / 4)
        fn_825AD308(self, 1);
    unsigned int newoff = self->myoff + self->mysize;
    unsigned int block = newoff / 4;
    if (self->mapsize <= block)
        block -= self->mapsize;
    if (self->map[block] == 0)
        self->map[block] = std::_Allocate(4, (T *)0);
    new ((void *)(self->map[block] + newoff % 4)) T(*val);
    ++self->mysize;
}
