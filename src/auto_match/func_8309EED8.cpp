// Havok: relative point velocity between two bodies at two world points: the point difference plus
// (b / a) times the cross products of each lever arm with the body's angular velocity rotated into
// its local frame.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __lvlx(const void *, int);
__vector4 __vspltw(__vector4, unsigned int);
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vnmsubfp(__vector4, __vector4, __vector4);
__vector4 __vmsum3fp(__vector4, __vector4);
__vector4 __vmrghw(__vector4, __vector4);
__vector4 __vpermwi(__vector4, int);
extern const hkQuadReal lbl_82132D00;   // Havok's global zero vector
}

class hkSimdReal {
public:
    __forceinline hkSimdReal(const float &x) { m_real = __vspltw(__lvlx(&x, 0), 0); }
    hkQuadReal m_real;
};

class hkRotation;

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vsubfp(a.m_quad, b.m_quad); }
    __forceinline void addMul4(hkSimdReal r, const hkVector4 &a) { m_quad = __vmaddfp(a.m_quad, r.m_real, m_quad); }
    __forceinline void subMul4(hkSimdReal r, const hkVector4 &a) { m_quad = __vnmsubfp(a.m_quad, r.m_real, m_quad); }
    __forceinline void setCross(const hkVector4 &v1, const hkVector4 &v2)
    {
        const hkQuadReal cross0 = __vmulfp(__vpermwi(v1.m_quad, 99), __vpermwi(v2.m_quad, 135));
        const hkQuadReal cross1 = __vmulfp(__vpermwi(v1.m_quad, 135), __vpermwi(v2.m_quad, 99));
        m_quad = __vsubfp(cross0, cross1);
    }
    __forceinline void setRotatedInverseDir(const hkRotation &r, const hkVector4 &b);
    hkQuadReal m_quad;
};

class hkRotation {
public:
    __forceinline const hkVector4 &getColumn(int i) const { return m_col[i]; }
    hkVector4 m_col[3];
};

__forceinline void hkVector4::setRotatedInverseDir(const hkRotation &r, const hkVector4 &b)
{
    const hkQuadReal d0 = __vmsum3fp(r.getColumn(0).m_quad, b.m_quad);
    const hkQuadReal d1 = __vmsum3fp(r.getColumn(1).m_quad, b.m_quad);
    const hkQuadReal d2 = __vmsum3fp(r.getColumn(2).m_quad, b.m_quad);
    const hkQuadReal xz = __vmrghw(d0, d2);
    const hkQuadReal y0 = __vmrghw(d1, lbl_82132D00);
    m_quad = __vmrghw(xz, y0);
}

struct Body_8309EED8 {
    char pad0[0x20];
    hkVector4 m_angularVelocity;   // 0x20
    char pad30[0x10];
    hkVector4 m_centerOfMass;      // 0x40
    hkRotation m_rotation;         // 0x50
};

extern "C" void fn_8309EED8(const Body_8309EED8 *bodyA, const Body_8309EED8 *bodyB, const hkVector4 &pointA,
                            const hkVector4 &pointB, float a, float b, hkVector4 &out)
{
    out.setSub4(pointB, pointA);
    hkSimdReal scale = b / a;
    hkVector4 angA;
    angA.setRotatedInverseDir(bodyA->m_rotation, bodyA->m_angularVelocity);
    hkVector4 angB;
    angB.setRotatedInverseDir(bodyB->m_rotation, bodyB->m_angularVelocity);
    hkVector4 armA;
    armA.setSub4(pointA, bodyA->m_centerOfMass);
    hkVector4 armB;
    armB.setSub4(pointB, bodyB->m_centerOfMass);
    hkVector4 velA;
    velA.setCross(armA, angA);
    hkVector4 velB;
    velB.setCross(armB, angB);
    out.addMul4(scale, velB);
    out.subMul4(scale, velA);
}
