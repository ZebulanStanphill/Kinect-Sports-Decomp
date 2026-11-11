// push_front of a std::deque of 52-byte elements (one per block). Growing the
// block map is the std::deque<Element_828D5B78>::_Growmap of func_828D5B78.cpp.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#define STDEXT_EXCEPTION_H
#define _Allocate _Allocate_vc
#include <deque>
#undef _Allocate
#undef _Xlength_error
#include "stdext/xmemory.h"

struct Element_828D5B78 {
    int data[13];
};

template <> void std::deque<Element_828D5B78>::_Growmap(size_type);

// _Growmap is a protected member.
struct Deque_828D5B78 : std::deque<Element_828D5B78> {
    void Growmap(size_type count) { _Growmap(count); }
};

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

extern "C" void fn_828D6BD0(Deque *self, const Elem &val)
{
    if (self->myoff % 1 == 0 && self->mapsize <= (self->mysize + 1) / 1)
        ((Deque_828D5B78 *)self)->Growmap(1);
    unsigned int newoff = self->myoff != 0 ? self->myoff : self->mapsize * 1;
    unsigned int block = --newoff / 1;
    if (self->map[block] == 0)
        self->map[block] = std::_Allocate(1, (Elem *)0);
    ::new ((void *)(self->map[block] + newoff % 1)) Elem(val);
    self->myoff = newoff;
    ++self->mysize;
}
