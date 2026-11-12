// Rebuilds the world matrix from the orientation quaternion (fn_8307D470 rotation matrix times
// the local matrix at +0x60), the scaled position (w = 1) and refreshes the cached handle.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

typedef struct Matrix_83078738 {
    __vector4 r[4];
} Matrix_83078738;

typedef struct Obj_83078738 {
    __vector4 position;          /* 0x00 */
    char pad10[0x20];
    float scale;                 /* 0x30 */
    int pad34;
    int source;                  /* 0x38 */
    char pad3c[0x24];
    Matrix_83078738 local;       /* 0x60 */
    Matrix_83078738 world;       /* 0xa0 */
    char pade0[0x40];
    __vector4 orientation;       /* 0x120 */
    char pad130[0x30];
    int handle;                  /* 0x160 */
} Obj_83078738;

extern Matrix_83078738 *fn_8307D470(Matrix_83078738 *out, __vector4 q);
extern int fn_830790A8(int source);

static __forceinline Matrix_83078738 Multiply(Matrix_83078738 a, Matrix_83078738 b)
{
    Matrix_83078738 m;
    __vector4 x, y, z, w;

    x = __vspltw(a.r[0], 0);
    y = __vspltw(a.r[0], 1);
    z = __vspltw(a.r[0], 2);
    w = __vspltw(a.r[0], 3);
    x = __vmulfp(x, b.r[0]);
    x = __vmaddfp(y, b.r[1], x);
    x = __vmaddfp(z, b.r[2], x);
    x = __vmaddfp(w, b.r[3], x);
    m.r[0] = x;
    x = __vspltw(a.r[1], 0);
    y = __vspltw(a.r[1], 1);
    z = __vspltw(a.r[1], 2);
    w = __vspltw(a.r[1], 3);
    x = __vmulfp(x, b.r[0]);
    x = __vmaddfp(y, b.r[1], x);
    x = __vmaddfp(z, b.r[2], x);
    x = __vmaddfp(w, b.r[3], x);
    m.r[1] = x;
    x = __vspltw(a.r[2], 0);
    y = __vspltw(a.r[2], 1);
    z = __vspltw(a.r[2], 2);
    w = __vspltw(a.r[2], 3);
    x = __vmulfp(x, b.r[0]);
    x = __vmaddfp(y, b.r[1], x);
    x = __vmaddfp(z, b.r[2], x);
    x = __vmaddfp(w, b.r[3], x);
    m.r[2] = x;
    x = __vspltw(a.r[3], 0);
    y = __vspltw(a.r[3], 1);
    z = __vspltw(a.r[3], 2);
    w = __vspltw(a.r[3], 3);
    x = __vmulfp(x, b.r[0]);
    x = __vmaddfp(y, b.r[1], x);
    x = __vmaddfp(z, b.r[2], x);
    x = __vmaddfp(w, b.r[3], x);
    m.r[3] = x;
    return m;
}

static __forceinline __vector4 Replicate(float v)
{
    __vector4 r;

    r.vector4_f32[0] = r.vector4_f32[1] = r.vector4_f32[2] = r.vector4_f32[3] = v;
    return r;
}

void fn_83078738(Obj_83078738 *self)
{
    Matrix_83078738 rotation;
    Matrix_83078738 *r;
    Matrix_83078738 m;
    Matrix_83078738 *w;
    __vector4 s;

    r = fn_8307D470(&rotation, self->orientation);
    m = Multiply(*r, self->local);
    w = &self->world;
    w->r[0] = m.r[0];
    w->r[1] = m.r[1];
    w->r[2] = m.r[2];
    w->r[3] = m.r[3];
    s = __vmulfp(self->position, Replicate(self->scale));
    s.vector4_f32[3] = 1.0f;
    self->world.r[3] = s;
    self->handle = fn_830790A8(self->source);
}
