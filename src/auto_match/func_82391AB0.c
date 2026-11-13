typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Func_82391AB0 {
    union {
        double align;
        char space[16];
    } u;
    void *impl;
    int pad[3];
} Func_82391AB0;

typedef __declspec(align(16)) struct BindObj_82391AB0 {
    char data[0x90];
    float f;
    char pad94[0xc];
    float g;
    char padA4[0xc];
} BindObj_82391AB0;

extern Func_82391AB0 *fn_822C5B18(Func_82391AB0 *dst, const Func_82391AB0 *src);
extern void fn_82392CE0(BindObj_82391AB0 *out, Func_82391AB0 *fn, __vector4 v1, __vector4 v2, __vector4 v3,
                        float f, int a, int b, int c);
extern void fn_82359C18(void *obj);
extern BindObj_82391AB0 *fn_82392860(BindObj_82391AB0 *dst, const BindObj_82391AB0 *src);

BindObj_82391AB0 *fn_82391AB0(BindObj_82391AB0 *out, Func_82391AB0 *fn, __vector4 v1, __vector4 v2,
                              __vector4 v3, float f1, int a, int b, int c, float f2, float f3)
{
    Func_82391AB0 t1, t2, t3;
    BindObj_82391AB0 b0, b1, b2, b3;
    Func_82391AB0 *p1;
    Func_82391AB0 *p2;
    BindObj_82391AB0 *q1;
    BindObj_82391AB0 *q2;

    p1 = fn_822C5B18(&t1, fn);
    p2 = fn_822C5B18(&t2, p1);
    fn_82392CE0(&b0, fn_822C5B18(&t3, p2), v1, v2, v3, f1, a, b, c);
    b0.f = f2;
    fn_82359C18(p2);
    b0.g = f3;
    fn_82359C18(p1);
    q1 = fn_82392860(&b1, &b0);
    q2 = fn_82392860(&b2, q1);
    fn_82392860(&b3, q2);
    fn_82359C18(q2);
    fn_82359C18(q1);
    fn_82392860(out, &b3);
    fn_82359C18(&b3);
    fn_82359C18(&b0);
    fn_82359C18(fn);
    return out;
}
