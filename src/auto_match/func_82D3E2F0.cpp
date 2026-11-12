// Havok hkpListShape-style getAabb(localToWorld, tolerance, out): recomputes the cached extents
// through fn_82D3DAC0 when they are still at the lbl_8323B1A0 sentinel, then merges the AABBs of
// all child shapes (array at +0x18, 16-byte entries, count at +0x1c) starting from
// +-lbl_82138458 (HK_REAL_MAX / 2).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vminfp(__vector4 a, __vector4 b);
__vector4 __vmaxfp(__vector4 a, __vector4 b);
__vector4 __vcmpgefp(__vector4 a, __vector4 b);
__vector4 __vcmpequwR(__vector4 a, __vector4 b, unsigned int *cr);

extern const __vector4 lbl_8323B1A0;   // cached-extents sentinel
extern const __vector4 lbl_8209AB20;   // sign bits
extern const float lbl_82138458;       // HK_REAL_MAX / 2
}

class hkVector4Comparison {
public:
    __forceinline int allAreSet() const
    {
        unsigned int cr;
        __vcmpequwR(mask, __vspltisw(-1), &cr);
        return cr & 0x80;
    }
    __vector4 mask;
};

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { q = v.q; }
    __forceinline void setAll(float x) { q.vector4_f32[0] = x; q = __vspltw(q, 0); }
    __forceinline void setNeg4(const hkVector4 &a) { q = __vxor(a.q, lbl_8209AB20); }
    __forceinline void setMin4(const hkVector4 &a, const hkVector4 &b) { q = __vminfp(a.q, b.q); }
    __forceinline void setMax4(const hkVector4 &a, const hkVector4 &b) { q = __vmaxfp(a.q, b.q); }
    __forceinline hkVector4Comparison compareLessThanEqual4(const hkVector4 &a) const
    {
        hkVector4Comparison c;
        c.mask = __vcmpgefp(a.q, q);
        return c;
    }
    __vector4 q;
};

class hkTransform;

class hkAabb {
public:
    hkVector4 m_min;
    hkVector4 m_max;
};

class hkpShape {
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

struct ChildInfo_82D3E2F0 {
    const hkpShape *m_shape;
    char pad04[0xc];
};

struct ListShape_82D3E2F0 {
    char pad00[0x18];
    ChildInfo_82D3E2F0 *m_childInfo;   // 0x18
    int m_numChildren;                 // 0x1c
    char pad20[0x10];
    hkVector4 m_aabbHalfExtents;       // 0x30
};

extern "C" void fn_82D3DAC0(ListShape_82D3E2F0 *self, hkAabb &aabb);

extern "C" void fn_82D3E2F0(ListShape_82D3E2F0 *self, const hkTransform &localToWorld, float tolerance, hkAabb &out)
{
    hkVector4 sentinel;
    sentinel.q = lbl_8323B1A0;
    if (self->m_aabbHalfExtents.compareLessThanEqual4(sentinel).allAreSet()) {
        hkAabb aabb;
        fn_82D3DAC0(self, aabb);
    }
    out.m_min.setAll(lbl_82138458);
    out.m_max.setNeg4(out.m_min);
    for (int i = 0; i < self->m_numChildren; i++) {
        hkAabb childAabb;
        const hkpShape *child = self->m_childInfo[i].m_shape;
        child->getAabb(localToWorld, tolerance, childAabb);
        out.m_min.setMin4(out.m_min, childAabb.m_min);
        out.m_max.setMax4(out.m_max, childAabb.m_max);
    }
}
