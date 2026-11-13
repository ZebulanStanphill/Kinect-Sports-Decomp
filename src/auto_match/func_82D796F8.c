/* Havok box-box contact feature walk: builds the feature id of the two box vertices facing each
   other (sign masks of the two directions, the separating face axes forced to +1) and reports it,
   then toggles the vertex sign bits of the two edge axes to report the other three corners. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);
__vector4 __vand(__vector4 a, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vctsxs(__vector4 v, int shift);

typedef struct FeatureId_82D796F8 {
    unsigned char a;
    unsigned char b;
    unsigned short id;
} FeatureId_82D796F8;

void fn_82D792A8(void *manifold, void *input, FeatureId_82D796F8 *feature, float tolerance);

static __forceinline int GetMask(__vector4 cmp)
{
    const __vector4 one = {{1.0f, 1.0f, 1.0f, 1.0f}};
    const __vector4 bits = {{8.0f, 4.0f, 2.0f, 1.0f}};
    __vector4 m;

    m = __vctsxs(__vmsum4fp(__vand(cmp, one), bits), 0);
    return *(int *)&m;
}

static __forceinline int AxisBit(int axis)
{
    if (axis == 0)
        return 3;
    return (axis == 1) + 1;
}

void fn_82D796F8(void *manifold, void *input, int indexA, int indexB, int axisA, int axisB,
                 const __vector4 *dirA, const __vector4 *dirB, float tolerance)
{
    __vector4 b, a, zero;
    int maskA, maskB, bitA, bitB;
    FeatureId_82D796F8 feature;

    b = *dirB;
    b.vector4_f32[indexB] = 1.0f;
    a = *dirA;
    a.vector4_f32[indexA] = 1.0f;
    zero = __vspltisw(0);
    maskA = GetMask(__vcmpgtfp(zero, a));
    maskB = GetMask(__vcmpgtfp(zero, b));
    feature.id = 0;
    feature.a = (unsigned char)(((maskA & 0xe) << 4) | 0x10 | indexA);
    feature.b = (unsigned char)((((maskB & 0xe) ^ 0xe) << 4) + indexB);
    fn_82D792A8(manifold, input, &feature, tolerance);
    bitA = 1 << (AxisBit(axisA) + 4);
    bitB = AxisBit(axisB);
    feature.a ^= bitA;
    fn_82D792A8(manifold, input, &feature, tolerance);
    feature.b ^= 1 << (bitB + 4);
    fn_82D792A8(manifold, input, &feature, tolerance);
    feature.a ^= bitA;
    fn_82D792A8(manifold, input, &feature, tolerance);
}
