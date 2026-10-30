struct Cb_8232CED0;
typedef struct VT_8232CED0 { void *pad[5]; void (*f14)(struct Cb_8232CED0 *, int, int); } VT_8232CED0;
typedef struct Cb_8232CED0 { VT_8232CED0 *vt; int a; int b; } Cb_8232CED0;
typedef struct { char pad[0x27c]; struct { char pad[0x7a4]; int v; } *p; } Sub_8232CED0;
typedef struct { char pad0[0x4e0]; float f4e0; char pad1[4]; float f4e8; } Cfg_8232CED0;
typedef struct { char pad0[8]; Cfg_8232CED0 *cfg; Cb_8232CED0 *cb; char pad1[8]; float f18; float f1c; } Obj_8232CED0;
extern char lbl_83265A28[];
extern int fn_82520780(const char *, double);
extern void fn_8232C528(Cb_8232CED0 *, int);

void fn_8232CED0(Obj_8232CED0 *o, unsigned int st, int a2, int a3, int flag)
{
    if (flag == 0) {
        int b;
        int old;
        Cb_8232CED0 *cb;
        if (st < 3 || (st >= 6 && st == 6))
            b = 1;
        else
            b = 0;
        if (fn_82520780(lbl_83265A28, (o->f18 - o->f1c) / o->cfg->f4e0 * o->cfg->f4e8 + o->f1c) != 0
            && ((Sub_8232CED0 *)o->cfg)->p->v == 0) {
            cb = o->cb;
            old = cb->b;
            cb->b = !b;
            cb->vt->f14(cb, old, cb->b);
            fn_8232C528(o->cb, 1);
        }
    }
}
