typedef struct Obj { void *vtbl; int x4[4]; int x14; int x18; short x1c; int x20; } Obj;
extern void fn_82BE51E8(Obj *o, const char *name);
extern char lbl_820EB6C4[];

Obj *fn_82BF29A0(Obj *o)
{
    fn_82BE51E8(o, "CMassiveSocket");
    o->x14 = -1;
    o->x18 = 0;
    o->vtbl = lbl_820EB6C4;
    o->x1c = 0;
    o->x20 = 1;
    return o;
}
