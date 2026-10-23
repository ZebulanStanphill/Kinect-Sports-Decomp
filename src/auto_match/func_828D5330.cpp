#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct ContBase;
struct IterBase;

struct Proxy {
    const ContBase *cont;
    IterBase *firstiter;
    Proxy() : cont(0), firstiter(0) {}
};

struct ContBase {
    Proxy *proxy;
    ContBase() : proxy(0) {}
};

template <class T> struct Alloc {
    T *allocate(unsigned int n) { return std::_Allocate(n, (T *)0); }
    void construct(T *p, T &&v) { ::new ((void *)p) T(static_cast<T &&>(v)); }
};

struct DequeVal : ContBase {
    unsigned int **map;
    unsigned int mapsize;
    unsigned int myoff;
    unsigned int mysize;
};

extern "C" DequeVal *fn_828D5330(DequeVal *self)
{
    self->proxy = 0;
    Alloc<Proxy> al;
    self->proxy = al.allocate(1);
    al.construct(self->proxy, Proxy());
    self->proxy->cont = self;
    self->map = 0;
    self->mapsize = 0;
    self->myoff = 0;
    self->mysize = 0;
    return self;
}
