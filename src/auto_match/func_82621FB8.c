// Clips a convex polygon (homogeneous vertices) against the plane w = 1: for every edge that
// crosses it the intersection point is emitted, and every end point with w >= 1 is kept.
// Returns the number of vertices written.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

extern const float lbl_821CA45C[2];

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);

    return __vspltw(v, 0);
}

static __forceinline __vector4 Lerp(__vector4 a, __vector4 b, float t)
{
    return __vmaddfp(__vsubfp(b, a), Replicate(t), a);
}

int fn_82621FB8(const __vector4 *in, int count, __vector4 *out)
{
    int written = 0;
    int i;
    if (count > 0) {
        float one = lbl_821CA45C[1];
        int n = count;
        i = 0;
        do {
            int next = i + 1 < count ? i + 1 : 0;
            float wa = in[i].vector4_f32[3];
            int insideA = in[i].vector4_f32[3] >= one;
            float wb = in[next].vector4_f32[3];
            int insideB = in[next].vector4_f32[3] >= one;

            if (insideA + insideB == 1) {
                float t = (wa - one) / (wa - wb);

                *out = Lerp(in[i], in[next], t);
                out++;
                written++;
            }
            if (insideB) {
                *out = in[next];
                out++;
                written++;
            }
            i++;
        } while (--n != 0);
    }
    return written;
}
