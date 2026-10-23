#include "stdext/xmemory.h"
inline void *operator new(unsigned int, void *p) throw() { return p; }

extern "C" {
void fn_8238F360();
void fn_8238F198();
void fn_8238EFD8();
void fn_8238F488();
void fn_8238F5A8();
extern void *lbl_821B4870[];
extern void *lbl_821B4888[];
extern void *lbl_821B48A0[];
extern void *lbl_821B48B8[];
extern void *lbl_821B48D0[];
}

struct Obj;

template <int N> struct Raw { unsigned char d[N]; };

template <int N>
struct Bind {
    void (*fn)();
    Obj *obj;
    char rest[N - 8];
    Bind(void (*f)(), Obj *o) : fn(f), obj(o) {}
};

struct Function {
    union {
        double align;
        char space[16];
    } u;
    void *ptr;
    Function() : ptr(0) {}
    template <int N>
    __forceinline Function(const Bind<N> &b, void **vtbl)
    {
        if (N + 4 <= 16) {
            struct Impl { void *vtbl; Raw<N> f; };
            Impl *p = (Impl *)&u;
            p->vtbl = vtbl;
            p->f = *(const Raw<N> *)&b;
            ptr = p;
        } else {
            struct Impl { void *vtbl; Raw<N> f; };
            Impl *p = std::_Allocate(1, (Impl *)0);
            p->vtbl = vtbl;
            p->f = *(const Raw<N> *)&b;
            ptr = p;
        }
    }
    ~Function();
};

extern "C" {
void fn_82329730(void *ev, const Function &f);
void fn_82359C18(Function *f);
}
inline Function::~Function() { fn_82359C18(this); }

struct Proxy {
    const void *cont;
    void *iter;
    Proxy() : cont(0), iter(0) {}
};

template <class T>
struct Alloc {
    T *allocate(unsigned int n) { return std::_Allocate(n, (T *)0); }
    void construct(T *p, T &&v) { ::new ((void *)p) T(static_cast<T &&>(v)); }
};

struct Deque {
    Proxy *proxy;
    void *map;
    unsigned int mapsize, off, size;
    __forceinline Deque() : proxy(0)
    {
        Alloc<Proxy> al;
        proxy = al.allocate(1);
        al.construct(proxy, Proxy());
        proxy->cont = this;
        map = 0;
        mapsize = 0;
        off = 0;
        size = 0;
    }
};

struct Obj {
    Function cb0, cb1, cb2, cb3, cb4;
    char *owner;
    Deque deque;
    __forceinline Obj(char *o);
};

__forceinline Obj::Obj(char *o) : owner(o)
{
    fn_82329730(owner + 0x28, Function(Bind<0x20>(fn_8238F360, this), lbl_821B4870));
    fn_82329730(owner + 0xc0, Function(Bind<0x28>(fn_8238F198, this), lbl_821B4888));
    fn_82329730(owner + 0x168, Function(Bind<0xc>(fn_8238EFD8, this), lbl_821B48A0));
    fn_82329730(owner + 0x1d8, Function(Bind<0x1c>(fn_8238F488, this), lbl_821B48B8));
    fn_82329730(owner + 0x268, Function(Bind<0x2c>(fn_8238F5A8, this), lbl_821B48D0));
}

extern "C" Obj *fn_8238E960(Obj *self, char *owner)
{
    self->Obj::Obj(owner);
    return self;
}
