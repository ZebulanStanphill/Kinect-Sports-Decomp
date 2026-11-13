typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Func_823917B0 {
    union {
        double align;
        char space[16];
    } u;
    void *impl;
    int pad[3];
} Func_823917B0;

typedef __declspec(align(16)) struct Bind_823917B0 {
    Func_823917B0 fn;           /* 0x00 */
    __vector4 v1;               /* 0x20 */
    __vector4 v2;               /* 0x30 */
    __vector4 v3;               /* 0x40 */
    float f;                    /* 0x50 */
    char pad54[0xc];
    int a;                      /* 0x60 */
    char pad64[0xc];
    unsigned char c;            /* 0x70 */
    char pad71[0xf];
} Bind_823917B0;

extern Func_823917B0 *fn_822C5B18(Func_823917B0 *dst, const Func_823917B0 *src);
extern void fn_82359C18(void *obj);
extern Bind_823917B0 *fn_82392778(Bind_823917B0 *dst, const Bind_823917B0 *src);

Bind_823917B0 *fn_823917B0(Bind_823917B0 *out, Func_823917B0 *fn, __vector4 v1, __vector4 v2, __vector4 v3,
                           float f, int a, unsigned char c)
{
    Func_823917B0 t1, t2, t3, t4, t5, t6;
    Bind_823917B0 b0, b1, b2, b3;
    Func_823917B0 *p1;
    Func_823917B0 *p2;
    Func_823917B0 *p3;
    Func_823917B0 *p4;
    Func_823917B0 *p5;
    Func_823917B0 *p6;
    Bind_823917B0 *q1;
    Bind_823917B0 *q2;

    p1 = fn_822C5B18(&t1, fn);
    p2 = fn_822C5B18(&t2, p1);
    p3 = fn_822C5B18(&t3, p2);
    p4 = fn_822C5B18(&t4, p3);
    p5 = fn_822C5B18(&t5, p4);
    p6 = fn_822C5B18(&t6, p5);
    fn_822C5B18(&b0.fn, p6);
    b0.v1 = v1;
    fn_82359C18(p6);
    b0.v2 = v2;
    fn_82359C18(p5);
    b0.v3 = v3;
    fn_82359C18(p4);
    b0.f = f;
    fn_82359C18(p3);
    b0.a = a;
    fn_82359C18(p2);
    b0.c = c;
    fn_82359C18(p1);
    q1 = fn_82392778(&b1, &b0);
    q2 = fn_82392778(&b2, q1);
    fn_82392778(&b3, q2);
    fn_82359C18(q2);
    fn_82359C18(q1);
    fn_82392778(out, &b3);
    fn_82359C18(&b3);
    fn_82359C18(&b0);
    fn_82359C18(fn);
    return out;
}
