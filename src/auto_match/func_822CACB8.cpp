#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *where) throw() { return where; }

typedef __int64 Elem;

struct Deque {
    int proxy;
    Elem **map;
    unsigned int mapsize;
    unsigned int myoff;
    unsigned int mysize;
};

extern "C" {
void fn_822CAE38(Deque *self);
}

#define DEQUESIZ (sizeof(Elem) <= 1 ? 16 : sizeof(Elem) <= 2 ? 8 : sizeof(Elem) <= 4 ? 4 : sizeof(Elem) <= 8 ? 2 : 1)

extern "C" void fn_822CACB8(Deque *self, const Elem *val)
{
    if (self->myoff % DEQUESIZ == 0
        && self->mapsize <= (self->mysize + DEQUESIZ) / DEQUESIZ)
        fn_822CAE38(self);
    unsigned int newoff = self->myoff != 0 ? self->myoff : self->mapsize * DEQUESIZ;
    unsigned int block = --newoff / DEQUESIZ;
    if (self->map[block] == 0)
        self->map[block] = std::_Allocate(DEQUESIZ, (Elem *)0);
    new (self->map[block] + newoff % DEQUESIZ) Elem(*val);
    self->myoff = newoff;
    ++self->mysize;
}
