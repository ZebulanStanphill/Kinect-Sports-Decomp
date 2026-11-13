typedef struct Val_82276590 { int w0; int type; union { void *p; unsigned char b; double d; } u; } Val_82276590;
typedef struct Ref_82276590 { void *p; void *rc; } Ref_82276590;
typedef struct Obj_82276590 { void *vt; } Obj_82276590;
typedef struct G_82276590 { int pad0; int h4; } G_82276590;

extern void *memset(void *, int, unsigned);
extern void fn_822761F8(Obj_82276590 *, int, void *);
extern unsigned short lbl_820E975C;
extern char lbl_821A8120[];
extern G_82276590 lbl_83276728;
extern void fn_82528BF8(int, void *, void *, int, int, int);
extern void fn_82273CD8(Val_82276590 *, int);
extern void fn_82273C88(Val_82276590 *);
extern Ref_82276590 *fn_82279C58(Ref_82276590 *, Obj_82276590 *);
extern void fn_82672C20(void *, const char *, Val_82276590 *, int);
extern void fn_822315A0(void *);

Obj_82276590 *fn_82276590(Obj_82276590 *o, int a, char *q)
{
    Val_82276590 v[2];
    Ref_82276590 r;
    unsigned short name1[0x800];
    unsigned short name2[0x800];
    Val_82276590 *p;
    int i;

    fn_822761F8(o, a, q + 4);
    o->vt = lbl_821A8120;
    name1[0] = lbl_820E975C;
    memset(name1 + 1, 0, 0xffe);
    name2[0] = lbl_820E975C;
    memset(name2 + 1, 0, 0xffe);
    for (i = 0; i < 2; i++) {
        v[i].w0 = 0;
        v[i].type = 0;
    }
    fn_82528BF8(lbl_83276728.h4, q + 0x2c, name1, 0x800, 0, 1);
    fn_82528BF8(lbl_83276728.h4, q + 0x4c, name2, 0x800, 0, 1);
    fn_82273CD8(&v[0], 5);
    v[0].u.p = name1;
    fn_82273CD8(&v[1], 5);
    v[1].u.p = name2;
    fn_82672C20(fn_82279C58(&r, o)->p, "_root.SetNamesText", v, 2);
    if (r.rc != 0) {
        fn_822315A0(r.rc);
    }
    p = v + 2;
    i = 1;
    do {
        p--;
        fn_82273C88(p);
        i--;
    } while (i >= 0);
    return o;
}
