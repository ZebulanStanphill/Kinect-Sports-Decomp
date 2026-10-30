typedef struct VT_827E6208 {
    void *s0[5];
    void (*f14)(struct Obj_827E6208 *self, int h);
    void (*f18)(struct Obj_827E6208 *self, int h, void *ev);
} VT_827E6208;
typedef struct Obj_827E6208 {
    VT_827E6208 *vt;
} Obj_827E6208;
typedef struct Task_827E6208 {
    char pad0[0x8];
    int f8;
    char padc[0x14 - 0xc];
    int f14;
    char pad18[0x20 - 0x18];
    int f20;
    char pad24[0x3c - 0x24];
    int f3c;
    int *f40;
    int *f44;
    char pad48[0x4c - 0x48];
    int f4c;
    int f50;
    int f54;
    char pad58[0x5c - 0x58];
    int f5c;
    int f60;
} Task_827E6208;
typedef struct Arg_827E6208 {
    char pad0[0x20];
    int f20;
} Arg_827E6208;
extern int fn_827D5070(int a);
extern void fn_827D5078(int a, int b);
extern int fn_827D5088(int a);
extern void fn_827D5090(int a, int b);
extern int fn_827D50A0(int a);
extern void fn_827D50A8(int a, int b);
extern int fn_827D50B8(int a);
extern void fn_827D50C0(int a, int b);
extern void fn_827D9DD8(int a);
extern Obj_827E6208 *fn_827DA588(int a, int b);
extern int fn_827E60D8(Task_827E6208 *t);
extern void fn_82811438(void *dst, void *src, int n);
extern Obj_827E6208 *lbl_83156AA0;

int fn_827E6208(Task_827E6208 *param_1, Arg_827E6208 *param_2)
{
    int h;
    int a;
    int b;
    int t;
    int ev[4];
    char buf[32];
    Obj_827E6208 *o;

    if (param_2->f20 == 0) {
        if (param_1->f4c >= param_1->f3c) {
            if (param_1->f40 != 0) {
                *param_1->f40 = fn_827D5070(param_1->f14);
            }
            if (fn_827DA588(param_1->f20, param_1->f54) == 0) {
                fn_827D5090(param_1->f14, param_1->f50);
                fn_827D50A8(param_1->f14, 0);
            }
            if (param_1->f44 != 0) {
                t = param_1->f14;
                *param_1->f44 = fn_827D50A0(t) + fn_827D5088(t);
            }
            fn_827D9DD8(param_1->f8);
            if (fn_827D50B8(param_1->f14) != 0x3e5 && fn_827D50B8(param_1->f14) != 0x3e4) {
                h = fn_827D5070(param_1->f14);
                if (h != 0) {
                    if (param_1->f5c == 1) {
                        ev[0] = 3;
                        fn_82811438(buf, ev, 0x10);
                        lbl_83156AA0->vt->f18(lbl_83156AA0, h, buf);
                    } else if (param_1->f60 == 0) {
                        o = fn_827DA588(param_1->f20, param_1->f54);
                        o->vt->f14(o, h);
                    }
                    fn_827D5078(param_1->f14, 0);
                }
                return fn_827D50B8(param_1->f14);
            }
            return 0;
        }
    } else {
        fn_827D50C0(param_1->f14, param_2->f20);
        if (fn_827E60D8(param_1) != 0) {
            return param_2->f20;
        }
    }
    return 0x3e5;
}
