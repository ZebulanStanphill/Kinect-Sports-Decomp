// Attenuation pass: for every entry (xyz position, value z doubles as an input of fn_82A056D0,
// w a level) farther than maxDistance from the listener sphere at +0x50, scales the matching
// output gain by maxDistance / distance when w / fn_82A056D0(z) is below the threshold.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct State_82A063E0 {
    char pad0[0x50];
    __vector4 sphere;       /* 0x50: centre, w = radius */
} State_82A063E0;

float fn_82A056D0(State_82A063E0 *self, float value);

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

void fn_82A063E0(State_82A063E0 *self, const __vector4 *items, float *gains, unsigned int count,
                 float threshold, float maxDistance)
{
    if (self->sphere.vector4_f32[3] <= 0.0f) {
        return;
    }
    for (; count != 0; count--) {
        __vector4 length = Length3(__vsubfp(*items, self->sphere));
        float distance = length.vector4_f32[0];

        if (distance > maxDistance) {
            if (items->vector4_f32[3] / fn_82A056D0(self, items->vector4_f32[2]) < threshold) {
                *gains = maxDistance / distance * *gains;
            }
        }
        items++;
        gains++;
    }
}
