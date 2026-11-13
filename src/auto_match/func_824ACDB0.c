/* Facing factor between two skeleton joints (14 and 18, swapped by the side flag): the horizontal
   part of the normalised joint-to-joint direction against the normalised horizontal axis of the
   first joint's matrix, remapped (fn_82539560) from [lo, hi] to [0, 1], times the axis length
   remapped from [0, max] to [0, 1]. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
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

typedef struct Joint_824ACDB0 {
    __vector4 position;      /* 0x00 */
    float axis[4];           /* 0x10 */
    __vector4 pad20[2];
} Joint_824ACDB0;

typedef struct Skeleton_824ACDB0 {
    char pad0[0x40];
    Joint_824ACDB0 *joints;  /* 0x40 */
} Skeleton_824ACDB0;

typedef struct Source_824ACDB0 Source_824ACDB0;
typedef struct SourceVtbl_824ACDB0 {
    void (*getUser)(Source_824ACDB0 *self, int *info, int *index);
    void (*getSkeleton)(Source_824ACDB0 *self, int index, Skeleton_824ACDB0 **skeleton);
} SourceVtbl_824ACDB0;
struct Source_824ACDB0 {
    SourceVtbl_824ACDB0 *vt;
};

typedef struct Self_824ACDB0 {
    char pad0[0x30];
    float facing;            /* 0x30 */
    char pad34[4];
    unsigned char mirrored;  /* 0x38 */
    char pad39[3];
    float maxLength;         /* 0x3c */
    float lo;                /* 0x40 */
    float hi;                /* 0x44 */
} Self_824ACDB0;

extern float lbl_821CA45C[];
extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx = __lvlx(&x, 0);
    __vector4 vy = __lvlx(&y, 0);
    __vector4 vz = __lvlx(&z, 0);
    __vector4 vw = __lvlx(&w, 0);
    vx = __vrlimi(vx, vy, 4, 3);
    vz = __vrlimi(vz, vw, 4, 3);
    return __vrlimi(vx, vz, 3, 2);
}

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

void fn_824ACDB0(Self_824ACDB0 *self, Source_824ACDB0 *source)
{
    int index;
    Skeleton_824ACDB0 *skeleton;
    int info;
    __vector4 toOther, length, axis, flat;
    const Joint_824ACDB0 *a, *b;
    float f;

    source->vt->getUser(source, &info, &index);
    source->vt->getSkeleton(source, index, &skeleton);
    a = &skeleton->joints[self->mirrored ? 14 : 18];
    b = &skeleton->joints[self->mirrored ? 18 : 14];
    axis = VectorSet(a->axis[0], 0.0f, a->axis[2], 0.0f);
    toOther = Normalize3(__vsubfp(a->position, b->position));
    length = Length3(axis);
    axis = Normalize3(axis);
    flat = VectorSet(toOther.vector4_f32[0], 0.0f, toOther.vector4_f32[2], 0.0f);
    flat = __vmsum3fp(flat, axis);
    f = fn_82539560(flat.vector4_f32[0], self->lo, self->hi, 0.0f, lbl_821CA45C[1]);
    self->facing = f * fn_82539560(length.vector4_f32[0], 0.0f, self->maxLength, 0.0f, lbl_821CA45C[1]);
}
