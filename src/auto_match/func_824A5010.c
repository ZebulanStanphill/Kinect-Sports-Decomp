// Angle test between two limb directions of a skeleton: joint 1 - joint 4 against joint 0x12 - 0x11
// (0x16 - 0x15 for kind 0x18), both normalized; true when the angle (fn_8255A2F8) exceeds the limit.
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

typedef struct Joint_824A5010 {
    __vector4 position;
    __vector4 pad[3];
} Joint_824A5010;

typedef struct Skeleton_824A5010 {
    char pad0[0x40];
    Joint_824A5010 *joints;     /* 0x40 */
} Skeleton_824A5010;

float fn_8255A2F8(__vector4 a, __vector4 b);

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

unsigned char fn_824A5010(unsigned int kind, Skeleton_824A5010 *skeleton, float limit)
{
    int to = 0x12;
    int from = 0x11;
    __vector4 a, b;

    if (kind == 0x18) {
        to = 0x16;
        from = 0x15;
    }
    b = Normalize3(__vsubfp(skeleton->joints[to].position, skeleton->joints[from].position));
    a = Normalize3(__vsubfp(skeleton->joints[1].position, skeleton->joints[4].position));
    return fn_8255A2F8(a, b) > limit;
}
