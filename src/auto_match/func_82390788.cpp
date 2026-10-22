#include "stdext/xmemory.h"

struct T {
    char data[0x18];
};

struct Deque {
    void *proxy;
    T **map;
    unsigned int mapsize;
    unsigned int myoff;
    unsigned int mysize;
};

extern "C" {
void fn_823915C8(Deque *self);
void fn_82392C68(T *self, const T *val);
}

extern "C" void fn_82390788(Deque *self, const T *val)
{
    if (self->mapsize <= self->mysize + 1)
        fn_823915C8(self);
    unsigned int newoff = self->myoff + self->mysize;
    unsigned int block = newoff / 1;
    if (self->mapsize <= block)
        block -= self->mapsize;
    if (self->map[block] == 0)
        self->map[block] = std::_Allocate(1, (T *)0);
    T *p = self->map[block] + newoff % 1;
    if (p != 0)
        fn_82392C68(p, val);
    ++self->mysize;
}
