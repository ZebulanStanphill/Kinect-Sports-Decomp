extern char lbl_8217D1D4[];
extern char lbl_8217D1D8[];
extern char lbl_821968A4[];
typedef struct Base_83034438 { char *vt; } Base_83034438;
typedef struct Obj_83034438 {
    char *vt;
    Base_83034438 b4;
    int f8;
    int fC;
    int f10[6];
    float f28[5];
    unsigned char f3C;
    unsigned char f3D;
} Obj_83034438;
void fn_83034438(Obj_83034438 *o, int a, int c, unsigned char b)
{
    Base_83034438 *b4 = &o->b4;
    b4->vt = lbl_821968A4;
    o->f8 = a;
    o->f28[0] = 0.0f;
    o->f28[1] = 0.0f;
    o->f28[2] = 0.0f;
    o->vt = lbl_8217D1D8;
    o->f28[3] = 0.0f;
    o->b4.vt = lbl_8217D1D4;
    o->f28[4] = 0.0f;
    o->fC = c;
    o->f10[0] = 0;
    o->f10[1] = 0;
    o->f10[2] = 0;
    o->f10[3] = 0;
    o->f10[4] = 0;
    o->f10[5] = 0;
    o->f3C = 0xff;
    o->f3D = b;
}
