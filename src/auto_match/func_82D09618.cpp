// Havok: Welzl's minimum bounding sphere, recursive (static, hidden-pointer hkSphere return).
// numBoundary support points are stored just below `points` (points[-1] ... points[-numBoundary]);
// a point outside the current sphere is rotated to the front and becomes a support point.
// fn_82D09330 / fn_82D093B8 / fn_82D094B8 build the sphere through 2 / 3 / 4 support points.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
typedef float hkReal;
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
__vector4 __vxor(__vector4, __vector4);
void __stvewx(__vector4, void *, int);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
}

class hkVector4 {
public:
    __forceinline hkVector4() {}
    __forceinline hkVector4(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline float &operator()(int i) { return m_quad.vector4_f32[i]; }
    __forceinline const float &operator()(int i) const { return m_quad.vector4_f32[i]; }
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vsubfp(a.m_quad, b.m_quad); }
    __forceinline void setZero4() { m_quad = __vxor(m_quad, m_quad); }
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

class hkSphere {
public:
    __forceinline hkSphere() {}
    __forceinline hkSphere(const hkVector4 &pos, hkReal radius)
    {
        m_pos = pos;
        m_pos(3) = radius;
    }
    __forceinline hkSphere(const hkSphere &s) { m_pos = s.m_pos; }
    __forceinline void operator=(const hkSphere &s) { m_pos = s.m_pos; }
    __forceinline const hkVector4 &getPosition() const { return m_pos; }
    __forceinline hkReal getRadius() const { return m_pos(3); }
    hkVector4 m_pos;
};

extern "C" hkSphere fn_82D09330(const hkVector4 &a, const hkVector4 &b, hkReal eps);
extern "C" hkSphere fn_82D093B8(const hkVector4 &a, const hkVector4 &b, const hkVector4 &c, hkReal eps);
extern "C" hkSphere fn_82D094B8(const hkVector4 &a, const hkVector4 &b, const hkVector4 &c, const hkVector4 &d, hkReal eps);

extern "C" hkSphere fn_82D09618(hkVector4 *points, int numPoints, unsigned int numBoundary, hkReal eps)
{
    hkSphere sphere;
    switch (numBoundary) {
    case 0: {
        hkVector4 zero;
        zero.setZero4();
        sphere = hkSphere(zero, -1.0f);
        break;
    }
    case 1:
        sphere = hkSphere(points[-1], eps);
        break;
    case 2:
        sphere = fn_82D09330(points[-1], points[-2], eps);
        break;
    case 3:
        sphere = fn_82D093B8(points[-1], points[-2], points[-3], eps);
        break;
    default:
        sphere = fn_82D094B8(points[-1], points[-2], points[-3], points[-4], eps);
        return sphere;
    }

    for (int i = 0; i < numPoints; i++) {
        hkVector4 d;
        d.setSub4(points[i], sphere.getPosition());
        if (d.length3() > sphere.getRadius()) {
            for (int j = i; j > 0; j--) {
                hkVector4 t = points[j];
                points[j] = points[j - 1];
                points[j - 1] = t;
            }
            sphere = fn_82D09618(points + 1, i, numBoundary + 1, eps);
        }
    }
    return sphere;
}
