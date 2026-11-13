/* Weight of a pose: product of three clamped remaps (height difference of two joints against
   the distance between them, the bone direction against the up axis, and the bone length). */
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
__vector4 __VMXGetReg(int n);

typedef struct Matrix_824AD3B8 {
    __vector4 r[4];
} Matrix_824AD3B8;

typedef struct Skeleton_824AD3B8 {
    char pad0[0x40];
    Matrix_824AD3B8 *joints;   /* 0x40 */
} Skeleton_824AD3B8;

typedef struct Source_824AD3B8 Source_824AD3B8;
typedef struct SourceVtbl_824AD3B8 {
    void (*getInfo)(Source_824AD3B8 *self, int *a, int *id);
    void (*getSkeleton)(Source_824AD3B8 *self, int id, Skeleton_824AD3B8 **out);
} SourceVtbl_824AD3B8;
struct Source_824AD3B8 {
    SourceVtbl_824AD3B8 *vt;
};

typedef struct Self_824AD3B8 {
    char pad0[0x30];
    float weight;          /* 0x30 */
    char pad34[0x4];
    unsigned char left;    /* 0x38 */
    char pad39[0x3];
    float heightScaleLow;  /* 0x3c */
    float heightScaleHigh; /* 0x40 */
    float maxLength;       /* 0x44 */
    float minCos;          /* 0x48 */
} Self_824AD3B8;

extern const float lbl_821CA45C[];

float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);

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

void fn_824AD3B8(Self_824AD3B8 *self, Source_824AD3B8 *source)
{
    int a, id;
    Skeleton_824AD3B8 *skeleton;
    Matrix_824AD3B8 *upper, *lower;
    float distance, length, c, w, h;

    source->vt->getInfo(source, &a, &id);
    source->vt->getSkeleton(source, id, &skeleton);
    upper = &skeleton->joints[self->left != 0 ? 6 : 10];
    lower = &skeleton->joints[self->left != 0 ? 5 : 9];
    h = upper->r[0].vector4_f32[1] - lower->r[0].vector4_f32[1];
    {
        __vector4 t = Length3(upper->r[1]);
        length = t.vector4_f32[0];
    }
    {
        __vector4 t = Length3(__vsubfp(lower->r[0], upper->r[0]));
        distance = t.vector4_f32[0];
    }
    {
        __vector4 n = Normalize3(upper->r[1]);
        __vector4 up = __VMXGetReg(72);
        __vector4 t = __vmsum3fp(up, n);
        c = t.vector4_f32[0];
    }
    w = fn_82539560(h, -(self->heightScaleLow * distance), self->heightScaleHigh * distance, 0.0f, lbl_821CA45C[1]);
    w = w * fn_82539560(c, self->minCos, lbl_821CA45C[1], 0.0f, lbl_821CA45C[1]);
    w = w * fn_82539560(length, 0.0f, self->maxLength, 0.0f, lbl_821CA45C[1]);
    self->weight = w;
}
