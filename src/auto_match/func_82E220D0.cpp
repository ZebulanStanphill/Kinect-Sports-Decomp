#include "stdext/xmemory.h"

struct Elem {
    char data[0x1c];
};

struct Deque {
    int alval;
    Elem **map;
    unsigned int mapsize;
    unsigned int myoff;
    unsigned int mysize;
};

extern "C" {
void fn_82E21E18(Deque *self, unsigned int count);
void fn_8223B688(Elem *dst, const Elem *src);
}

extern "C" void fn_82E220D0(Deque *self, const Elem *val)
{
    if (self->mapsize <= self->mysize + 1)
        fn_82E21E18(self, 1);
    unsigned int newoff = self->myoff + self->mysize;
    unsigned int block = newoff;
    if (self->mapsize <= block)
        block -= self->mapsize;
    if (self->map[block] == 0)
        self->map[block] = std::_Allocate(1, (Elem *)0);
    Elem *p = self->map[block];
    if (p != 0)
        fn_8223B688(p, val);
    ++self->mysize;
}
