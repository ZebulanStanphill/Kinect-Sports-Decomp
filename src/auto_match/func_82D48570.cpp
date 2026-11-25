// hkpConvexListShape::setUseCachedAabb(bool useCachedAabb): stores the flag and, when it is set,
// caches the center and half extents of the union of the children's AABBs (identity transform,
// zero tolerance). Classes as in func_82D3DAC0.cpp.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __vspltw(__vector4 a, unsigned int element);
__vector4 __vminfp(__vector4 a, __vector4 b);
__vector4 __vmaxfp(__vector4 a, __vector4 b);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
}

class hkVector4
{
  public:
    __forceinline void setAll(float v)
    {
        q.vector4_f32[0] = v;
        q = __vspltw(q, 0);
    }

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

class hkpConvexShape
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

struct ConvexListShape_82D48570 {
    char pad00[0x20];
    hkVector4 m_aabbHalfExtents;    // 0x20
    hkVector4 m_aabbCenter;         // 0x30
    bool m_useCachedAabb;           // 0x40
    hkpConvexShape **m_childShapes; // 0x44
    int m_numChildShapes;           // 0x48
};

extern "C" const hkTransform lbl_8323B1D0; // hkTransform::getIdentity()
extern "C" const hkVector4 lbl_82132D70;   // hkQuadReal 0.5

extern "C" void fn_82D48570(ConvexListShape_82D48570 *self, bool useCachedAabb)
{
    self->m_useCachedAabb = useCachedAabb;
    if (useCachedAabb) {
        hkAabb aabb;
        aabb.m_min.setAll(3.40282e+38f);
        aabb.m_max.setAll(-3.40282e+38f);
        for (int i = 0; i < self->m_numChildShapes; i++) {
            hkAabb childAabb;
            self->m_childShapes[i]->getAabb(lbl_8323B1D0, 0.0f, childAabb);
            aabb.m_min.setMin4(aabb.m_min, childAabb.m_min);
            aabb.m_max.setMax4(aabb.m_max, childAabb.m_max);
        }
        hkVector4 sum;
        sum.setAdd4(aabb.m_min, aabb.m_max);
        self->m_aabbCenter.setMul4(lbl_82132D70, sum);
        hkVector4 extent;
        extent.setSub4(aabb.m_max, aabb.m_min);
        self->m_aabbHalfExtents.setMul4(lbl_82132D70, extent);
    }
}
