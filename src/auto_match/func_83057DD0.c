typedef struct { int f0; int f4; char *f8; } Obj_83057DD0;
extern double lbl_82005710, lbl_820105A0, lbl_820FC2C8, lbl_82028820, lbl_820153F0, lbl_82015618, lbl_820288B8;
extern void fn_8305BDE0(int a);
extern double fn_8305BD60(double a);

void fn_83057DD0(Obj_83057DD0 *o, int unused, unsigned kind, double x)
{
    double base, cap;
    switch (kind) {
    case 0: base = lbl_82005710; cap = lbl_820105A0; break;
    case 1: base = lbl_82005710; cap = lbl_820FC2C8; break;
    case 2: base = lbl_82005710; cap = lbl_82028820; break;
    case 3: base = lbl_82005710; cap = lbl_820153F0; break;
    case 4: base = lbl_82005710; cap = lbl_82015618; break;
    case 5: base = lbl_82005710; cap = lbl_820288B8; break;
    }
    if (x > cap)
        x = cap;
    fn_8305BDE0(o->f0);
    *(float *)(o->f8 + 0x20) = (float)fn_8305BD60(base + x);
}
