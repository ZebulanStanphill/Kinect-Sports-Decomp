// State check: stays in the object's own state (self->state) while the tracked target is
// within range of the owner's position and the owner is not busy; otherwise state 5.
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

typedef struct Position_8232C660 {
    __vector4 v;
} Position_8232C660;

typedef struct Target_8232C660 Target_8232C660;
typedef struct TargetVtbl_8232C660 {
    void *f0;
    void *f4;
    Position_8232C660 (*getPosition)(Target_8232C660 *self);
} TargetVtbl_8232C660;
struct Target_8232C660 {
    TargetVtbl_8232C660 *vt;
};

typedef struct Owner_8232C660 {
    char pad0[0x80];
    __vector4 position;         // 0x80
    char pad90[0x1e0];
    Target_8232C660 *target;    // 0x270
    char pad274[0x530];
    int busy;                   // 0x7a4
} Owner_8232C660;

typedef struct Self_8232C660 {
    int unk0;
    Owner_8232C660 *owner;
    int unk8;
    int state;
} Self_8232C660;

extern const float lbl_821924E8[];

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

int fn_8232C660(Self_8232C660 *self)
{
    Target_8232C660 *target = self->owner->target;

    if (target != 0) {
        __vector4 from = self->owner->position;
        __vector4 distance = Length3(__vsubfp(target->vt->getPosition(target).v, from));
        if (distance.vector4_f32[0] <= lbl_821924E8[32] && self->owner->busy == 0) {
            return self->state;
        }
    }
    return 5;
}
