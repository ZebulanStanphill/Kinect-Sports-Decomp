// Havok shape getAabb(localToWorld, tolerance, out) over a list of child shapes: either the
// cached box (half extents +0x20, center +0x30, radius +0x10) through hkAabbUtil-style
// fn_82D401F8, or the union of all children's AABBs (array at +0x44, count at +0x48).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __vminfp(__vector4 a, __vector4 b);
__vector4 __vmaxfp(__vector4 a, __vector4 b);
}

class hkVector4 {
public:
    __forceinline void setMin4(const hkVector4 &a, const hkVector4 &b) { q = __vminfp(a.q, b.q); }
    __forceinline void setMax4(const hkVector4 &a, const hkVector4 &b) { q = __vmaxfp(a.q, b.q); }
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

struct Shape_82D48790 {
    char pad00[0x10];
    float m_radius;                    // 0x10
    char pad14[0xc];
    hkVector4 m_halfExtents;           // 0x20
    hkVector4 m_center;                // 0x30
    unsigned char m_useBox;            // 0x40
    char pad41[3];
    const hkpShape **m_children;       // 0x44
    int m_numChildren;                 // 0x48
};

extern "C" void fn_82D401F8(const hkTransform &localToWorld, const hkVector4 &halfExtents,
                            const hkVector4 &center, float tolerance, hkAabb &out);

extern "C" void fn_82D48790(Shape_82D48790 *self, const hkTransform &localToWorld, float tolerance, hkAabb &out)
{
    if (self->m_useBox) {
        fn_82D401F8(localToWorld, self->m_halfExtents, self->m_center, self->m_radius + tolerance, out);
        return;
    }
    self->m_children[0]->getAabb(localToWorld, tolerance, out);
    for (int i = 1; i < self->m_numChildren; i++) {
        hkAabb childAabb;
        self->m_children[i]->getAabb(localToWorld, tolerance, childAabb);
        out.m_min.setMin4(out.m_min, childAabb.m_min);
        out.m_max.setMax4(out.m_max, childAabb.m_max);
    }
}
