typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Body_82D959A8 {
    char pad0[0x18];
    void *transform;               /* 0x18 */
} Body_82D959A8;

typedef struct Self_82D959A8 {
    char pad0[0xc];
    void *shape;                   /* 0x0c */
    int pad10;
    Body_82D959A8 *bodyA;          /* 0x14 */
    Body_82D959A8 *bodyB;          /* 0x18 */
} Self_82D959A8;

extern __vector4 *fn_82DBE7C8(void *shape);
extern __vector4 *fn_82DBE8C8(void *shape);
extern void fn_82CE5040(__vector4 *out, void *transform, __vector4 *in);

void fn_82D959A8(Self_82D959A8 *self, __vector4 *outA, __vector4 *outB)
{
    __vector4 a = *fn_82DBE7C8(self->shape);
    __vector4 b = *fn_82DBE8C8(self->shape);
    void *ta = self->bodyA->transform;
    void *tb = self->bodyB->transform;
    fn_82CE5040(outA, ta, &a);
    fn_82CE5040(outB, tb, &b);
}
