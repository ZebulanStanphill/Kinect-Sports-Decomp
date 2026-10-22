#include "stdext/xmemory.h"

struct Rep;
struct SP {
    void *ptr;
    Rep *rep;
};
struct Derived;

struct PMF {
    void (*fn)(Derived *);
    int adj;
};

struct Bind {
    PMF pmf;
    Derived *obj;
    int pad[3];
};

struct FuncImpl;

struct Func {
    union {
        double align;
        char space[16];
    } s;
    FuncImpl *impl;
};

struct FuncImpl {
    void **vtbl;
    int unk;
    Bind callee;
};

struct Callback {
    void **vtbl;
    Func f;
};

struct Derived {
    void **vtbl;
    int type;
    int a;
    int b;
    int c;
    int d;
    SP sp;
    int e;
    int m24;
    int m28;
    Callback cb;
};

extern "C" {
extern void *lbl_821ADF3C[];
extern void *lbl_821AE4C4[];
extern void *lbl_821AE4E4[];
extern void *lbl_821C2424[];
SP *fn_82365BD8(SP *self, const SP *src);
void fn_822315A0(Rep *rep);
void fn_822F0958(Derived *self);
void fn_82511668(Callback *self, Func *f);
void *memcpy(void *dst, const void *src, unsigned int n);
}

extern "C" Derived *fn_822EFC50(Derived *self, int a, int b, int c, int d, SP *sp, int e)
{
    {
        SP tmp;
        SP *t = fn_82365BD8(&tmp, sp);
        self->a = a;
        self->b = b;
        self->c = c;
        self->type = 4;
        self->vtbl = lbl_821ADF3C;
        self->d = d;
        fn_82365BD8(&self->sp, t);
        self->e = e;
        if (t->rep != 0)
            fn_822315A0(t->rep);
    }
    self->vtbl = lbl_821AE4C4;
    self->m24 = 0;
    self->m28 = 0;
    Callback *cb = &self->cb;
    cb->vtbl = lbl_821C2424;
    cb->f.impl = 0;
    FuncImpl *impl;
    {
        Bind bd;
        PMF pm;
        pm.fn = fn_822F0958;
        pm.adj = 0;
        bd.pmf = pm;
        bd.obj = self;
        impl = std::_Allocate(1, (FuncImpl *)0);
        impl->vtbl = lbl_821AE4E4;
        impl->callee = bd;
    }
    {
        Func f;
        f.impl = impl;
        fn_82511668(&self->cb, &f);
    }
    if (sp->rep != 0)
        fn_822315A0(sp->rep);
    return self;
}
