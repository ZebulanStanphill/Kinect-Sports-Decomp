// hkSweptTransformUtil::warpTo(const hkTransform &transform, hkMotionState &ms)
// (Havok 2010, Common/Base/Math/SweptTransform/hkSweptTransformUtil.cpp).
// fn_82CE5990 is hkQuaternion::set(const hkRotation &).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vxor(__vector4, __vector4);
__vector4 __vaddfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vspltw(__vector4, unsigned int);
}

class hkRotation;
class hkTransform;
class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline float &operator()(int i) { return m_quad.vector4_f32[i]; }
    __forceinline void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    __forceinline void setAdd4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vaddfp(a.m_quad, b.m_quad); }
    __forceinline void _setRotatedDir(const hkRotation &r, const hkVector4 &b);
    __forceinline void _setTransformedPos(const hkTransform &t, const hkVector4 &b);
    hkQuadReal m_quad;
};

class hkQuaternion {
public:
    __forceinline void operator=(const hkQuaternion &q) { m_vec = q.m_vec; }
    __forceinline void set(const hkRotation &r);
    hkVector4 m_vec;
};

extern "C" void fn_82CE5990(hkQuaternion *self, const hkRotation &r);

__forceinline void hkQuaternion::set(const hkRotation &r) { fn_82CE5990(this, r); }

class hkRotation {
public:
    __forceinline const hkVector4 &getColumn(int i) const { return m_col[i]; }
    hkVector4 m_col[3];
};

__forceinline void hkVector4::_setRotatedDir(const hkRotation &r, const hkVector4 &b)
{
    const hkQuadReal b0 = __vspltw(b.m_quad, 0);
    const hkQuadReal b1 = __vspltw(b.m_quad, 1);
    const hkQuadReal b2 = __vspltw(b.m_quad, 2);
    const hkQuadReal r0 = __vmulfp(r.getColumn(0).m_quad, b0);
    const hkQuadReal r1 = __vmaddfp(r.getColumn(1).m_quad, b1, r0);
    m_quad = __vmaddfp(r.getColumn(2).m_quad, b2, r1);
}

class hkTransform {
public:
    __forceinline const hkRotation &getRotation() const { return m_rotation; }
    __forceinline const hkVector4 &getTranslation() const { return m_translation; }
    hkRotation m_rotation;
    hkVector4 m_translation;
};

__forceinline void hkVector4::_setTransformedPos(const hkTransform &t, const hkVector4 &b)
{
    const hkQuadReal b0 = __vspltw(b.m_quad, 0);
    const hkQuadReal b1 = __vspltw(b.m_quad, 1);
    const hkQuadReal b2 = __vspltw(b.m_quad, 2);
    const hkQuadReal r0 = __vmulfp(t.getRotation().getColumn(0).m_quad, b0);
    const hkQuadReal r1 = __vmaddfp(t.getRotation().getColumn(1).m_quad, b1, r0);
    const hkQuadReal r2 = __vmaddfp(t.getRotation().getColumn(2).m_quad, b2, r1);
    m_quad = __vaddfp(t.getTranslation().m_quad, r2);
}

class hkSweptTransform {
public:
    hkVector4 m_centerOfMass0;      // 0x00 (w = base time)
    hkVector4 m_centerOfMass1;      // 0x10
    hkQuaternion m_rotation0;       // 0x20
    hkQuaternion m_rotation1;       // 0x30
    hkVector4 m_centerOfMassLocal;  // 0x40
};

class hkMotionState {
public:
    __forceinline hkTransform &getTransform() { return m_transform; }
    __forceinline hkSweptTransform &getSweptTransform() { return m_sweptTransform; }
    hkTransform m_transform;            // 0x00
    hkSweptTransform m_sweptTransform;  // 0x40
    hkVector4 m_deltaAngle;             // 0x90
};

extern "C" void fn_83081658(const hkTransform &transform, hkMotionState &ms)
{
    hkSweptTransform &sweptTransform = ms.getSweptTransform();
    ms.m_deltaAngle.setZero4();

    hkQuaternion rotation;
    rotation.set(transform.getRotation());
    ms.getTransform() = transform;

    sweptTransform.m_rotation0 = rotation;
    sweptTransform.m_rotation1 = rotation;

    hkVector4 centerOfMass;
    centerOfMass._setTransformedPos(transform, sweptTransform.m_centerOfMassLocal);

    float baseTime = sweptTransform.m_centerOfMass0(3);

    sweptTransform.m_centerOfMass0 = centerOfMass;
    sweptTransform.m_centerOfMass1 = centerOfMass;

    sweptTransform.m_centerOfMass0(3) = baseTime;
    sweptTransform.m_centerOfMass1(3) = 0.0f;
}
