typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vcfsx(__vector4 v, int shift);

typedef struct Average_82A022A0 {
    float distance;
    float weight;
} Average_82A022A0;

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;
    h = __vspltisw(1);
    zero = __vspltisw(0);
    d = __vmsum3fp(v, v);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    mask = __vcmpeqfp(d, zero);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

void fn_82A022A0(Average_82A022A0 *avg, __vector4 a, __vector4 b)
{
    __vector4 length;
    float distance;
    float weight;

    if ((a.vector4_f32[0] == 0.0f && a.vector4_f32[1] == 0.0f && a.vector4_f32[2] == 0.0f) || a.vector4_f32[3] == 0.0f) {
        return;
    }
    if ((b.vector4_f32[0] == 0.0f && b.vector4_f32[1] == 0.0f && b.vector4_f32[2] == 0.0f) || b.vector4_f32[3] == 0.0f) {
        return;
    }
    length = Length3(__vsubfp(a, b));
    distance = length.vector4_f32[0];
    weight = (b.vector4_f32[3] + a.vector4_f32[3]) * 0.5f;
    if (avg->distance != 0.0f) {
        avg->weight = (avg->weight + weight) * 0.5f;
        avg->distance = (avg->distance + distance) * 0.5f;
    } else {
        avg->distance = distance;
        avg->weight = weight;
    }
}
