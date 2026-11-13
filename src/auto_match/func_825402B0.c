typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Obj_825402B0 {
    int a;
    int b;
    int c;
    int d;
    __vector4 v;
    int e;
    float f24;
    int g;
    int pad2c;
    int f30;
    float f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    unsigned int f48;
} Obj_825402B0;

void fn_825402B0(Obj_825402B0 *o, int a, int b, int c, int d, int e, int g)
{
    o->a = a;
    o->b = b;
    o->c = c;
    o->d = d;
    o->e = e;
    o->g = g;
    o->f24 = 0.0f;
    o->f30 = -1;
    o->f34 = 0.0f;
    o->f38 = 0;
    o->v = __VMXGetReg(75);
    o->f3c = 0;
    o->f40 = 0;
    o->f44 = 0;
    o->f48 = 0xffffffff;
}
