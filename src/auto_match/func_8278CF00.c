typedef struct Ref_8278CF00 {
    int refs;
} Ref_8278CF00;

typedef struct Obj_8278CF00 {
    char pad0[0x1c];
    Ref_8278CF00 *ref;
    char pad20[0xa];
    unsigned short flags;
} Obj_8278CF00;

extern void fn_826C6368(Ref_8278CF00 *r);
extern void fn_8267BE38(Ref_8278CF00 *r);

static __forceinline void release_8278CF00(Ref_8278CF00 **pp)
{
    Ref_8278CF00 *r = *pp;
    if (r != 0) {
        if (--r->refs == 0) {
            fn_826C6368(r);
            fn_8267BE38(r);
        }
    }
    *pp = 0;
}

void fn_8278CF00(Obj_8278CF00 *o)
{
    release_8278CF00(&o->ref);
    o->flags &= 0xf7ff;
}
