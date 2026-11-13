// For each of the two players that is active (fn_825602B8), copies the source's position and
// direction into the player's mirror entry and builds the entry's matrix: the reflection through
// the plane normal to the direction (I - 2 n n^T), multiplied by the object's world matrix.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rot);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vmrglw(__vector4 a, __vector4 b);

struct Matrix_825E9498 {
    Matrix_825E9498() {}
    __forceinline Matrix_825E9498 &operator=(const Matrix_825E9498 &m)
    {
        r[0] = m.r[0];
        r[1] = m.r[1];
        r[2] = m.r[2];
        r[3] = m.r[3];
        return *this;
    }
    __vector4 r[4];
};

typedef struct Source_825E9498 {
    char pad0[0x430];
    __vector4 position;          /* 0x430 */
    __vector4 direction;         /* 0x440 */
} Source_825E9498;

typedef struct Mirror_825E9498 {
    __vector4 position;          /* 0x00 */
    __vector4 direction;         /* 0x10 */
    Matrix_825E9498 matrix;      /* 0x20 */
} Mirror_825E9498;

typedef struct Self_825E9498 {
    Source_825E9498 *source;     /* 0x00 */
    char pad4[0x4c];
    Matrix_825E9498 world;       /* 0x50 */
    char pad90[0x910];
    Mirror_825E9498 mirrors[2];  /* 0x9a0 */
} Self_825E9498;

int fn_825602B8(int player);
}

static __forceinline Matrix_825E9498 Reflect(__vector4 d)
{
    Matrix_825E9498 m;
    __vector4 zero, minus2, half, one, dot, rsq, p, s, plane;

    minus2 = __vcfsx(__vspltisw(-2), 0);
    half = __vcfsx(__vspltisw(1), 1);
    zero = __vspltisw(0);
    one = __vupkd3d(zero, 1);
    dot = __vmsum3fp(d, d);
    rsq = __vrsqrtefp(dot);
    plane = __vrlimi(zero, d, 0xe, 0);
    rsq = __vmaddfp(rsq, __vnmsubfp(__vmulfp(dot, half), __vmulfp(rsq, rsq), half), rsq);
    p = __vmulfp(d, rsq);
    s = __vmulfp(__vmulfp(plane, minus2), rsq);
    m.r[0] = __vmaddfp(__vspltw(p, 0), s, __vpermwi(one, 234));
    m.r[1] = __vmaddfp(__vspltw(p, 1), s, __vpermwi(one, 186));
    m.r[2] = __vmaddfp(__vspltw(p, 2), s, __vpermwi(one, 174));
    m.r[3] = __vmaddfp(__vspltw(p, 3), s, __vpermwi(one, 171));
    return m;
}

static __forceinline Matrix_825E9498 Multiply(Matrix_825E9498 a, Matrix_825E9498 b)
{
    Matrix_825E9498 m;
    __vector4 t0, t1, t2, t3, c0, c1, c2, c3;
    __vector4 x, y, z, w;

    t0 = __vmrghw(b.r[0], b.r[2]);
    t1 = __vmrghw(b.r[1], b.r[3]);
    t2 = __vmrglw(b.r[0], b.r[2]);
    t3 = __vmrglw(b.r[1], b.r[3]);
    c1 = __vmrglw(t0, t1);
    c0 = __vmrghw(t0, t1);
    c3 = __vmrglw(t2, t3);
    c2 = __vmrghw(t2, t3);
    x = __vmsum4fp(a.r[0], c0);
    y = __vmsum4fp(a.r[0], c1);
    z = __vmsum4fp(a.r[0], c2);
    w = __vmsum4fp(a.r[0], c3);
    m.r[0] = __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
    x = __vmsum4fp(a.r[1], c0);
    y = __vmsum4fp(a.r[1], c1);
    z = __vmsum4fp(a.r[1], c2);
    w = __vmsum4fp(a.r[1], c3);
    m.r[1] = __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
    x = __vmsum4fp(a.r[2], c0);
    y = __vmsum4fp(a.r[2], c1);
    z = __vmsum4fp(a.r[2], c2);
    w = __vmsum4fp(a.r[2], c3);
    m.r[2] = __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
    x = __vmsum4fp(a.r[3], c0);
    y = __vmsum4fp(a.r[3], c1);
    z = __vmsum4fp(a.r[3], c2);
    w = __vmsum4fp(a.r[3], c3);
    m.r[3] = __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
    return m;
}

extern "C" void fn_825E9498(Self_825E9498 *self)
{
    int i;
    Matrix_825E9498 reflect;
    __vector4 d;

    for (i = 0; i < 2; i++) {
        if (fn_825602B8(i) != 0) {
            self->mirrors[i].position = self->source->position;
            d = self->source->direction;
            self->mirrors[i].direction = d;
            reflect = Reflect(d);
            self->mirrors[i].matrix = Multiply(reflect, self->world);
        }
    }
}
