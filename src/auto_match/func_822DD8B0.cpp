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

struct String {
    int pad[7];
};

struct Derived {
    void **vtbl;
    char base[0x50 - 4];
    int f50;
    int f54;
    int f58;
    String str;
    SP sp;
    Callback cb;
};

extern "C" {
extern void *lbl_821ADB5C[];
extern void *lbl_821ADB70[];
extern void *lbl_821C2424[];
void fn_822C70F0(Derived *self, int a, int b);
void fn_8223B688(String *self, const String *src);
SP *fn_82365BD8(SP *self, const SP *src);
void fn_822315A0(Rep *rep);
void fn_822DDCB0(Derived *self);
void fn_82511668(Callback *self, Func *f);
}

extern "C" Derived *fn_822DD8B0(Derived *self, int a, int b, int c, int d, const String *str, SP *sp)
{
    fn_822C70F0(self, a, b);
    self->f54 = c;
    self->f58 = d;
    self->vtbl = lbl_821ADB5C;
    fn_8223B688(&self->str, str);
    fn_82365BD8(&self->sp, sp);
    Callback *cb = &self->cb;
    cb->vtbl = lbl_821C2424;
    Func *fp = &cb->f;
    fp->impl = 0;
    self->f50 = 1;
    FuncImpl *impl;
    {
        Bind bd;
        PMF pm;
        pm.fn = fn_822DDCB0;
        pm.adj = 0;
        bd.pmf = pm;
        bd.obj = self;
        impl = std::_Allocate(1, (FuncImpl *)0);
        impl->vtbl = lbl_821ADB70;
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
