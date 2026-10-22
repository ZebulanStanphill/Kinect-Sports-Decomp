#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *where) throw() { return where; }

extern "C" {
extern void *lbl_82024D24[];
}

struct Text {
    unsigned short c[21];
    Text &operator=(const Text &o)
    {
        for (int i = 0; i < 21; i++)
            c[i] = o.c[i];
        return *this;
    }
};

struct Elem {
    void **vtbl;
    int value;
    Text text;
    Elem(const Elem &o)
    {
        vtbl = lbl_82024D24;
        value = o.value;
        text = o.text;
    }
};

struct Deque {
    int proxy;
    Elem **map;
    unsigned int mapsize;
    unsigned int myoff;
    unsigned int mysize;
};

extern "C" {
void fn_828D5B78(Deque *self, unsigned int count);
}

extern "C" void fn_828D6BD0(Deque *self, const Elem &val)
{
    if (self->myoff % 1 == 0 && self->mapsize <= (self->mysize + 1) / 1)
        fn_828D5B78(self, 1);
    unsigned int newoff = self->myoff != 0 ? self->myoff : self->mapsize * 1;
    unsigned int block = --newoff / 1;
    if (self->map[block] == 0)
        self->map[block] = std::_Allocate(1, (Elem *)0);
    ::new ((void *)(self->map[block] + newoff % 1)) Elem(val);
    self->myoff = newoff;
    ++self->mysize;
}
