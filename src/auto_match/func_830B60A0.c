typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
__vector4 __vsubfp(__vector4 a, __vector4 b);
typedef struct Obj_830B60A0 {
    void *f0;
    int pad4[6];
    int f1C;
    int pad20[4];
    __vector4 a;
    __vector4 b;
} Obj_830B60A0;
extern void fn_830B5B48(void *a, void *b, int c, __vector4 *d, __vector4 *e, int f, int g);

void fn_830B60A0(Obj_830B60A0 *o, int x, int y)
{
    __vector4 a = o->a;
    __vector4 d = __vsubfp(o->b, o->a);
    fn_830B5B48(o->f0, o->f0, o->f1C, &d, &a, x, y);
}
