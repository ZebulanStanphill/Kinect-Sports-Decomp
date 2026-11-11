// Normalizes the rotation (first vector of each 0x30-byte transform) of every element of the
// object's transform array, prefetching the stream 0x100 bytes ahead.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

void __dcbt(int offset, const void *base);
__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Transform_827FC410 {
    __vector4 rotation;
    __vector4 translation;
    __vector4 scale;
} Transform_827FC410;

typedef struct Pose_827FC410 {
    char pad0[0x32];
    unsigned short count;        // 0x32
    char pad34[0x50];
    Transform_827FC410 *transforms;   // 0x84
} Pose_827FC410;

static __forceinline __vector4 Normalize4(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum4fp(v, v);
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

void fn_827FC410(Pose_827FC410 *self)
{
    Transform_827FC410 *t = self->transforms;
    unsigned int bytes = 0x80;
    unsigned int i;
    unsigned int count;

    __dcbt(0, t);
    __dcbt(0x80, t);
    i = 0;
    count = self->count;
    if (count != 0) {
        do {
        if (bytes >= 0x80) {
            bytes -= 0x80;
            __dcbt(0x100, t);
        }
        t->rotation = Normalize4(t->rotation);
        bytes += sizeof(Transform_827FC410);
        t++;
            i++;
        } while (i < count);
    }
}
