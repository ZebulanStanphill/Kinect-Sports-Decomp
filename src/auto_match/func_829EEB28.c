typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

extern float lbl_8201DD70; /* pi/2 */
extern float lbl_83218BA0[5];

typedef struct Joint_829EEB28 {
    char pad0[0x40];
    __vector4 direction;   /* 0x40 */
    char pad50[0x38];
    float weight;          /* 0x88 */
    char pad8c[0x14];
} Joint_829EEB28;

static __forceinline __vector4 Normalize3(__vector4 v)
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
    result = __vmulfp(v, rsq);
    return __vsel(result, d, mask);
}

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

__vector4 fn_829EEB28(Joint_829EEB28 *joints, int index)
{
    __vector4 result = __vspltisw(0);

    if (joints != 0 && index < 2) {
        Joint_829EEB28 *j = &joints[index];
        float bend = 1.0f - j->weight;
        __vector4 n = Normalize3(j->direction);
        __vector4 len = Length3(j->direction);
        __vector4 t = __vspltisw(0);
        float x, y;

        x = n.vector4_f32[0] / lbl_83218BA0[0];
        y = n.vector4_f32[1] / lbl_83218BA0[1];
        t.vector4_f32[0] = x * lbl_8201DD70;
        t.vector4_f32[1] = y * lbl_8201DD70;
        result = t;
        result.vector4_f32[2] = (len.vector4_f32[0] - bend) * -1.0f;
    }
    return result;
}
