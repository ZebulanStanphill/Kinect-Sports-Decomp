// Havok hkSweptTransform::approxTransformAt(time, transformOut): interpolates and normalizes the
// rotation, interpolates the centre of mass and subtracts the rotated local centre of mass.
// Flags: /O2 /QVMXReserve.
// The 0.5 vector is Havok's named constant at 0x82132D70 (lbl_82132D70), not a literal: with a
// `const __vector4` literal the constant and rotation1 swap registers.
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

typedef struct Rotation_83082380 {
    __vector4 col[3];
} Rotation_83082380;

typedef struct Transform_83082380 {
    Rotation_83082380 rotation;
    __vector4 translation;
} Transform_83082380;

typedef struct SweptTransform_83082380 {
    __vector4 centerOfMass0;        // 0x00, w = base time
    __vector4 centerOfMass1;        // 0x10, w = 1 / delta time
    __vector4 rotation0;            // 0x20
    __vector4 rotation1;            // 0x30
    __vector4 centerOfMassLocal;    // 0x40
} SweptTransform_83082380;

extern const __vector4 lbl_82132D70;    // (0.5, 0.5, 0.5, 0.5)
extern const __vector4 lbl_82132D10;    // (1, 1, 1, 1)

void fn_82CE6010(Rotation_83082380 *self, const __vector4 *q);

static __forceinline __vector4 SimdReal(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
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

static __forceinline void RotatedDir(__vector4 *self, const Rotation_83082380 *r, const __vector4 *b)
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

static __forceinline __vector4 *Column(Transform_83082380 *t, int i)
{
    return &t->rotation.col[i];
}

void fn_83082380(const SweptTransform_83082380 *self, float time, Transform_83082380 *out)
{
    __vector4 dt = SimdReal((time - self->centerOfMass0.vector4_f32[3]) * self->centerOfMass1.vector4_f32[3]);
    __vector4 q;
    __vector4 centerShift;

    Interpolate4(&q, &self->rotation0, &self->rotation1, dt);
    Normalize4(&q);
    fn_82CE6010(&out->rotation, &q);
    {
        __vector4 *t = Column(out, 3);
        Interpolate4(t, &self->centerOfMass0, &self->centerOfMass1, dt);
        RotatedDir(&centerShift, &out->rotation, &self->centerOfMassLocal);
        Sub4(&out->translation, &centerShift);
    }
}
