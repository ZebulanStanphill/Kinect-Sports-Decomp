typedef struct Obj { void *vt; int f[5]; int v; } Obj;
extern void *fn_8265C9E0(unsigned int n);
extern void fn_828E71B8(Obj *d, Obj *s);
extern char lbl_820271B0[];

Obj *fn_828E3CF0(Obj *src)
{
    Obj *o = (Obj *)fn_8265C9E0(0x1c);
    if (o != 0) {
        fn_828E71B8(o, src);
        o->vt = lbl_820271B0;
        o->v = src->v;
        return o;
    }
    return 0;
}
