/* Builds a bound call object (a function object plus three vectors, a float and an int) in out:
   the function object is copied down through the nested layers of the binder (fn_822C5B18 copies,
   fn_82359C18 destroys), the arguments are stored as each layer finishes, and the result is copied
   out through three more layers (fn_823927F0). The caller's fn is destroyed at the end. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Func_82391940 {
    union {
        double align;
        char space[16];
    } u;
    void *impl;
    int pad[3];
} Func_82391940;

typedef __declspec(align(16)) struct BindObj_82391940 {
    Func_82391940 fn;   /* 0x00 */
    __vector4 v1;       /* 0x20 */
    __vector4 v2;       /* 0x30 */
    __vector4 v3;       /* 0x40 */
    float f;            /* 0x50 */
    char pad54[0xc];
    int a;              /* 0x60 */
    char pad64[0xc];
} BindObj_82391940;

extern Func_82391940 *fn_822C5B18(Func_82391940 *dst, const Func_82391940 *src);
extern void fn_82359C18(void *obj);
extern BindObj_82391940 *fn_823927F0(BindObj_82391940 *dst, const BindObj_82391940 *src);

BindObj_82391940 *fn_82391940(BindObj_82391940 *out, Func_82391940 *fn, __vector4 v1, __vector4 v2,
                              __vector4 v3, float f, int a)
{
    Func_82391940 t1, t2, t3, t4, t5;
    BindObj_82391940 b0, b1, b2, b3;
    Func_82391940 *p1;
    Func_82391940 *p2;
    Func_82391940 *p3;
    Func_82391940 *p4;
    Func_82391940 *p5;
    BindObj_82391940 *q1;
    BindObj_82391940 *q2;

    p1 = fn_822C5B18(&t1, fn);
    p2 = fn_822C5B18(&t2, p1);
    p3 = fn_822C5B18(&t3, p2);
    p4 = fn_822C5B18(&t4, p3);
    p5 = fn_822C5B18(&t5, p4);
    fn_822C5B18(&b0.fn, p5);
    b0.v1 = v1;
    fn_82359C18(p5);
    b0.v2 = v2;
    fn_82359C18(p4);
    b0.v3 = v3;
    fn_82359C18(p3);
    b0.f = f;
    fn_82359C18(p2);
    b0.a = a;
    fn_82359C18(p1);
    q1 = fn_823927F0(&b1, &b0);
    q2 = fn_823927F0(&b2, q1);
    fn_823927F0(&b3, q2);
    fn_82359C18(q2);
    fn_82359C18(q1);
    fn_823927F0(out, &b3);
    fn_82359C18(&b3);
    fn_82359C18(&b0);
    fn_82359C18(fn);
    return out;
}
