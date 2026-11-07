extern double lbl_82005710;

typedef struct Obj_82F180B8 {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    double f18;
    double f20;
} Obj_82F180B8;

void fn_82F180B8(Obj_82F180B8 *p)
{
    double d;

    p->f0 = 0;
    p->f4 = 0;
    d = lbl_82005710;
    p->fc = 0;
    p->f18 = d;
    p->f10 = 0;
    p->f20 = d;
}
