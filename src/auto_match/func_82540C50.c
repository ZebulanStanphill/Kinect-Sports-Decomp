// Stores five shader/lighting vectors in the renderer state and the first one transformed as a
// direction by the matrix at +0xa880 (XMVector3TransformNormal shape, w cleared through the
// reserved zero v77 and select mask v67).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Matrix_82540C50 {
    __vector4 r[4];
} Matrix_82540C50;

typedef struct State_82540C50 {
    char pad0[0xa880];
    Matrix_82540C50 view;       /* 0xa880 */
    char pada8c0[0x1f0];
    __vector4 viewDirection;    /* 0xaab0 */
    __vector4 direction;        /* 0xaac0 */
    __vector4 colour[3];        /* 0xaad0 */
    char padab00[0x80];
    __vector4 extra;            /* 0xab80 */
} State_82540C50;

static __forceinline __vector4 TransformNormal3(__vector4 v, Matrix_82540C50 m)
{
    __vector4 x, y, z, result;

    z = __vspltw(v, 2);
    y = __vspltw(v, 1);
    x = __vspltw(v, 0);
    result = __vmulfp(z, m.r[2]);
    result = __vmaddfp(y, m.r[1], result);
    result = __vmaddfp(x, m.r[0], result);
    return result;
}

void fn_82540C50(State_82540C50 *self, __vector4 direction, __vector4 c0, __vector4 c1, __vector4 c2,
                 __vector4 extra)
{
    __vector4 v, zero, mask;

    v = TransformNormal3(direction, self->view);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    self->viewDirection = __vsel(v, zero, mask);
    self->direction = direction;
    self->colour[0] = c0;
    self->colour[1] = c1;
    self->colour[2] = c2;
    self->extra = extra;
}
