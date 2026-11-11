/* Havok hkSweptTransformUtil::warpToPosition(position, motionState) shape: sets the
   translation, recomputes both centres of mass and copies rotation1 to rotation0. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

typedef struct Rotation_83081730 {
    __vector4 col[3];
} Rotation_83081730;

typedef struct Transform_83081730 {
    __vector4 col[4];   /* rotation columns 0..2, translation */
} Transform_83081730;

typedef struct SweptTransform_83081730 {
    __vector4 centerOfMass0;        /* 0x00, w = base time */
    __vector4 centerOfMass1;        /* 0x10, w = 1 / delta time */
    __vector4 rotation0;            /* 0x20 */
    __vector4 rotation1;            /* 0x30 */
    __vector4 centerOfMassLocal;    /* 0x40 */
} SweptTransform_83081730;

typedef struct MotionState_83081730 {
    Transform_83081730 transform;           /* 0x00 */
    SweptTransform_83081730 sweptTransform; /* 0x40 */
    __vector4 deltaAngle;                   /* 0x90 */
} MotionState_83081730;

static __forceinline void SetZero4(__vector4 *v)
{
    *v = __vxor(*v, *v);
}

static __forceinline void RotatedDir(__vector4 *self, const Rotation_83081730 *r, const __vector4 *b)
{
    __vector4 b0 = __vspltw(*b, 0);
    __vector4 r0 = __vmulfp(r->col[0], b0);
    __vector4 b1 = __vspltw(*b, 1);
    __vector4 b2 = __vspltw(*b, 2);
    __vector4 r1 = __vmaddfp(r->col[1], b1, r0);
    *self = __vmaddfp(r->col[2], b2, r1);
}

static __forceinline __vector4 *Column(Transform_83081730 *t, int i)
{
    return &t->col[i];
}

void fn_83081730(const __vector4 *position, MotionState_83081730 *ms)
{
    SweptTransform_83081730 *swept = &ms->sweptTransform;
    __vector4 centerShift;
    float baseTime;

    SetZero4(&ms->deltaAngle);
    *Column(&ms->transform, 3) = *position;
    RotatedDir(&centerShift, (const Rotation_83081730 *)Column(&ms->transform, 0), &swept->centerOfMassLocal);
    baseTime = swept->centerOfMass0.vector4_f32[3];
    swept->centerOfMass0 = __vaddfp(*position, centerShift);
    swept->centerOfMass1 = swept->centerOfMass0;
    swept->centerOfMass0.vector4_f32[3] = baseTime;
    swept->centerOfMass1.vector4_f32[3] = 0.0f;
    swept->rotation0 = swept->rotation1;
}
