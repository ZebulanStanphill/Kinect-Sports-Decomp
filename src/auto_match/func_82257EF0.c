extern void fn_82517DC8(void *o, void *arg);
extern void *fn_8265C9E0(int size);
extern char lbl_821B8510[];
extern char lbl_821B96A8[];

typedef struct Sub { void *vtbl; char pad[0x14]; int unk80; int unk84; } Sub;
typedef struct Obj { void *vtbl; char base[0x64]; Sub s; } Obj;

static Obj *Obj_ctor(Obj *o, void *arg)
{
    fn_82517DC8(o, arg);
    o->vtbl = lbl_821B8510;
    o->s.unk80 = 0;
    o->s.vtbl = lbl_821B96A8;
    return o;
}

Obj *fn_82257EF0(void *arg)
{
    Obj *m = (Obj *)fn_8265C9E0(0x88);
    return m ? Obj_ctor(m, arg) : 0;
}
