typedef struct Mgr {
    char pad0[4];
    unsigned char enabled;
} Mgr;

typedef struct Obj {
    void *vtbl;
    char pad04[0x64];
    void *vtbl2;
    char pad6c[0x14];
    struct Owner *owner;
    char pad84[4];
    unsigned __int64 f88;
    int f90;
    unsigned char f94;
    unsigned char f95;
    unsigned char f96;
    unsigned char f97;
    unsigned char f98;
} Obj;

typedef struct Owner {
    char pad0[8];
    int state;
    int prevState;
    char pad10[0x3e4];
    Obj *obj;
    char pad3f8[4];
    void *dev;
} Owner;

extern Mgr *lbl_832975B0;
extern Mgr *fn_82250A18(void);
extern void fn_82517D50(Obj *o, void *dev, int n);
extern void *fn_8265C9E0(int size);
extern void fn_828904D8(Obj *o);
extern unsigned char fn_828ACCE8(void *dev);
extern unsigned char fn_828AD740(void *dev);
extern char lbl_82197648[];
extern char lbl_82197688[];

static Mgr *GetMgr(void)
{
    return lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
}

static Obj *Obj_ctor(Obj *o, Owner *owner)
{
    fn_82517D50(o, owner->dev, 3);
    o->owner = owner;
    o->f88 = 0;
    o->vtbl = lbl_82197648;
    o->vtbl2 = lbl_82197688;
    o->f90 = 0;
    o->f94 = 1;
    o->f95 = 0;
    o->f96 = 0;
    o->f97 = 0;
    o->f98 = 0;
    return o;
}

void fn_82350F08(Owner *p)
{
    if (GetMgr()->enabled) {
        if (fn_828ACCE8(p->dev) && fn_828AD740(p->dev)) {
            Obj *mem;
            if (p->obj != 0) {
                return;
            }
            mem = fn_8265C9E0(0xa0);
            p->obj = mem ? Obj_ctor(mem, p) : 0;
            fn_828904D8(p->obj);
        } else {
            if (p->obj == 0) {
                return;
            }
        }
    }
    if (p->state != 2) {
        p->prevState = p->state;
        p->state = 2;
    }
}
