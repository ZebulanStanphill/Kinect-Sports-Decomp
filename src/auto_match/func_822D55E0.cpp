#include "stdext/xmemory.h"

struct Pmf {
    void (*fn)(void *);
    int adj;
};

struct Callable {
    virtual Callable *Copy(void *) = 0;
    virtual void pad1() = 0;
    virtual void pad2() = 0;
    virtual void Delete(bool) = 0;
};

struct Function {
    union {
        double align;
        char space[16];
    } u;
    Callable *impl;
    int pad[3];
};

template <int N>
struct Bind {
    Pmf pmf;
    void *obj;
    union {
        double align;
        char rest[N - 0xc];
    } u;
};

template <int N>
struct Impl {
    void *vtbl;
    int pad;
    struct Raw { unsigned char data[N]; } b;
};

class Owner {
public:
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7();
    virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11();
    virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15();
    virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19();
    virtual char *Events();
};

extern "C" {
void fn_822CA8E0(Owner *self);
void fn_82359C18(Function *f);
void fn_822D5EB0(void *);
void fn_822D5EE0(void *);
void fn_822D6118(void *);
void fn_822D5F00(void *);
extern void *lbl_821AD9A8[];
extern void *lbl_821AD9C0[];
extern void *lbl_821AD9D8[];
extern void *lbl_821AD9F0[];
}

extern "C" void fn_822D55E0(Owner *self)
{
    Function f1, f2, f3, f4;
    fn_822CA8E0(self);
    {
        Pmf pmf;
        pmf.fn = fn_822D5EB0;
        pmf.adj = 0;
        Bind<0x28> b;
        b.pmf = pmf;
        b.obj = self;
        Impl<0x28> *impl = std::_Allocate(1, (Impl<0x28> *)0);
        impl->vtbl = lbl_821AD9A8;
        impl->b = *(const Impl<0x28>::Raw *)&b;
        f1.impl = (Callable *)impl;
        Function *to = (Function *)(self->Events() + 0x80);
        if (to != &f1) {
            if (to->impl) {
                to->impl->Delete(to->impl != (Callable *)to);
                to->impl = 0;
            }
            if (!f1.impl)
                to->impl = 0;
            else if (f1.impl == (Callable *)&f1)
                to->impl = f1.impl->Copy(to);
            else {
                to->impl = f1.impl;
                f1.impl = 0;
            }
        }
        fn_82359C18(&f1);
    }
    {
        Pmf pmf;
        pmf.fn = fn_822D5EE0;
        pmf.adj = 0;
        Bind<0x18> b;
        b.pmf = pmf;
        b.obj = self;
        Impl<0x18> *impl = std::_Allocate(1, (Impl<0x18> *)0);
        impl->vtbl = lbl_821AD9C0;
        impl->b = *(const Impl<0x18>::Raw *)&b;
        f2.impl = (Callable *)impl;
        Function *to = (Function *)(self->Events() + 0x100);
        if (to != &f2) {
            if (to->impl) {
                to->impl->Delete(to->impl != (Callable *)to);
                to->impl = 0;
            }
            if (!f2.impl)
                to->impl = 0;
            else if (f2.impl == (Callable *)&f2)
                to->impl = f2.impl->Copy(to);
            else {
                to->impl = f2.impl;
                f2.impl = 0;
            }
        }
        fn_82359C18(&f2);
    }
    {
        Pmf pmf;
        pmf.fn = fn_822D6118;
        pmf.adj = 0;
        Bind<0x18> b;
        b.pmf = pmf;
        b.obj = self;
        Impl<0x18> *impl = std::_Allocate(1, (Impl<0x18> *)0);
        impl->vtbl = lbl_821AD9D8;
        impl->b = *(const Impl<0x18>::Raw *)&b;
        f3.impl = (Callable *)impl;
        Function *to = (Function *)(self->Events() + 0x170);
        if (to != &f3) {
            if (to->impl) {
                to->impl->Delete(to->impl != (Callable *)to);
                to->impl = 0;
            }
            if (!f3.impl)
                to->impl = 0;
            else if (f3.impl == (Callable *)&f3)
                to->impl = f3.impl->Copy(to);
            else {
                to->impl = f3.impl;
                f3.impl = 0;
            }
        }
        fn_82359C18(&f3);
    }
    {
        Pmf pmf;
        pmf.fn = fn_822D5F00;
        pmf.adj = 0;
        Bind<0x28> b;
        b.pmf = pmf;
        b.obj = self;
        Impl<0x28> *impl = std::_Allocate(1, (Impl<0x28> *)0);
        impl->vtbl = lbl_821AD9F0;
        impl->b = *(const Impl<0x28>::Raw *)&b;
        f4.impl = (Callable *)impl;
        Function *to = (Function *)(self->Events() + 0x1e0);
        if (to != &f4) {
            if (to->impl) {
                to->impl->Delete(to->impl != (Callable *)to);
                to->impl = 0;
            }
            if (!f4.impl)
                to->impl = 0;
            else if (f4.impl == (Callable *)&f4)
                to->impl = f4.impl->Copy(to);
            else {
                to->impl = f4.impl;
                f4.impl = 0;
            }
        }
        fn_82359C18(&f4);
    }
}
