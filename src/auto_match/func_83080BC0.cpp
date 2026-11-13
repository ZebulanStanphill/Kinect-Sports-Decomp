// hkSweptTransformUtil::calcTransAtT(const hkSweptTransform &, hkTime t, hkTransform &) with _lerp2 inlined
// (Havok 2010, Common/Base/Math/SweptTransform/hkSweptTransformUtil). fn_82CE6010 is hkRotation::set(const hkQuaternion &).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __lvlx(const void *, int);
__vector4 __vaddfp(__vector4, __vector4);
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vnmsubfp(__vector4, __vector4, __vector4);
__vector4 __vmsum4fp(__vector4, __vector4);
__vector4 __vrsqrtefp(__vector4);
__vector4 __vcmpeqfp(__vector4, __vector4);
__vector4 __vsel(__vector4, __vector4, __vector4);
__vector4 __vspltisw(int);
__vector4 __vspltw(__vector4, unsigned int);
void __stvewx(__vector4, void *, int);
}

extern "C" const hkQuadReal lbl_82132D10;   // (1, 1, 1, 1)
extern "C" const hkQuadReal lbl_82132D70;   // (0.5, 0.5, 0.5, 0.5)

class hkSimdReal {
public:
    __forceinline hkSimdReal(const float &x) { m_real = __vspltw(__lvlx(&x, 0), 0); }
    hkQuadReal m_real;
};

class hkRotation;
class hkVector4 {
public:
    __forceinline hkVector4() {}
    __forceinline hkVector4(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline void setAdd4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vaddfp(a.m_quad, b.m_quad); }
    __forceinline void sub4(const hkVector4 &a) { m_quad = __vsubfp(m_quad, a.m_quad); }
    __forceinline void mul4(const hkSimdReal &s) { m_quad = __vmulfp(m_quad, s.m_real); }
    __forceinline float lengthSquared4() const
    {
        float r;
        __stvewx(__vmsum4fp(m_quad, m_quad), &r, 0);
        return r;
    }
    __forceinline void setInterpolate4(const hkVector4 &a, const hkVector4 &b, const hkSimdReal &t)
    {
        hkQuadReal bt = __vspltw(t.m_real, 0);
        hkQuadReal at = __vsubfp(lbl_82132D10, bt);
        m_quad = __vmaddfp(bt, b.m_quad, __vmulfp(at, a.m_quad));
    }
    __forceinline void normalize4()
    {
        const hkQuadReal zero = __vspltisw(0);
        const hkQuadReal len2 = __vmsum4fp(m_quad, m_quad);
        hkQuadReal e = __vrsqrtefp(len2);
        const hkQuadReal halfLen2 = __vmulfp(len2, lbl_82132D70);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vsel(e, zero, __vcmpeqfp(zero, len2));
        m_quad = __vmulfp(m_quad, __vspltw(e, 0));
    }
    __forceinline void _setRotatedDir(const hkRotation &r, const hkVector4 &b);
    __forceinline float &operator()(int i) { return m_quad.vector4_f32[i]; }
    __forceinline const float &operator()(int i) const { return m_quad.vector4_f32[i]; }
    hkQuadReal m_quad;
};

class hkQuaternion {
public:
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
    __forceinline hkVector4 &getTranslation() { return m_translation; }
    __forceinline void setRotation(const hkQuaternion &q) { m_rotation.set(q); }
    hkRotation m_rotation;
    hkVector4 m_translation;
};

class hkSweptTransform {
public:
    __forceinline float getBaseTime() const { return m_centerOfMass0(3); }
    __forceinline float getInvDeltaTime() const { return m_centerOfMass1(3); }
    hkVector4 m_centerOfMass0;      // 0x00 (w = base time)
    hkVector4 m_centerOfMass1;      // 0x10 (w = inverse delta time)
    hkQuaternion m_rotation0;       // 0x20
    hkQuaternion m_rotation1;       // 0x30
    hkVector4 m_centerOfMassLocal;  // 0x40
};

static __forceinline void _lerp2(const hkSweptTransform &sweptTrans, float t, hkQuaternion &quatOut)
{
    hkVector4 rot0 = sweptTrans.m_rotation0.m_vec;
    hkVector4 rot1 = sweptTrans.m_rotation1.m_vec;
    hkVector4 qHalf;
    qHalf.setAdd4(rot0, rot1);
    {
        float len2 = qHalf.lengthSquared4();
        float r = 0.75f - 0.125f * len2;
        r = r * (1.5f - len2 * r * r * 0.5f);
        qHalf.mul4(r);
    }
    if (t < 0.5f) {
        quatOut.m_vec.setInterpolate4(rot0, qHalf, t * 2.0f);
    } else {
        quatOut.m_vec.setInterpolate4(qHalf, rot1, t * 2.0f - 1.0f);
    }
    quatOut.m_vec.normalize4();
}

static __forceinline void _lerp2(const hkSweptTransform &sweptTrans, float t, hkTransform &transformOut)
{
    hkQuaternion qt;
    _lerp2(sweptTrans, t, qt);
    transformOut.setRotation(qt);
    transformOut.getTranslation().setInterpolate4(sweptTrans.m_centerOfMass0, sweptTrans.m_centerOfMass1, t);
    hkVector4 centerShift;
    centerShift._setRotatedDir(transformOut.getRotation(), sweptTrans.m_centerOfMassLocal);
    transformOut.getTranslation().sub4(centerShift);
}

extern "C" void fn_83080BC0(const hkSweptTransform &sweptTrans, float t, hkTransform &transformOut)
{
    float ri = (t - sweptTrans.getBaseTime()) * sweptTrans.getInvDeltaTime();
    _lerp2(sweptTrans, ri, transformOut);
}
