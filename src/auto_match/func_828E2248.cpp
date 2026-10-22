#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

extern "C" void fn_8265CA20(void *p);

struct ContBase;

struct Proxy {
    const ContBase *cont;
    struct IterBase *firstiter;
    Proxy() : cont(0), firstiter(0) {}
};

struct ContBase {
    Proxy *proxy;
    ContBase() : proxy(0) {}
};

struct Deque;

template <class T> inline void Cons_val(T *p, const T &v) { ::new ((void *)p) T(v); }

extern "C" {
Deque *fn_828D7660(Deque *self, const Deque *src);
void fn_828B3E88(Deque *self);
}

struct Deque : ContBase {
    void **map;
    unsigned int mapsize;
    unsigned int myoff;
    unsigned int mysize;
    char alval;
};

struct Elem {
    int x;
    Deque d;
};

extern "C" void fn_828E2248(Elem *first, unsigned int count)
{
    for (; 0 < count; --count, ++first) {
        Elem tmp;
        tmp.d.proxy = 0;
        tmp.d.proxy = std::_Allocate(1, (Proxy *)0);
        Cons_val(tmp.d.proxy, Proxy());
        tmp.d.proxy->cont = &tmp.d;
        tmp.d.map = 0;
        tmp.d.mapsize = 0;
        tmp.d.myoff = 0;
        tmp.d.mysize = 0;
        if (first != 0) {
            first->x = tmp.x;
            fn_828D7660(&first->d, &tmp.d);
        }
        fn_828B3E88(&tmp.d);
        fn_8265CA20(tmp.d.proxy);
        tmp.d.proxy = 0;
    }
}
