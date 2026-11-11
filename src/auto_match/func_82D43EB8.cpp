// Havok hkpShape::getMaximumProjection(const hkVector4 &direction): AABB of the shape in
// its own space (virtual getAabb, slot 7), then the projection of the AABB corner that lies
// furthest along the direction. lbl_82132D70 is Havok's 0.5 vector, lbl_8209AB20 the sign
// mask.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;

extern "C" {
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vand(__vector4 a, __vector4 b);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
void __stvewx(__vector4 v, void *base, int offset);

extern const hkQuadReal lbl_82132D70;
extern const hkQuadReal lbl_8209AB20;
}

struct Transform_82D43EB8 {
    __vector4 col[3];
    __vector4 translation;
};

struct Aabb_82D43EB8 {
    __vector4 min;
    __vector4 max;
};

class Shape_82D43EB8 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void getAabb(const Transform_82D43EB8 &localToWorld, float tolerance, Aabb_82D43EB8 &out) const;
};

static __forceinline void SetZero4(__vector4 *v)
{
    *v = __vxor(*v, *v);
}

static __forceinline void SetIdentity(Transform_82D43EB8 *t)
{
    __vector4 zero;
    zero = __vxor(zero, zero);
    t->col[0] = zero;
    t->col[1] = zero;
    t->col[2] = zero;
    t->col[0].vector4_f32[0] = 1.0f;
    t->col[1].vector4_f32[1] = 1.0f;
    t->col[2].vector4_f32[2] = 1.0f;
    SetZero4(&t->translation);
}

extern "C" float fn_82D43EB8(const Shape_82D43EB8 *self, const __vector4 *direction)
{
    Transform_82D43EB8 localToWorld;
    Aabb_82D43EB8 aabb;
    __vector4 halfExtents, center, support, proj;
    float result;

    SetIdentity(&localToWorld);
    self->getAabb(localToWorld, 0.0f, aabb);

    halfExtents = __vmulfp(lbl_82132D70, __vsubfp(aabb.max, aabb.min));
    center = __vaddfp(aabb.min, aabb.max);
    support = __vxor(halfExtents, __vand(*direction, lbl_8209AB20));
    support = __vmaddfp(lbl_82132D70, center, support);
    proj = __vmsum3fp(support, *direction);
    __stvewx(proj, &result, 0);
    return result;
}
