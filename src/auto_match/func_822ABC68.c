// Keeps the closest candidate: if the object is not the excluded one, measures the 3D distance
// between the self position (+0x10) and the object's position (+0x80) and stores the object and
// distance when closer than the best so far. Always returns 1.
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

typedef struct Object_822ABC68 {
    char pad0[0x80];
    __vector4 position;             // 0x80
} Object_822ABC68;

typedef struct Search_822ABC68 {
    char pad0[4];
    Object_822ABC68 *exclude;       // 0x04
    char pad8[8];
    __vector4 position;             // 0x10
    float bestDistance;             // 0x20
    Object_822ABC68 *best;          // 0x24
} Search_822ABC68;

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    h = __vspltisw(1);
    d = __vmsum3fp(v, v);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    zero = __vspltisw(0);
    mask = __vcmpeqfp(d, zero);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

int fn_822ABC68(Search_822ABC68 *self, Object_822ABC68 *object)
{
    if (object != self->exclude) {
        __vector4 length = Length3(__vsubfp(self->position, object->position));
        float d = length.vector4_f32[0];

        if (d < self->bestDistance) {
            self->bestDistance = d;
            self->best = object;
        }
    }
    return 1;
}
