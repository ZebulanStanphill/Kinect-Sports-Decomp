typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);

typedef struct Matrix3_825A5420 {
    __vector4 col[3];
} Matrix3_825A5420;

typedef struct State_825A5420 {
    float a;                   /* 0x00 */
    float b;                   /* 0x04 */
    char pad8[8];
    __vector4 v;               /* 0x10 */
    Matrix3_825A5420 m;        /* 0x20 */
} State_825A5420;

typedef struct Self_825A5420 {
    char pad0[0x18];
    State_825A5420 *state;     /* 0x18 */
} Self_825A5420;

extern void fn_82CEBE20(Matrix3_825A5420 *m, const __vector4 *s);

static __forceinline void Matrix3_copy(Matrix3_825A5420 *d, const Matrix3_825A5420 *s)
{
    d->col[0] = s->col[0];
    d->col[1] = s->col[1];
    d->col[2] = s->col[2];
}

void fn_825A5420(Self_825A5420 *self, float scale, State_825A5420 *out)
{
    State_825A5420 *src = self->state;
    __vector4 s;

    out->a = src->a;
    out->b = src->b;
    out->v = src->v;
    Matrix3_copy(&out->m, &src->m);
    s = __vspltw(__lvlx(&scale, 0), 0);
    out->b = scale;
    fn_82CEBE20(&out->m, &s);
}
