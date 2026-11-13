typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Func_82392CE0 {
    union {
        double align;
        char space[16];
    } u;
    void *impl;
    int pad[3];
} Func_82392CE0;

typedef __declspec(align(16)) struct Bind_82392CE0 {
    Func_82392CE0 fn;           /* 0x00 */
    __vector4 v1;               /* 0x20 */
    __vector4 v2;               /* 0x30 */
    __vector4 v3;               /* 0x40 */
    float f;                    /* 0x50 */
    char pad54[0xc];
    int a;                      /* 0x60 */
    char pad64[0xc];
    int b;                      /* 0x70 */
    char pad74[0xc];
    int c;                      /* 0x80 */
    char pad84[0xc];
} Bind_82392CE0;

extern Func_82392CE0 *fn_822C5B18(Func_82392CE0 *dst, const Func_82392CE0 *src);
extern void fn_82359C18(void *obj);

Bind_82392CE0 *fn_82392CE0(Bind_82392CE0 *out, Func_82392CE0 *fn, __vector4 v1, __vector4 v2, __vector4 v3,
                           float f, int a, int b, int c)
{
    Func_82392CE0 t1, t2, t3, t4, t5, t6;
    Func_82392CE0 *p1;
    Func_82392CE0 *p2;
    Func_82392CE0 *p3;
    Func_82392CE0 *p4;
    Func_82392CE0 *p5;
    Func_82392CE0 *p6;

    p1 = fn_822C5B18(&t1, fn);
    p2 = fn_822C5B18(&t2, p1);
    p3 = fn_822C5B18(&t3, p2);
    p4 = fn_822C5B18(&t4, p3);
    p5 = fn_822C5B18(&t5, p4);
    p6 = fn_822C5B18(&t6, p5);
    fn_822C5B18(&out->fn, p6);
    out->v1 = v1;
    fn_82359C18(p6);
    out->v2 = v2;
    fn_82359C18(p5);
    out->v3 = v3;
    fn_82359C18(p4);
    out->f = f;
    fn_82359C18(p3);
    out->a = a;
    fn_82359C18(p2);
    out->b = b;
    fn_82359C18(p1);
    out->c = c;
    fn_82359C18(fn);
    return out;
}
