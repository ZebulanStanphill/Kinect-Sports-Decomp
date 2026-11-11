#include "stdext/xmemory.h"

struct Pmf_8232B908 {
    void (*fn)();
    int adj;
};

struct Bind_8232B908 {
    Pmf_8232B908 pmf;
    int *obj;
    int pad[3];
};

struct Impl_8232B908 {
    void **vtbl;
    int pad;
    struct Raw { unsigned char data[0x18]; } b;
};

struct Function_8232B908 {
    union {
        double align;
        char space[16];
    } u;
    Impl_8232B908 *ptr;
};

struct Pair_8232B908 { void *ptr, *owner; };

extern "C" {
extern void *lbl_821B066C[];
void fn_8232B9C0();
void fn_82321370(Pair_8232B908 *out, void *src, const Function_8232B908 *f);
void fn_823F2E20(void *dst, Pair_8232B908 *p);
void fn_822315A0(void *);
void fn_82359C18(Function_8232B908 *f);
}

extern "C" void fn_8232B908(int *self, char *other)
{
    Function_8232B908 f;
    {
        Pmf_8232B908 pmf;
        pmf.fn = fn_8232B9C0;
        pmf.adj = 0;
        Bind_8232B908 b;
        b.pmf = pmf;
        b.obj = self;
        Impl_8232B908 *impl = std::_Allocate(1, (Impl_8232B908 *)0);
        impl->vtbl = lbl_821B066C;
        impl->b = *(const Impl_8232B908::Raw *)&b;
        f.ptr = impl;
    }
    {
        Pair_8232B908 result;
        fn_82321370(&result, other + 0x508, &f);
        fn_823F2E20((char *)self + 0x20, &result);
        if (result.owner)
            fn_822315A0(result.owner);
    }
    fn_82359C18(&f);
}
