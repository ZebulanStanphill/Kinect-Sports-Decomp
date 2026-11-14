typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;

typedef struct SegmentResult_82D3BF58 {
    float distanceSquared;
    float t;
    float u;
    __vector4 pointA;
    __vector4 pointB;
} SegmentResult_82D3BF58;

extern void fn_8307FB40(const __vector4 *a, const __vector4 *dirA, const __vector4 *b, const __vector4 *dirB,
                        SegmentResult_82D3BF58 *result);

void fn_82D3BF58(const __vector4 *a, const __vector4 *dirA, const __vector4 *b, const __vector4 *dirB,
                 float *distanceSquared, float *t, float *u, __vector4 *pointA, __vector4 *pointB)
{
    SegmentResult_82D3BF58 result;
    fn_8307FB40(a, dirA, b, dirB, &result);
    *pointA = result.pointA;
    *pointB = result.pointB;
    *t = result.t;
    *u = result.u;
    *distanceSquared = result.distanceSquared;
}
