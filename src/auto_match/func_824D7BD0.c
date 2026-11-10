extern long _InterlockedDecrement(long *);
struct RefObj_824D7BD0;
typedef struct RefObjVt_824D7BD0 { void *s0; void (*destroy)(struct RefObj_824D7BD0 *); } RefObjVt_824D7BD0;
typedef struct RefObj_824D7BD0 { RefObjVt_824D7BD0 *vt; int x4; long refs; } RefObj_824D7BD0;
typedef struct Ref_824D7BD0 { int x0; RefObj_824D7BD0 *p; } Ref_824D7BD0;
typedef struct SP_824D7BD0 { void *first; void *second; } SP_824D7BD0;
typedef struct Obj_824D7BD0 { char pad[0x20]; int x20; char pad24[0xd4]; void *res[12]; } Obj_824D7BD0;
extern void *fn_82F51468(Ref_824D7BD0 *, int);
extern void fn_824D2AE8(SP_824D7BD0 *, void *);
extern void fn_82F52C20(void *, void *, int);
extern void fn_822315A0(void *);

static __forceinline void release(RefObj_824D7BD0 *p)
{
    if (_InterlockedDecrement(&p->refs) == 0)
        p->vt->destroy(p);
}

static __forceinline void releaseRes(void *dev, void **slot)
{
    if (*slot != 0) {
        fn_82F52C20(dev, *slot, 1);
        *slot = 0;
    }
}

void fn_824D7BD0(Obj_824D7BD0 *o)
{
    SP_824D7BD0 sp;
    Ref_824D7BD0 r;
    void *dev;
    fn_824D2AE8(&sp, fn_82F51468(&r, o->x20));
    if (r.p != 0)
        release(r.p);
    dev = sp.first;
    releaseRes(dev, &o->res[0]);
    releaseRes(dev, &o->res[1]);
    releaseRes(dev, &o->res[2]);
    releaseRes(dev, &o->res[3]);
    releaseRes(dev, &o->res[4]);
    releaseRes(dev, &o->res[5]);
    releaseRes(dev, &o->res[6]);
    releaseRes(dev, &o->res[7]);
    releaseRes(dev, &o->res[8]);
    releaseRes(dev, &o->res[9]);
    releaseRes(dev, &o->res[10]);
    releaseRes(dev, &o->res[11]);
    if (sp.second != 0)
        fn_822315A0(sp.second);
}
