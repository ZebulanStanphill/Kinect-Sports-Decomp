typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Tmp_82406190 { unsigned char d[16]; } Tmp_82406190;

extern void *fn_8265C9E0(unsigned int size);
extern void *fn_824060E8(Tmp_82406190 *tmp, void *a);
extern void fn_82406510(void *obj, void *a, unsigned int b, __vector4 v1, __vector4 v2);
extern unsigned int lbl_821A8D8C;

static unsigned int *ctor(unsigned int *p, void *a, unsigned int *b, __vector4 *v1, __vector4 *v2)
{
    Tmp_82406190 tmp;

    p[1] = 1;
    p[0] = (unsigned int)&lbl_821A8D8C;
    p[2] = 1;
    if (p + 4)
        fn_82406510(p + 4, fn_824060E8(&tmp, a), *b, *v1, *v2);
    return p;
}

unsigned int *fn_82406190(unsigned int *out, void *a, unsigned int *b, __vector4 *v1, __vector4 *v2)
{
    unsigned int *p = (unsigned int *)fn_8265C9E0(0x60);
    p = p ? ctor(p, a, b, v1, v2) : 0;
    out[1] = (unsigned int)p;
    out[0] = (unsigned int)(p + 4);
    return out;
}
