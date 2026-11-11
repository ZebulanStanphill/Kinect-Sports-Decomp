// hkSweptTransformUtil::warpTo(const hkVector4 &position, const hkQuaternion &rotation,
// hkMotionState &ms) (Havok 2010, Common/Base/Math/SweptTransform/hkSweptTransformUtil.cpp).
// fn_82CE6010 is hkRotation::set(const hkQuaternion &).
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
class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline float &operator()(int i) { return m_quad.vector4_f32[i]; }
    __forceinline void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    __forceinline void setAdd4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vaddfp(a.m_quad, b.m_quad); }
    __forceinline void _setRotatedDir(const hkRotation &r, const hkVector4 &b);
    hkQuadReal m_quad;
};

class hkQuaternion {
public:
    __forceinline void operator=(const hkQuaternion &q) { m_vec = q.m_vec; }
    hkVector4 m_vec;
};

extern "C" void fn_82CE6010(hkRotation *self, const hkQuaternion *q);

class hkRotation {
public:
    __forceinline const hkVector4 &getColumn(int i) const { return m_col[i]; }
    __forceinline void set(const hkQuaternion &q) { fn_82CE6010(this, &q); }
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
    __forceinline hkRotation &getRotation() { return m_rotation; }
    __forceinline void setRotation(const hkQuaternion &q) { m_rotation.set(q); }
    __forceinline void setTranslation(const hkVector4 &t) { m_translation = t; }
    hkRotation m_rotation;
    hkVector4 m_translation;
};

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

extern "C" void fn_830815A8(const hkVector4 &position, const hkQuaternion &rotation, hkMotionState &ms)
{
    hkSweptTransform &sweptTransform = ms.getSweptTransform();
    ms.m_deltaAngle.setZero4();

    sweptTransform.m_rotation0 = rotation;
    sweptTransform.m_rotation1 = rotation;

    ms.getTransform().setRotation(rotation);
    ms.getTransform().setTranslation(position);

    hkVector4 centerShift;
    centerShift._setRotatedDir(ms.getTransform().getRotation(), sweptTransform.m_centerOfMassLocal);

    float baseTime = sweptTransform.m_centerOfMass0(3);

    sweptTransform.m_centerOfMass0.setAdd4(position, centerShift);
    sweptTransform.m_centerOfMass1 = sweptTransform.m_centerOfMass0;

    sweptTransform.m_centerOfMass0(3) = baseTime;
    sweptTransform.m_centerOfMass1(3) = 0.0f;
}
