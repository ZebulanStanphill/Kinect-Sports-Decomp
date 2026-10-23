#include "stdext/xmemory.h"

struct Self;

struct Pmf {
    void (*fn)(void *);
    int adj;
};

template <int N>
struct Bind {
    Pmf pmf;
    Self *obj;
    union {
        double align;
        char rest[N - 0x10];
    } u;
};

template <int N> struct Raw {unsigned char data[N];};
template <int N>
struct Impl {
    void *vtbl;
    int pad;
    Raw<N> b;
};

struct Function {
    union {
        double align;
        char space[16];
    } u;
    void *ptr;
    int pad[3];
};

struct SelfVtbl {
    void *s[20];
    char *(*get)(Self *);
};
struct Self {
    SelfVtbl *vtbl;
};

extern "C" {
extern void *lbl_821B0560[];
extern void *lbl_821B0578[];
extern void *lbl_821B0590[];
void fn_823277F0(void *);
void fn_82327898(void *);
void fn_823279C8(void *);
void fn_822CA8E0(Self *self);
void fn_82329730(void *ev, Function *f);
void fn_82359C18(Function *f);
void *memcpy(void *dst, const void *src, unsigned int size);
}

extern "C" void fn_82327408(Self *self)
{
    Bind<0x48> b0; Bind<0x50> b1;
    Function f2; Function f1; Function f0; Bind<0x20> b2;
    fn_822CA8E0(self);
    {
        Pmf pmf;
        pmf.fn = fn_823277F0;
        pmf.adj = 0;

        b0.pmf = pmf;
        b0.obj = self;

        Impl<0x48> *impl = std::_Allocate(1, (Impl<0x48> *)0);
        impl->vtbl = lbl_821B0560;
        impl->b = *(const Raw<sizeof(b0)> *)&b0;
        f0.ptr = impl;
        fn_82329730(self->vtbl->get(self) + 0x30, &f0);
        fn_82359C18(&f0);
    }
    {
        Pmf pmf;
        pmf.fn = fn_82327898;
        pmf.adj = 0;

        b1.pmf = pmf;
        b1.obj = self;

        Impl<0x50> *impl = std::_Allocate(1, (Impl<0x50> *)0);
        impl->vtbl = lbl_821B0578;
        impl->b = *(const Raw<sizeof(b1)> *)&b1;
        f1.ptr = impl;
        fn_82329730(self->vtbl->get(self) + 0xd0, &f1);
        fn_82359C18(&f1);
    }
    {
        Pmf pmf;
        pmf.fn = fn_823279C8;
        pmf.adj = 0;

        b2.pmf = pmf;
        b2.obj = self;

        Impl<0x18> *impl = std::_Allocate(1, (Impl<0x18> *)0);
        impl->vtbl = lbl_821B0590;
        impl->b = *(const Raw<0x18> *)&b2;
        f2.ptr = impl;
        fn_82329730(self->vtbl->get(self) + 0x178, &f2);
        fn_82359C18(&f2);
    }
}
