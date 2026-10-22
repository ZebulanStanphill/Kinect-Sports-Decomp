#include "stdext/xmemory.h"

extern "C" void fn_825AD308(void *self, unsigned int count);

inline void *operator new(unsigned int, void *where) { return where; }

typedef int T;

struct Deque {
    int proxy;
    T **map;
    unsigned int mapsize;
    unsigned int off;
    unsigned int size;
};

extern "C" void fn_8287D048(Deque *self, const T *val)
{
    if (self->off % 4 == 0 && self->mapsize <= (self->size + 4) / 4)
        fn_825AD308(self, 1);
    unsigned int newoff = self->off != 0 ? self->off : self->mapsize * 4;
    unsigned int block = --newoff / 4;
    if (self->map[block] == 0)
        self->map[block] = std::_Allocate(4, (T *)0);
    new ((void *)(self->map[block] + newoff % 4)) T(*val);
    self->off = newoff;
    ++self->size;
}
