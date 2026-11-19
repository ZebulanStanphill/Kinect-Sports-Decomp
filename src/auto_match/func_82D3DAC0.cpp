// hkpListShape::recalcAabbExtents(hkAabb &aabbOut): the union of the children's AABBs (identity
// transform, zero tolerance) into aabbOut, then the cached center and half extents from it.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __vminfp(__vector4 a, __vector4 b);
__vector4 __vmaxfp(__vector4 a, __vector4 b);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
}

class hkVector4
{
  public:
    __forceinline void setMin4(const hkVector4 &a, const hkVector4 &b)
    {
        q = __vminfp(a.q, b.q);
    }

    __forceinline void setMax4(const hkVector4 &a, const hkVector4 &b)
    {
        q = __vmaxfp(a.q, b.q);
    }

    __forceinline void setAdd4(const hkVector4 &a, const hkVector4 &b)
    {
        q = __vaddfp(a.q, b.q);
    }

    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b)
    {
        q = __vsubfp(a.q, b.q);
    }

    __forceinline void setMul4(const hkVector4 &a, const hkVector4 &b)
    {
        q = __vmulfp(a.q, b.q);
    }

    __vector4 q;
};

class hkTransform;

class hkAabb
{
  public:
    hkVector4 m_min;
    hkVector4 m_max;
};

class hkpShape
{
  public:
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void getAabb(const hkTransform &localToWorld, float tolerance, hkAabb &out) const;
};

struct hkpListShapeChildInfo {
    const hkpShape *m_shape;            // 0x00
    unsigned int m_collisionFilterInfo; // 0x04
    char pad08[8];
};

struct ListShape_82D3DAC0 {
    char pad00[0x18];
    hkpListShapeChildInfo *m_childInfo; // 0x18
    int m_numChildren;                  // 0x1c
    char pad20[0x10];
    hkVector4 m_aabbHalfExtents; // 0x30
    hkVector4 m_aabbCenter;      // 0x40
};

extern "C" const hkTransform lbl_8323B1D0; // hkTransform::getIdentity()
extern "C" const hkVector4 lbl_82132D70;   // hkQuadReal 0.5

extern "C" void fn_82D3DAC0(ListShape_82D3DAC0 *self, hkAabb &aabbOut)
{
    self->m_childInfo[0].m_shape->getAabb(lbl_8323B1D0, 0.0f, aabbOut);
    for (int i = 1; i < self->m_numChildren; i++) {
        hkAabb childAabb;
        const hkpShape *shape = self->m_childInfo[i].m_shape;
        shape->getAabb(lbl_8323B1D0, 0.0f, childAabb);
        aabbOut.m_min.setMin4(aabbOut.m_min, childAabb.m_min);
        aabbOut.m_max.setMax4(aabbOut.m_max, childAabb.m_max);
    }
    hkVector4 sum;
    sum.setAdd4(aabbOut.m_min, aabbOut.m_max);
    self->m_aabbCenter.setMul4(lbl_82132D70, sum);
    hkVector4 extent;
    extent.setSub4(aabbOut.m_max, aabbOut.m_min);
    self->m_aabbHalfExtents.setMul4(lbl_82132D70, extent);
}
