typedef struct { int f0; int f4; char *f8; } Obj_8305A7A8;
extern double lbl_82005708, lbl_82005728, lbl_820105A0, lbl_820153F0, lbl_82028820, lbl_820288B8;
extern double lbl_82057810, lbl_82079F08, lbl_820FC2C8, lbl_8217E340, lbl_8217E348, lbl_8217E350, lbl_8217E358, lbl_8217E360;
extern int *fn_8305BDE0(int a);
extern double fn_8305BD60(int *ticks, double scale);

void fn_8305A7A8(Obj_8305A7A8 *o, unsigned kind, double x)
{
    double a, b, cap;
    int *t;
    switch (kind) {
    case 0: a = lbl_8217E360; b = lbl_8217E358; cap = lbl_820105A0; break;
    case 1: a = lbl_82079F08; b = lbl_8217E350; cap = lbl_820FC2C8; break;
    case 2: a = lbl_82057810; b = lbl_8217E348; cap = lbl_82028820; break;
    case 3: a = lbl_82005728; b = lbl_8217E340; cap = lbl_820153F0; break;
    case 4: a = 10.0; b = lbl_82005708; cap = 10.0; break;
    case 5: a = lbl_82028820; b = lbl_8217E360; cap = lbl_820288B8; break;
    }
    t = fn_8305BDE0(o->f0);
    *(float *)(o->f8 + 0x3c) = (float)fn_8305BD60(t, a);
    x = x - cap;
    if (x < 0.0)
        x = 0.0;
    *(float *)(o->f8 + 0x38) = (float)fn_8305BD60(t, b + x);
}
