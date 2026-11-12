// hkQuaternion::setSlerp(const hkQuaternion &q0, const hkQuaternion &q1, hkReal t)
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;

extern "C" {
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
void __stvewx(__vector4 v, void *base, int offset);
double sqrt(double);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
float fn_82CE55B8(float x);             // hkMath::acos
double fn_82F64318(double x);           // sin
}

class hkSimdReal {
public:
    __forceinline hkSimdReal(const float &x) { q = __vspltw(__lvlx(&x, 0), 0); }
    hkQuadReal q;
};

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline float dot4(const hkVector4 &a) const
    {
        float r;
        __stvewx(__vmsum4fp(m_quad, a.m_quad), &r, 0);
        return r;
    }
    __forceinline void setMul4(const hkSimdReal &s, const hkVector4 &a) { m_quad = __vmulfp(a.m_quad, s.q); }
    __forceinline void addMul4(const hkSimdReal &s, const hkVector4 &a) { m_quad = __vmaddfp(a.m_quad, s.q, m_quad); }
    __forceinline void normalize4()
    {
        const hkQuadReal zero = __vspltisw(0);
        const hkQuadReal len2 = __vmsum4fp(m_quad, m_quad);
        hkQuadReal e = __vrsqrtefp(len2);
        const hkQuadReal halfLen2 = __vmulfp(len2, lbl_82132D70);
        const hkQuadReal mask = __vcmpeqfp(zero, len2);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vsel(e, zero, mask);
        m_quad = __vmulfp(m_quad, __vspltw(e, 0));
    }
    hkQuadReal m_quad;
};

class hkQuaternion {
public:
    hkVector4 m_vec;
};

extern "C" void fn_82CE5B10(hkQuaternion *self, const hkQuaternion &q0, const hkQuaternion &q1, float t)
{
    float cosTheta = q0.m_vec.dot4(q1.m_vec);
    float signOfT1 = 1.0f;
    if (cosTheta < 0.0f) {
        cosTheta = -cosTheta;
        signOfT1 = -1.0f;
    }

    hkVector4 slerp;
    if (cosTheta < 0.999f) {
        float theta = fn_82CE55B8(cosTheta);
        float iSinTheta = 1.0f / (float)sqrt(1.0f - cosTheta * cosTheta);
        float tTheta = t * theta;
        float t0 = (float)fn_82F64318(theta - tTheta) * iSinTheta;
        float t1 = (float)fn_82F64318(tTheta) * iSinTheta * signOfT1;
        slerp.setMul4(t0, q0.m_vec);
        slerp.addMul4(t1, q1.m_vec);
    } else {
        float t0 = 1.0f - t;
        float t1 = t * signOfT1;
        slerp.setMul4(t0, q0.m_vec);
        slerp.addMul4(t1, q1.m_vec);
    }
    slerp.normalize4();
    self->m_vec = slerp;
}
