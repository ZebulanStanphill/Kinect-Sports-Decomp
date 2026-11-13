typedef struct Val_82273FC8 { int w0; int type; union { void *p; unsigned char b; double d; } u; } Val_82273FC8;
typedef struct Ref_82273FC8 { void *p; void *rc; } Ref_82273FC8;
typedef struct Obj_82273FC8 Obj_82273FC8;
typedef struct G_82273FC8 { int pad0; int h4; } G_82273FC8;

extern unsigned short lbl_820E975C;
extern G_82273FC8 lbl_83276728;
extern void fn_82528BF8(int, const char *, void *, int, int, int);
extern void fn_82273CD8(Val_82273FC8 *, int);
extern void fn_82273C88(Val_82273FC8 *);
extern Ref_82273FC8 *fn_82279C58(Ref_82273FC8 *, Obj_82273FC8 *);
extern void fn_82672C20(void *, const char *, Val_82273FC8 *, int);
extern void fn_822315A0(void *);

void fn_82273FC8(Obj_82273FC8 *self)
{
    unsigned short on[0x20] = { lbl_820E975C };
    unsigned short off[0x20] = { lbl_820E975C };
    unsigned short blank[0x20] = { lbl_820E975C };
    Val_82273FC8 args[3];
    Ref_82273FC8 r;
    int i;
    Val_82273FC8 *v;

    fn_82528BF8(lbl_83276728.h4, "settings_on", on, 0x20, 0, 1);
    fn_82528BF8(lbl_83276728.h4, "settings_off", off, 0x20, 0, 1);
    for (i = 0; i < 3; i++) {
        args[i].w0 = 0;
        args[i].type = 0;
    }
    fn_82273CD8(&args[0], 5);
    args[0].u.p = blank;
    fn_82273CD8(&args[1], 5);
    args[1].u.p = on;
    fn_82273CD8(&args[2], 5);
    args[2].u.p = off;
    fn_82672C20(fn_82279C58(&r, self)->p, "_root.setText", args, 3);
    if (r.rc != 0) {
        fn_822315A0(r.rc);
    }
    v = &args[3];
    i = 2;
    do {
        v--;
        fn_82273C88(v);
        i--;
    } while (i >= 0);
}
