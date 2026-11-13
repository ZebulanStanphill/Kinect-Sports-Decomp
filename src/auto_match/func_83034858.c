extern char lbl_8217D1D4[];
extern char lbl_8217D1D8[];
extern char lbl_821968A4[];
typedef struct Base_83034858 { char *vt; } Base_83034858;
typedef struct Obj_83034858 {
    char *vt;
    Base_83034858 b4;
    int f8;
    int fC[7];
    float f28[5];
    unsigned char f3C;
    unsigned char f3D;
} Obj_83034858;
void fn_83034858(Obj_83034858 *o, int a, unsigned char b)
{
    Base_83034858 *b4 = &o->b4;
    b4->vt = lbl_821968A4;
    o->f28[0] = 0.0f;
    o->vt = lbl_8217D1D8;
    o->f28[1] = 0.0f;
    o->b4.vt = lbl_8217D1D4;
    o->f28[2] = 0.0f;
    o->f8 = a;
    o->f28[3] = 0.0f;
    o->fC[0] = 0;
    o->f28[4] = 0.0f;
    o->fC[1] = 0;
    o->fC[2] = 0;
    o->fC[3] = 0;
    o->fC[4] = 0;
    o->fC[5] = 0;
    o->fC[6] = 0;
    o->f3C = 0xff;
    o->f3D = b;
}
