typedef struct Val_8228C748 { int w0; int type; union { void *p; unsigned char b; double d; } u; } Val_8228C748;
typedef struct Ref_8228C748 { void *p; void *rc; } Ref_8228C748;
typedef struct Obj_8228C748 Obj_8228C748;
typedef struct G_8228C748 { int pad0; int h4; } G_8228C748;

extern unsigned short lbl_820E975C;
extern G_8228C748 lbl_83276728;
extern void fn_82528BF8(int, const char *, void *, int, int, int);
extern void fn_82273CD8(Val_8228C748 *, int);
extern void fn_82273C88(Val_8228C748 *);
extern Ref_8228C748 *fn_82279C58(Ref_8228C748 *, Obj_8228C748 *);
extern void fn_82672C20(void *, const char *, Val_8228C748 *, int);
extern void fn_822315A0(void *);

void fn_8228C748(Obj_8228C748 *self)
{
    unsigned short on[0x20] = { lbl_820E975C };
    unsigned short off[0x20] = { lbl_820E975C };
    unsigned short locked[0x20] = { lbl_820E975C };
    Val_8228C748 args[3];
    Ref_8228C748 r;
    int i;
    Val_8228C748 *v;

    fn_82528BF8(lbl_83276728.h4, "tutorialmenu_on", on, 0x20, 0, 1);
    fn_82528BF8(lbl_83276728.h4, "tutorialmenu_off", off, 0x20, 0, 1);
    fn_82528BF8(lbl_83276728.h4, "tutorialmenu_locked", locked, 0x20, 0, 1);
    for (i = 0; i < 3; i++) {
        args[i].w0 = 0;
        args[i].type = 0;
    }
    fn_82273CD8(&args[0], 5);
    args[0].u.p = locked;
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
