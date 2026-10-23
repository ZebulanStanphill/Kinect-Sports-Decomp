#include "stdext/exception.h"

extern "C" long _InterlockedIncrement(long volatile *);
extern "C" long _InterlockedDecrement(long volatile *);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct RefBase {
    virtual void _Destroy() = 0;
    virtual void _Delete_this() = 0;
    long _Uses;
    long _Weaks;
    void _Incwref() { _InterlockedIncrement((volatile long *)&_Weaks); }
    void _Decwref() { if (_InterlockedDecrement((volatile long *)&_Weaks) == 0) _Delete_this(); }
};

struct Obj;
struct WeakPtr {
    Obj *_Ptr;
    RefBase *_Rep;
    void _Resetw(Obj *op, RefBase *orep) {
        if (orep) orep->_Incwref();
        if (_Rep != 0) _Rep->_Decwref();
        _Rep = orep;
        _Ptr = op;
    }
};
struct ESFT {
    WeakPtr _Wptr;
};
struct Obj {
    int vt;
    ESFT es;
    char rest[0x258 - 12];
};
struct Block {
    void **vtbl;
    long uses;
    long weaks;
    int pad;
    Obj obj;
};

struct SP {
    Obj *_Ptr;
    RefBase *_Rep;
    void _Resetp0(Obj *op, RefBase *orep) {
        _Rep = orep;
        _Ptr = op;
        if (op) {
            WeakPtr *w = &op->es._Wptr;
            orep->_Incwref();
            if (w->_Rep != 0) w->_Rep->_Decwref();
            w->_Rep = orep;
            w->_Ptr = op;
        }
    }
};
struct SPArg {
    void *ptr;
    void *rep;
};

struct Sub { int d[6]; };
struct BaseA { int a; };
struct BaseB { int b; };
struct Multi : BaseA, BaseB { };
struct Desc {
    int f70;
    BaseB *f74;
    int f78;
    int f7c;
    int f80;
    int f84;
    Sub sub;
    int fa0;
    int fa4;
    int fa8;
};

struct Self {
    char pad[0x2c4];
    Multi *m2c4;
};

extern "C" {
extern void *lbl_821C5398[];
extern int lbl_8326B7C8;
void *fn_8265C9E0(unsigned int);
void fn_827D9630(Sub *, void *);
void fn_825BCDA8(Obj *, Desc *);
void fn_82A1BB18(void);
unsigned int fn_8259A230(void);
void fn_82517978(SP *, Obj *, RefBase *, int);
void fn_827D7270(Self *, SP *, int, int, int, int);
void fn_827D59F0(Self *, SP *, int, int, int, int);
void fn_82599418(void);
void fn_8256D528(void *, SP *);
void fn_822315A0(void *);
}

extern "C" int fn_8256C290(void *src, Self *self, int a, int b, void *out, SPArg *arg, int c)
{
    Desc d;
    BaseB *x = self->m2c4; d.f74 = x;
    d.f78 = 0;
    d.f7c = 0;
    d.f80 = 2;
    int g = lbl_8326B7C8;
    fn_827D9630(&d.sub, src);
    d.fa0 = g;
    d.fa4 = 0;
    d.fa8 = c;
    Block *p = (Block *)fn_8265C9E0(sizeof(Block));
    if (p != 0) {
        p->uses = 1;
        p->weaks = 1;
        p->vtbl = lbl_821C5398;
        Obj *s = &p->obj;
        if (s != 0)
            fn_825BCDA8(s, &d);
        Obj *o = &p->obj;
        SP sp;
        sp._Rep = (RefBase *)p;
        sp._Ptr = o;
        if (o) {
            WeakPtr *w = &o->es._Wptr;
            ((RefBase *)p)->_Incwref();
            if (w->_Rep != 0) w->_Rep->_Decwref();
            w->_Rep = (RefBase *)p;
            w->_Ptr = o;
        }
        fn_82A1BB18();
        if (fn_8259A230() == 1) {
            SP t;
            t._Ptr = 0;
            t._Rep = 0;
            fn_82517978(&t, o, (RefBase *)p, 0);
            fn_827D7270(self, &t, c, a, b, 0);
        } else {
            SP t;
            t._Ptr = 0;
            t._Rep = 0;
            fn_82517978(&t, o, (RefBase *)p, 0);
            fn_827D59F0(self, &t, c, a, b, 0);
        }
        fn_82599418();
        if (out != 0)
            fn_8256D528(out, &sp);
        fn_822315A0(p);
        if (arg->rep != 0)
            fn_822315A0(arg->rep);
        return 1;
    }
    stdext::bad_alloc(0)._Raise();
}
