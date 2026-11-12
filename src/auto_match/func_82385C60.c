// Picks the corner of the rectangle spanned by a and b (at a's z) farthest from *position, stores
// it in *corner and looks it up with fn_82385B80.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

void *memset(void *, int, unsigned int);
int fn_82385B80(unsigned int key, __vector4 *found, __vector4 position);

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

int fn_82385C60(unsigned int key, __vector4 *corner, __vector4 a, __vector4 b, __vector4 *position)
{
    __vector4 corners[4];
    float best;
    __vector4 p;
    int i;

    corners[0].vector4_f32[0] = a.vector4_f32[0];
    corners[0].vector4_f32[1] = a.vector4_f32[1];
    corners[0].vector4_f32[2] = a.vector4_f32[2];
    memset(&corners[0].vector4_f32[3], 0, 4);
    corners[1].vector4_f32[0] = a.vector4_f32[0];
    corners[1].vector4_f32[1] = b.vector4_f32[1];
    corners[1].vector4_f32[2] = a.vector4_f32[2];
    memset(&corners[1].vector4_f32[3], 0, 4);
    corners[2].vector4_f32[0] = b.vector4_f32[0];
    corners[2].vector4_f32[1] = a.vector4_f32[1];
    corners[2].vector4_f32[2] = a.vector4_f32[2];
    memset(&corners[2].vector4_f32[3], 0, 4);
    corners[3].vector4_f32[0] = b.vector4_f32[0];
    corners[3].vector4_f32[1] = b.vector4_f32[1];
    corners[3].vector4_f32[2] = a.vector4_f32[2];
    memset(&corners[3].vector4_f32[3], 0, 4);
    p = *position;
    best = 0.0f;
    for (i = 0; i < 4; i++) {
        __vector4 c = corners[i];
        __vector4 l = Length3(__vsubfp(c, p));
        if (l.vector4_f32[0] > best) {
            *corner = c;
            best = l.vector4_f32[0];
        }
    }
    return fn_82385B80(key, position, *corner);
}
