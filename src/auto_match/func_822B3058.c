typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vaddfp(__vector4 a, __vector4 b);

/* Quaternion product q1 * q2 with a precomputed sign mask (0x80000000 per lane). */
static __forceinline __vector4 QuaternionMultiply(__vector4 q1, __vector4 q2, __vector4 signMask)
{
    __vector4 q2wzyx, q2zwxy, q2yxwz, negated, nx, ny, nz, nw, x, y, z, w;

    q2zwxy = __vpermwi(q2, 177);
    q2yxwz = __vpermwi(q2, 78);
    q2wzyx = __vpermwi(q2, 228);
    negated = __vxor(q1, signMask);
    nx = __vrlimi(negated, q1, 0xb, 0);
    nw = __vrlimi(negated, q1, 0x1, 0);
    ny = __vrlimi(negated, q1, 0xd, 0);
    nz = __vrlimi(negated, q1, 0x7, 0);
    x = __vmsum4fp(nx, q2wzyx);
    w = __vmsum4fp(nw, q2);
    y = __vmsum4fp(ny, q2zwxy);
    z = __vmsum4fp(nz, q2yxwz);
    return __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
}

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

void fn_822B3058(__vector4 *out, const __vector4 *frame, __vector4 scale, __vector4 q)
{
    __vector4 signMask, a, c, r, pivot;

    pivot = frame[0];
    signMask = __vspltisw(-1);
    a = __vspltisw(0);
    signMask = __vslw(signMask, signMask);
    r = __vsubfp(__vmaddfp(scale, frame[5], frame[1]), pivot);
    a = __vrlimi(a, r, 0xe, 0);
    c = __vrlimi(__vxor(q, signMask), q, 1, 0);
    r = QuaternionMultiply(c, a, signMask);
    r = QuaternionMultiply(r, q, signMask);
    *out = __vaddfp(r, pivot);
}
