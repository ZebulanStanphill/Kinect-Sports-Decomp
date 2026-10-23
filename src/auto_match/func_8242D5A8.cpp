#include "stdext/xmemory.h"

struct Self;

struct PMF {
    void (*fn)();
    int adj;
};

struct Bind {
    PMF pmf;
    Self *obj;
    int pad;
};

struct FuncImpl {
    void **vtbl;
    int unk;
    Bind callee;
};

struct Func {
    union {
        double align;
        char space[16];
    } s;
    FuncImpl *impl;
};

struct Info {
    char pad[0x114];
    int kind;
};

struct Item {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28();
    virtual void v2c(void *arg);
    char pad[0x3c];
    Info *info;
};

struct ItemVec {
    Item **first, **last, **end;
    unsigned size() const { return last - first; }
    Item *operator[](unsigned i) const { return *(first + i); }
};

struct P {
    char pad[0x1c4];
    ItemVec items;
};

struct Sub {
    char pad[0x3c];
    void *a3c;
    P *p40;
};

struct X {
    char pad[0x1c];
    Sub sub;
};

struct Target {
    char pad[0x30];
    char list[4];
};

struct Obj {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44(); virtual void v48();
    virtual Target *v4c();
};

struct Self {
    char pad[0x84];
    Obj *o84;
    char pad2[0x174 - 0x88];
    X *x;
};

extern "C" {
extern void *lbl_821B904C[];
void fn_8242D888();
void fn_822B1A68(void *, void *);
void fn_82383300(void *list, Func *f);
void fn_82359C18(Func *f);
}

extern "C" void fn_8242D5A8(Self *self, void **flags)
{
    Sub *sub = &self->x->sub;
    if (flags[0] != 0)
        fn_822B1A68(sub->a3c, flags[0]);
    for (unsigned i = 0; i < sub->p40->items.size(); i++) {
        Item *it = sub->p40->items[i];
        void *v;
        switch (it->info->kind) {
        case 1: v = flags[1]; break;
        case 2: v = flags[5]; break;
        case 3: v = flags[3]; break;
        case 4: v = flags[4]; break;
        case 5: v = flags[2]; break;
        default: continue;
        }
        if (v != 0)
            it->v2c(v);
    }
    Obj *o = self->o84;
    Bind bd;
    PMF pm;
    pm.fn = fn_8242D888;
    pm.adj = 0;
    bd.pmf = pm;
    bd.obj = self;
    FuncImpl *impl = std::_Allocate(1, (FuncImpl *)0);
    impl->vtbl = lbl_821B904C;
    impl->callee = bd;
    Func f;
    f.impl = impl;
    fn_82383300(o->v4c()->list, &f);
    fn_82359C18(&f);
}
