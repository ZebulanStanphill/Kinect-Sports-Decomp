#include "stdext/xmemory.h"

struct Obj;

struct PMF {
    void *fn;
    int adj;
};

struct Bind {
    PMF pmf;
    Obj *obj;
    int pad;
};

struct BindImpl {
    void *vtbl;
    int pad;
    Bind b;
};

struct Func {
    int space[4];
    void *impl;
};

struct Impl0 {
    void *vtbl;
};

struct Ptr {
    void *p;
};

struct S5C {
    char pad[0x208];
    int *p208;
};

struct S34 { char pad[0xe4]; float f; };
struct S7C0 {
    char pad[0x10];
    struct { char pad[0x34]; S34 *p34; } *p10;
};

struct SA0 {
    char pad[0x7c0];
    S7C0 *p7c0;
};

struct S9C {
    char pad[0xd54];
    struct { char pad[0x20]; struct T30 *p20; } *pd54;
};

struct T30 {
    char pad[0x40];
    void *a;
    void *b;
};

struct Mgr {
    char pad0[0x1c];
    char sub1c[0x40];
    S5C *p5c;
    char pad60[0x9c - 0x60];
    S9C *p9c;
    SA0 *pa0;
    int a4;
    int a8;
    int ac;
    int b0;
};

struct Param {
    char pad0[0x30];
    struct { char pad[0x3e4]; SA0 *p3e4; } *p30;
    char pad34[4];
    int x38;
    char pad3c[0x54 - 0x3c];
    void *x54;
    void *x58;
    int x5c;
    int x60;
    int x64;
};

struct Z {
    char pad0[8];
    int x8;
    char padc[0x14 - 0xc];
    int x14;
    int x18;
    int x1c;
    int x20;
    int x24;
    int x28;
};

struct MgrPtr { Mgr *mgr; int x178; };

struct Obj {
    void *vtbl;
    char pad4[0x94 - 4];
    struct { char pad[0x50]; int x50; } *p94;
    char pad98[0x174 - 0x98];
    MgrPtr sp;
};

struct G {
    char pad[0x10c];
    int x10c;
};

extern "C" {
void fn_82357D28(Obj *self);
void fn_82520158(const char *name, void *out, int);
Mgr *fn_8242A830(void *mem, Obj *self, Param *param);
void fn_8242E940(Ptr *p);
int fn_8242E3E0(Obj *self);
int fn_8242E460(Obj *self);
Z *fn_8225F160(void);
void fn_8252CAF8(SA0 *p, int a, int b);
void *fn_8251F720(void **p, int);
void fn_8251FA58(void *p);
void fn_82439488(void *p);
void fn_8227CB30(void *list, Func *f);
void fn_82528E38(void *p, int id, void (*fn)(), int);
void fn_82359C18(Func *f);
void *fn_8225C590(void);
void fn_8225DBF8(void *p, Func *f);
void fn_8242F308();
void fn_8242A7F0();
extern void *lbl_821B8F30[];
extern void *lbl_821B904C[];
extern void *lbl_821B9064[];
extern float lbl_82193C20[];
extern G lbl_8326B370;
extern char lbl_8328CF70[];
extern char lbl_8327657C[];
}

extern "C" Obj *fn_8242AB58(Obj *self, Param *param)
{
    Z *z;
    T30 *t;
    fn_82357D28(self);
    self->vtbl = lbl_821B8F30;
    {
        MgrPtr *sp = &self->sp;
        sp->mgr = 0;
        sp->x178 = 0;
    }
    {
        char buf[8];
        fn_82520158("ui_handiconmanager", buf, 0);
    }
    {
        void *mem = fn_8265C9E0(0x994);
        Mgr *m = mem ? fn_8242A830(mem, self, param) : 0;
        Ptr old;
        old.p = self->sp.mgr;
        self->sp.mgr = m;
        fn_8242E940(&old);
    }
    if (fn_8242E3E0(self) != 0 || fn_8242E460(self) != 0) {
        z = fn_8225F160();
        z->x14 = 0;
        z->x1c = 0;
        z->x20 = 0;
        z->x24 = 0;
        z->x28 = 0;
        *self->sp.mgr->p5c->p208 = 0;
        z = fn_8225F160();
        z->x14 = 0;
        z->x1c = 0;
        z->x20 = 0;
        z->x24 = 0;
        z->x28 = 0;
    }
    fn_8225F160()->x8 = 1;
    self->sp.mgr->pa0 = param->p30->p3e4;
    {
        S34 *p = self->sp.mgr->pa0->p7c0->p10->p34;
        if (p != 0)
            p->f = lbl_82193C20[40];
    }
    fn_8252CAF8(self->sp.mgr->pa0, 3, 0);
    fn_8252CAF8(self->sp.mgr->pa0, 2, 0);
    fn_8252CAF8(self->sp.mgr->pa0, 1, 1);
    fn_8252CAF8(self->sp.mgr->pa0, 5, 0);
    t = self->sp.mgr->p9c->pd54->p20;
    if (param->x54 != 0 && t != 0) {
        void *v = fn_8251F720(&param->x54, 0);
        if (t->a != 0) {
            fn_8251FA58(t->a);
            t->a = 0;
        }
        t->a = v;
    }
    if (param->x58 != 0 && t != 0) {
        void *v = fn_8251F720(&param->x58, 0);
        if (t->b != 0) {
            fn_8251FA58(t->b);
            t->b = 0;
        }
        t->b = v;
    }
    self->sp.mgr->a4 = param->x5c;
    self->sp.mgr->a8 = param->x60;
    self->sp.mgr->ac = param->x38;
    self->sp.mgr->b0 = param->x64;
    lbl_8326B370.x10c = 0;
    fn_82439488(self->sp.mgr->sub1c);
    {
        Func f;
        {
            Bind bd;
            PMF pm;
            pm.fn = (void *)fn_8242F308;
            pm.adj = 0;
            bd.pmf = pm;
            bd.obj = self;
            BindImpl *n = std::_Allocate(1, (BindImpl *)0);
            n->vtbl = lbl_821B904C;
            n->b = bd;
            f.impl = n;
        }
        fn_8227CB30(lbl_8328CF70, &f);
        fn_82528E38(lbl_8327657C, 9, fn_8242A7F0, 0);
        fn_82359C18(&f);
    }
    if (self->p94 != 0)
        self->p94->x50 = 1;
    {
        Func f2;
        f2.impl = &f2;
        ((Impl0 *)&f2)->vtbl = lbl_821B9064;
        fn_8225DBF8(fn_8225C590(), &f2);
    }
    return self;
}
