#include "stdext/xmemory.h"

struct String {
    int data[7];
};

struct OStream {
    int data[0x24];
};

struct Pmf {
    void *fn;
    int adj;
};

struct Functor {
    Pmf pmf;
    void *obj;
    int pad[3];
};

struct Function {
    __int64 space[2];
    void *impl;
};

struct Impl {
    void *vtbl;
    int pad;
    Functor f;
};

struct Owner {
    char pad[0x118];
    int base;
};

struct Holder {
    void *vtbl;
    Function f;
};

struct Obj {
    void *vtbl;
    char base[0x50];
    Owner *owner;
    int x58;
    String name;
    String hardName;
    int p6;
    int p7;
    int p8;
    int xa0;
    int xa4;
    Holder holder;
};

extern "C" {
void *memcpy(void *, const void *, unsigned int);
void fn_822C70F0(Obj *, int, int);
void fn_8223B688(String *, const String *);
void fn_8223CFC0(OStream *, int, int);
void fn_8223B728(OStream *, const String *);
void fn_82240158(OStream *, const char *);
void fn_822403C8(String *, void *);
void fn_822402F8(String *, String *);
void fn_82230300(String *, int, int);
void fn_82511668(Holder *, Function *);
void fn_8223DCC8(OStream *);
void fn_8232E248(Obj *);
extern char lbl_821B07D4[];
extern char lbl_821B07E8[];
extern char lbl_821C2424[];
}

extern "C" Obj *fn_8232DEA0(Obj *self, int p2, int p3, Owner *owner, const String *name,
                            int p6, int p7, int p8)
{
    OStream ss;
    String tmp;
    Impl *impl;

    fn_822C70F0(self, p2, p3);
    self->owner = owner;
    self->vtbl = lbl_821B07D4;
    self->x58 = owner->base + 0x24;
    fn_8223B688(&self->name, name);
    fn_8223B688(&self->hardName, name);
    self->p6 = p6;
    self->p7 = p7;
    self->p8 = p8;
    self->xa0 = 4;
    {
        Holder *h = &self->holder;
        h->vtbl = lbl_821C2424;
        h->f.impl = 0;
    }
    fn_8223CFC0(&ss, 2, 1);
    fn_8223B728(&ss, &self->name);
    fn_82240158(&ss, "_hard");
    fn_822403C8(&tmp, &ss.data[1]);
    fn_822402F8(&self->hardName, &tmp);
    fn_82230300(&tmp, 1, 0);
    {
        Functor bd;
        Pmf pm;
        pm.fn = (void *)fn_8232E248;
        pm.adj = 0;
        bd.pmf = pm;
        bd.obj = self;
        impl = std::_Allocate(1, (Impl *)0);
        impl->vtbl = lbl_821B07E8;
        impl->f = bd;
    }
    {
        Function fn;
        fn.impl = impl;
        fn_82511668(&self->holder, &fn);
    }
    fn_8223DCC8(&ss);
    return self;
}
