// Havok hkSweptTransformUtil::lerp2(sweptTrans, t, transformOut): approximate quaternion
// slerp through the normalized sum, normalize, interpolate the centre of mass and subtract
// the rotated local centre of mass. Flags: /O2 /QVMXReserve. fn_82CE6010 is hkRotation::set.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct Rotation_83080F98 {
    __vector4 col[3];
} Rotation_83080F98;

typedef struct Transform_83080F98 {
    Rotation_83080F98 rotation;
    __vector4 translation;
} Transform_83080F98;

typedef struct SweptTransform_83080F98 {
    __vector4 centerOfMass0;        // 0x00
    __vector4 centerOfMass1;        // 0x10
    __vector4 rotation0;            // 0x20
    __vector4 rotation1;            // 0x30
    __vector4 centerOfMassLocal;    // 0x40
} SweptTransform_83080F98;

extern const __vector4 lbl_82132D70;    // (0.5, 0.5, 0.5, 0.5)
extern const __vector4 lbl_82132D10;    // (1, 1, 1, 1)

void fn_82CE6010(Rotation_83080F98 *self, const __vector4 *q);

static __forceinline __vector4 SimdReal(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

static __forceinline float LengthSquared4(const __vector4 *v)
{
    float r;
    __stvewx(__vmsum4fp(*v, *v), &r, 0);
    return r;
}

static __forceinline void Interpolate4(__vector4 *self, const __vector4 *a, const __vector4 *b, __vector4 t)
{
    __vector4 bt = __vspltw(t, 0);
    __vector4 at = __vsubfp(lbl_82132D10, bt);
    __vector4 x = __vmulfp(at, *a);
    *self = __vmaddfp(bt, *b, x);
}

static __forceinline __vector4 InvSqrt(__vector4 r)
{
    __vector4 zero = __vspltisw(0);
    __vector4 e = __vrsqrtefp(r);
    __vector4 hr = __vmulfp(r, lbl_82132D70);
    __vector4 mask = __vcmpeqfp(zero, r);

    e = __vmaddfp(e, __vnmsubfp(hr, __vmulfp(e, e), lbl_82132D70), e);
    e = __vmaddfp(e, __vnmsubfp(hr, __vmulfp(e, e), lbl_82132D70), e);
    return __vsel(e, zero, mask);
}

static __forceinline void Normalize4(__vector4 *self)
{
    __vector4 lengthSquared = __vmsum4fp(*self, *self);
    __vector4 inv = InvSqrt(lengthSquared);
    *self = __vmulfp(*self, __vspltw(inv, 0));
}

static __forceinline void RotatedDir(__vector4 *self, const Rotation_83080F98 *r, const __vector4 *b)
{
    __vector4 b0 = __vspltw(*b, 0);
    __vector4 r0 = __vmulfp(r->col[0], b0);
    __vector4 b1 = __vspltw(*b, 1);
    __vector4 b2 = __vspltw(*b, 2);
    __vector4 r1 = __vmaddfp(r->col[1], b1, r0);
    *self = __vmaddfp(r->col[2], b2, r1);
}

static __forceinline void Sub4(__vector4 *self, const __vector4 *a)
{
    *self = __vsubfp(*self, *a);
}

static __forceinline __vector4 *Column(Transform_83080F98 *t, int i)
{
    return &t->rotation.col[i];
}


static __forceinline void InterpolateV(__vector4 *self, __vector4 a, __vector4 b, __vector4 t)
{
    __vector4 bt = __vspltw(t, 0);
    __vector4 at = __vsubfp(lbl_82132D10, bt);
    __vector4 x = __vmulfp(at, a);
    *self = __vmaddfp(bt, b, x);
}

static __forceinline void LerpRotation(const SweptTransform_83080F98 *s, float t, __vector4 *qOut)
{
    __vector4 q0 = s->rotation0;
    __vector4 q1 = s->rotation1;
    __vector4 sum = __vaddfp(q0, q1);
    float len2 = LengthSquared4(&sum);
    float r = 0.75f - len2 * 0.125f;
    __vector4 half;

    r = (1.5f - len2 * r * r * 0.5f) * r;
    half = __vmulfp(sum, SimdReal(r));
    if (t < 0.5f) {
        InterpolateV(qOut, q0, half, SimdReal(t * 2.0f));
    } else {
        InterpolateV(qOut, half, q1, SimdReal(t * 2.0f - 1.0f));
    }
    Normalize4(qOut);
}

static __forceinline void Lerp2(const SweptTransform_83080F98 *self, float t, Transform_83080F98 *out)
{
    __vector4 q;
    __vector4 centerShift;

    LerpRotation(self, t, &q);
    fn_82CE6010(&out->rotation, &q);
    {
        __vector4 *tr = Column(out, 3);
        Interpolate4(tr, &self->centerOfMass0, &self->centerOfMass1, SimdReal(t));
        RotatedDir(&centerShift, &out->rotation, &self->centerOfMassLocal);
        Sub4(&out->translation, &centerShift);
    }
}

void fn_83080F98(const SweptTransform_83080F98 *self, float t, Transform_83080F98 *out)
{
    float tt = t;
    Lerp2(self, tt, out);
}
