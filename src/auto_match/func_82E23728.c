typedef struct { char pad[0xc0]; int fc0; int pad1; char fc8[0x30]; char ff8[0x14]; char f10c[4]; } Obj_82E23728;
extern long fn_82E25630(void *a, void *c8, void *f8, int *c0, void *f10c);
long fn_82E23728(Obj_82E23728 *o, void *a)
{
    return fn_82E25630(a, o->fc8, o->ff8, &o->fc0, o->f10c);
}
