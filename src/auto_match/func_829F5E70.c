typedef struct Obj_829F5E70 Obj_829F5E70;

typedef struct Vtbl_829F5E70 {
    void (*f0)(Obj_829F5E70 *self, int a, int b, int w, int h, int c);
    void (*f1)(Obj_829F5E70 *self, int v);
    void (*f2)(Obj_829F5E70 *self, int v);
} Vtbl_829F5E70;

struct Obj_829F5E70 {
    Vtbl_829F5E70 *vt;
};

extern int fn_829F5548(int *a1, int a2, int a3, int a4, int a5, int *a6, int a7,
                       int *a8, int a9, int a10, int a11, int a12, int a13);
extern int fn_82A0D6C0(int *a1, int a2);
extern Obj_829F5E70 *lbl_83218C34;

void fn_829F5E70(int *p, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    p[2] = 3;
    p[0x41a7] = a2;
    if (lbl_83218C34 != 0) {
        lbl_83218C34->vt->f0(lbl_83218C34, p[1], a2, 0x280, 0x1e0, a3);
        if (lbl_83218C34 != 0) {
            lbl_83218C34->vt->f2(lbl_83218C34, p[2]);
            lbl_83218C34->vt->f1(lbl_83218C34, 0);
        }
    }
    p[2] = 0;
    fn_829F5548(p + 4, p[0x41a7], a3, *p, a4, p + 0x4198, p[0x419e], p + 0x419f,
                p[0x41a5], a5, a6, a7, a8);
    p[0x419e] = 0;
    p[0x41a5] = 0;
    if (lbl_83218C34 != 0) {
        lbl_83218C34->vt->f2(lbl_83218C34, p[2]);
        lbl_83218C34->vt->f1(lbl_83218C34, 1);
    }
    p[2] = 1;
    fn_82A0D6C0(p + 0x2c, a8);
    if (lbl_83218C34 != 0) {
        lbl_83218C34->vt->f2(lbl_83218C34, p[2]);
    }
    p[0x41a7] = 0;
}
