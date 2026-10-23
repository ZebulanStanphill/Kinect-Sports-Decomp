#include "stdext/xmemory.h"

struct Self;

struct Pmf {
    void (*fn)(void *);
    int adj;
};

struct Bind {
    Pmf pmf;
    Self *obj;
    union {
        double align;
        char rest[0x38 - 0x10];
    } u;
};

struct Impl {
    void *vtbl;
    int pad;
    struct Raw { unsigned char data[0x38]; } b;
};

struct Function {
    union {
        double align;
        char space[16];
    } u;
    Impl *ptr;
    int pad[3];
};

struct Self;
struct SelfVtbl {
    void *s0;
    void *s1;
    char *(*get)(Self *);
};
struct Self {
    SelfVtbl *vtbl;
};

extern "C" {
extern void *lbl_821C27E8[];
void fn_82516790(void *);
void fn_825166A0(Self *self);
void fn_82F565A0(Function *dst, const Function *src);
void fn_8289C940(void *ev, Function *f);
void fn_82359C18(Function *f);
void *memcpy(void *dst, const void *src, unsigned int size);
}

extern "C" void fn_825165E0(Self *self)
{
    Pmf pmf;
    pmf.fn = fn_82516790;
    pmf.adj = 0;
    Bind b;
    b.pmf = pmf;
    b.obj = self;
    Function f;
    Function tmp;
    Impl *impl = std::_Allocate(1, (Impl *)0);
    impl->vtbl = lbl_821C27E8;
    impl->b = *(const Impl::Raw *)&b;
    f.ptr = impl;
    fn_82F565A0(&tmp, &f);
    fn_8289C940(self->vtbl->get(self) + 0x48, &tmp);
    fn_825166A0(self);
    fn_82359C18(&f);
}
