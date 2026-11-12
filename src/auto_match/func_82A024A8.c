// Distance between two segments (origin, unit direction, length): the closest-point parameters are
// found as numerator/denominator pairs (s0/d0 along a, s1/d1 along b), clamped to [0, length], and the
// distance between the two closest points is returned.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
double fabs(double x);
float __fsqrts(float);

typedef struct Segment_82A024A8 {
    __vector4 origin;       /* 0x00 */
    __vector4 direction;    /* 0x10 */
    float length;           /* 0x20 */
} Segment_82A024A8;

static __forceinline float Dot3(__vector4 a, __vector4 b)
{
    __vector4 d = __vmsum3fp(a, b);
    return d.vector4_f32[0];
}

static __forceinline __vector4 Negate(__vector4 v)
{
    __vector4 sign = __vspltisw(-1);
    sign = __vslw(sign, sign);
    return __vxor(v, sign);
}

static __forceinline __vector4 Replicate(const float *value)
{
    return __vspltw(__lvlx(value, 0), 0);
}

float fn_82A024A8(const Segment_82A024A8 *a, const Segment_82A024A8 *b)
{
    __vector4 diff = __vsubfp(a->origin, b->origin);
    float a01 = -Dot3(a->direction, b->direction);
    float b0 = Dot3(a->direction, diff);
    float b1 = Dot3(Negate(b->direction), diff);
    float det = 1.0f - a01 * a01;
    float s0, s1, d0, d1;
    float t0, t1;
    __vector4 p0, p1, d;

    if ((float)fabs(det) < 0.0001f) {
        d0 = 1.0f;
        s1 = -b1;
        d1 = 1.0f;
        s0 = 0.0f;
    } else {
        s0 = a01 * b1 - b0;
        s1 = a01 * b0 - b1;
        d0 = det;
        d1 = det;
    }
    if (s0 < 0.0f) {
        s0 = 0.0f;
        s1 = -b1;
        d1 = 1.0f;
    } else {
        float limit = a->length * d0;

        if (s0 > limit) {
            s0 = limit;
            s1 = -(a->length * a01 + b1);
            d1 = 1.0f;
        }
    }
    if (s1 < 0.0f) {
        s1 = 0.0f;
        s0 = -b0;
        d0 = 1.0f;
        if (s0 < 0.0f) {
            s0 = 0.0f;
        } else if (s0 > a->length) {
            s0 = a->length;
        }
    } else {
        float limit = b->length * d1;

        if (s1 > limit) {
            s1 = limit;
            s0 = -(b->length * a01 + b0);
            d0 = 1.0f;
            if (s0 < 0.0f) {
                s0 = 0.0f;
            } else if (s0 > a->length) {
                s0 = a->length;
            }
        }
    }
    t1 = s1 / d1;
    t0 = s0 / d0;
    p0 = __vmaddfp(a->direction, Replicate(&t0), a->origin);
    p1 = __vmaddfp(b->direction, Replicate(&t1), b->origin);
    d = __vsubfp(p1, p0);
    return __fsqrts(Dot3(d, d));
}
