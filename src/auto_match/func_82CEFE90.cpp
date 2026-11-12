// Havok sphere query on a node: reports the node itself to the collector (slot 3) when the point
// lies within the radius of its centre (+0x40), with the distance, then transforms the point into the node's local
// space (fn_82CE5088 with the transform at +0x10) and passes the query on to every child (slot 6).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmsum3fp(__vector4, __vector4);
__vector4 __vrsqrtefp(__vector4);
__vector4 __vnmsubfp(__vector4, __vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vcmpeqfp(__vector4, __vector4);
__vector4 __vsel(__vector4, __vector4, __vector4);
__vector4 __vspltisw(int);
void __stvewx(__vector4, void *, int);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
}

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vsubfp(a.m_quad, b.m_quad); }
    __forceinline float length3() const
    {
        const hkQuadReal zero = __vspltisw(0);
        const hkQuadReal len2 = __vmsum3fp(m_quad, m_quad);
        hkQuadReal e = __vrsqrtefp(len2);
        const hkQuadReal halfLen2 = __vmulfp(len2, lbl_82132D70);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vsel(e, zero, __vcmpeqfp(zero, len2));
        float r;
        __stvewx(__vmulfp(len2, e), &r, 0);
        return r;
    }
    hkQuadReal m_quad;
};

struct Transform_82CEFE90 {
    hkVector4 m_col[3];
};

class Node_82CEFE90;

class Collector_82CEFE90 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void addNode(Node_82CEFE90 *node, float distance);
};

class Child_82CEFE90 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void querySphere(const hkVector4 &center, float radius, Collector_82CEFE90 *collector);
};

class Node_82CEFE90 {
public:
    char pad0[0x10];
    Transform_82CEFE90 m_transform;     // 0x10
    hkVector4 m_center;                 // 0x40
    Child_82CEFE90 **m_children;        // 0x50
    int m_numChildren;                  // 0x54
};

extern "C" void fn_82CE5088(hkVector4 *out, const Transform_82CEFE90 *t, const hkVector4 *p);

extern "C" void fn_82CEFE90(Node_82CEFE90 *self, const hkVector4 &center, float radius, Collector_82CEFE90 *collector)
{
    hkVector4 d;
    d.setSub4(center, self->m_center);
    float distance = d.length3();
    if (distance <= radius) {
        collector->addNode(self, distance);
    }
    if (self->m_numChildren > 0) {
        hkVector4 local;
        fn_82CE5088(&local, &self->m_transform, &center);
        for (int i = 0; i < self->m_numChildren; i++) {
            self->m_children[i]->querySphere(local, radius, collector);
        }
    }
}
