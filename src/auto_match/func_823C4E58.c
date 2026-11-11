// Picks the animation/target id to use: the forced id (+0x9b0) when set; nothing when no
// alternative id (+0x9b4) exists; the override id (+0xde0) when the override slot (+0xde4) is
// set; otherwise the alternative id, but only in states 2, 6, 7, 8, 9 and only while the owner
// is not slower than the threshold lbl_821917A8[11].
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

typedef struct Owner_823C4E58 {
    char pad000[0xbd0];
    __vector4 velocity;             // 0xbd0
} Owner_823C4E58;

typedef struct Self_823C4E58 {
    char pad000[0x41c];
    int state;                      // 0x41c
    char pad420[0x590];
    int forcedId;                   // 0x9b0
    int alternativeId;              // 0x9b4
    char pad9b8[0x428];
    int overrideId;                 // 0xde0
    int overrideSlot;               // 0xde4
    char padde8[0x28];
    Owner_823C4E58 *owner;          // 0xe10
} Self_823C4E58;

extern const float lbl_821917A8[0x52];

// XNA Math XMVector3Length on VMX128.
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

int fn_823C4E58(Self_823C4E58 *self)
{
    int id = self->forcedId;
    int alt;
    int slow;
    __vector4 speed;

    if (id != -1) {
        return id;
    }
    alt = self->alternativeId;
    if (alt == -1) {
        return id;
    }
    speed = Length3(self->owner->velocity);
    slow = speed.vector4_f32[0] < lbl_821917A8[11];
    if (self->overrideSlot != -1) {
        return self->overrideId;
    }
    if ((self->state == 2 || self->state == 8 || self->state == 9 || self->state == 6 || self->state == 7) && !slow) {
        id = alt;
    }
    return id;
}
