#include "stdext/xmemory.h"

struct Elem {
    int data[0x18];
};

struct Deque {
    int alval;
    Elem **map;
    unsigned int mapsize;
    unsigned int myoff;
    unsigned int mysize;
};

extern "C" {
void fn_825AD550(Deque *self);
}

extern "C" void fn_825ACC50(Deque *self, const Elem *val)
{
    if (self->mapsize <= self->mysize + 1)
        fn_825AD550(self);
    unsigned int newoff = self->myoff + self->mysize;
    unsigned int block = newoff;
    if (self->mapsize <= block)
        block -= self->mapsize;
    if (self->map[block] == 0)
        self->map[block] = std::_Allocate(1, (Elem *)0);
    Elem *p = self->map[block];
    if (p != 0)
        *p = *val;
    ++self->mysize;
}
