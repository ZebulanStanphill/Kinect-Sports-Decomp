typedef struct Obj { void *vtbl; int x4; int x8; int xc; } Obj;
typedef struct Src { int x0; int x4; } Src;
extern void **fn_82934160(void);
extern void *fn_829301D0(void *heap, unsigned int size, unsigned int align);
extern char lbl_8202F0BC[];

Obj *fn_829303C0(Src *s)
{
    Obj *o = (Obj *)fn_829301D0(*fn_82934160(), 0x10, 0x10);
    if (o != 0) {
        int v = s->x4;
        o->x8 = 0;
        o->vtbl = lbl_8202F0BC;
        o->x4 = v;
        o->xc = 0;
        return o;
    }
    return 0;
}
