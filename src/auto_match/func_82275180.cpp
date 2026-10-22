#include "stdext/xmemory.h"

extern "C" {
void fn_82275258(void *self);
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

typedef int Elem;

struct ContainerBase {
    int proxy;
};

struct DequeVal : ContainerBase {
    Elem **map;
    unsigned int mapsize;
    unsigned int off;
    unsigned int size;
};

struct Deque : DequeVal {
};

extern "C" void fn_82275180(Deque *self, const Elem *val)
{
    if ((self->off + self->size) % 4 == 0
        && self->mapsize <= (self->size + 4) / 4)
        fn_82275258(self);
    unsigned int newoff = self->off + self->size;
    unsigned int block = newoff / 4;
    if (self->mapsize <= block)
        block -= self->mapsize;
    if (self->map[block] == 0)
        self->map[block] = std::_Allocate(4, (Elem *)0);
    new ((void *)(self->map[block] + newoff % 4)) Elem(*val);
    ++self->size;
}
