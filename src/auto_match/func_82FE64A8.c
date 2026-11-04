typedef struct Alloc_82FE64A8 { struct { int pad; void *(*f4)(struct Alloc_82FE64A8 *, int); } *vt; } Alloc_82FE64A8;
typedef struct Obj_82FE64A8 { void *vt; int a4; int a8; int ac; float f10; short s14; short s16; float f18; int f1c; int f20; } Obj_82FE64A8;
extern char lbl_8217BAB4[];

Obj_82FE64A8 *fn_82FE64A8(Alloc_82FE64A8 *al)
{
    Obj_82FE64A8 *o = (Obj_82FE64A8 *)al->vt->f4(al, 0x24);
    if (o != 0) {
        o->a4 = 0;
        o->vt = lbl_8217BAB4;
        o->f10 = 0.0f;
        o->a8 = 0;
        o->f18 = 0.0f;
        o->s14 = 1;
        o->s16 = 0;
        o->f20 = 0;
        o->f1c = 0;
        return o;
    }
    return 0;
}
