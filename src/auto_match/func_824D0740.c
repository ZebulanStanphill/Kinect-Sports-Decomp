// Angle term for one tracked entry (0x1c10 bytes each): normalises the offset between two of
// its points and passes the dot product with a third vector to fn_828095F8; 0 when the two
// points coincide.
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

typedef struct Entry_824D0740 {
    char pad0000[0x1d0];
    __vector4 to;                   // 0x1d0
    char pad01e0[0x20];
    __vector4 from;                 // 0x200
    char pad0210[0x70];
    __vector4 axis;                 // 0x280
    char pad0290[0x1980];
} Entry_824D0740;                   // 0x1c10

extern float fn_828095F8(float x);
extern const float ltcg_pool_0_0f;

// XNA Math XMVector3Normalize on VMX128.
static __forceinline __vector4 Normalize3(__vector4 v)
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
    result = __vmulfp(v, rsq);
    return __vsel(result, d, mask);
}

float fn_824D0740(Entry_824D0740 *entries, int index)
{
    Entry_824D0740 *entry = &entries[index];
    __vector4 offset = __vsubfp(entry->to, entry->from);
    __vector4 lengthSq = __vmsum3fp(offset, offset);

    if (lengthSq.vector4_f32[0] > ltcg_pool_0_0f) {
        __vector4 dot = __vmsum3fp(entry->axis, Normalize3(offset));

        return fn_828095F8(dot.vector4_f32[0]);
    }
    return ltcg_pool_0_0f;
}
