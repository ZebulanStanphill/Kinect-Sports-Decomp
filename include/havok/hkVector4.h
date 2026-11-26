#ifndef HAVOK_HKVECTOR4_H
#define HAVOK_HKVECTOR4_H

#include "havok/hkSimdReal.h"

class hkMatrix3;
class hkRotation;
class hkTransform;

// The result of a lane-wise comparison: all ones in each lane where it held.
class hkVector4Comparison {
public:
    enum Mask {
        MASK_NONE = 0,
        MASK_W = 1,
        MASK_Z = 2,
        MASK_ZW = 3,
        MASK_Y = 4,
        MASK_YW = 5,
        MASK_YZ = 6,
        MASK_YZW = 7,
        MASK_X = 8,
        MASK_XW = 9,
        MASK_XZ = 10,
        MASK_XZW = 11,
        MASK_XY = 12,
        MASK_XYW = 13,
        MASK_XYZ = 14,
        MASK_XYZW = 15
    };

    // Whether the comparison held in every lane of m.
    HK_FORCE_INLINE hkBool32 allAreSet(Mask m) const
    {
        unsigned int cr;
        __vcmpequwR(__vor(m_mask, lbl_8323B330[m]), __vspltisw(-1), &cr);
        return cr & 0x80;
    }

    // Whether it held in all four lanes: the mask is compared with all ones directly, with no
    // vor against the mask table (82D3E2F0).
    HK_FORCE_INLINE hkBool32 allAreSet() const
    {
        unsigned int cr;
        __vcmpequwR(m_mask, __vspltisw(-1), &cr);
        return cr & 0x80;
    }

    hkQuadReal m_mask;
};

// One 16-byte VMX vector, with lanes x, y, z and w. The members whose names end in 3 use
// x, y and z; those ending in 4 use all four lanes.
//
// Assignment goes through a vector register (lvx/stvx). Whether the class has a copy
// constructor is an open question, because the game's code points both ways:
//  - a struct that holds vectors is copied as blocks of doublewords, which only a class
//    without one produces: hkpLinearCastCollisionInput in the flipped linear casts of
//    hkpSymmetricAgent (some forty units);
//  - three functions copy a vector member through a vector register where the source can only
//    be a copy construction: the constructors of hkpMotorAction (func_82DF1E50) and
//    hkpMouseSpringAction (func_82DF2A08), and the hkpAgent3ProcessInput copy in func_82D5B3B0.
// The class therefore has none unless a unit defines HK_VECTOR4_COPY_CONSTRUCTOR before
// including this header, as those three do.
class hkVector4 {
public:
    HK_FORCE_INLINE hkVector4() {}
#ifdef HK_VECTOR4_COPY_CONSTRUCTOR
    HK_FORCE_INLINE hkVector4(const hkVector4 &v) { m_quad = v.m_quad; }
#endif
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }

    // Havok's constant (0.5, 0.5, 0.5, 0.5), lbl_82132D70, read as a vector. The game computes the
    // centre and half extents of a box as vmulfp(half, v), reading the constant from memory for each
    // product (82D42A28, 82D43170, 82D48570, 82D3DAC0); setMul4 with an hkSimdReal has the operands
    // the other way round. The accessor's name is this project's.
    static HK_FORCE_INLINE const hkVector4 &HK_CALL getHalf()
    {
        return reinterpret_cast<const hkVector4 &>(lbl_82132D70);
    }

    HK_FORCE_INLINE void set(hkReal x, hkReal y, hkReal z, hkReal w = 0.0f)
    {
        hkQuadRealUnion u;
        u.r[0] = x;
        u.r[1] = y;
        u.r[2] = z;
        u.r[3] = w;
        m_quad = u.q;
    }
    HK_FORCE_INLINE void setAll(hkReal x)
    {
        m_quad.vector4_f32[0] = x;
        m_quad = __vspltw(m_quad, 0);
    }
    HK_FORCE_INLINE void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    HK_FORCE_INLINE void setZero() { m_quad = __vxor(m_quad, m_quad); }
    HK_FORCE_INLINE void setW(hkReal w) { m_quad.vector4_f32[3] = w; }
    // The x, y and z of a with this vector's w.
    HK_FORCE_INLINE void setXYZ(const hkVector4 &a) { m_quad = __vrlimi(a.m_quad, m_quad, 1, 0); }
    HK_FORCE_INLINE void setXYZ_W(const hkVector4 &xyz, const hkVector4 &w) { m_quad = __vrlimi(xyz.m_quad, w.m_quad, 1, 0); }
    // Stores an integer of up to 24 bits in w, as the mantissa of a float.
    HK_FORCE_INLINE void setInt24W(int value) { m_quad.vector4_u32[3] = (unsigned int)value | 0x3f000000; }

    HK_FORCE_INLINE hkReal &operator()(int i) { return m_quad.vector4_f32[i]; }
    HK_FORCE_INLINE const hkReal &operator()(int i) const { return m_quad.vector4_f32[i]; }
    HK_FORCE_INLINE hkSimdReal getSimdAt3() const
    {
        hkSimdReal r;
        r.m_real = __vspltw(m_quad, 3);
        return r;
    }

    HK_FORCE_INLINE void add4(const hkVector4 &a) { m_quad = __vaddfp(m_quad, a.m_quad); }
    HK_FORCE_INLINE void sub4(const hkVector4 &a) { m_quad = __vsubfp(m_quad, a.m_quad); }
    HK_FORCE_INLINE void mul4(const hkVector4 &a) { m_quad = __vmulfp(m_quad, a.m_quad); }
    HK_FORCE_INLINE void mul4(hkSimdRealParameter s) { m_quad = __vmulfp(m_quad, s.m_real); }
    HK_FORCE_INLINE void addMul4(hkSimdRealParameter r, const hkVector4 &a) { m_quad = __vmaddfp(a.m_quad, r.m_real, m_quad); }
    HK_FORCE_INLINE void subMul4(hkSimdRealParameter r, const hkVector4 &a) { m_quad = __vnmsubfp(a.m_quad, r.m_real, m_quad); }

    HK_FORCE_INLINE void setAdd4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vaddfp(a.m_quad, b.m_quad); }
    HK_FORCE_INLINE void setSub4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vsubfp(a.m_quad, b.m_quad); }
    HK_FORCE_INLINE void setMul4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vmulfp(a.m_quad, b.m_quad); }
    HK_FORCE_INLINE void setMul4(hkSimdRealParameter r, const hkVector4 &a) { m_quad = __vmulfp(a.m_quad, r.m_real); }
    HK_FORCE_INLINE void setAddMul4(const hkVector4 &a, const hkVector4 &b, hkSimdRealParameter r) { m_quad = __vmaddfp(b.m_quad, r.m_real, a.m_quad); }
    HK_FORCE_INLINE void setSubMul4(const hkVector4 &a, const hkVector4 &b, hkSimdRealParameter r) { m_quad = __vnmsubfp(b.m_quad, r.m_real, a.m_quad); }
    HK_FORCE_INLINE void setCross(const hkVector4 &v1, const hkVector4 &v2)
    {
        const hkQuadReal cross0 = __vmulfp(__vpermwi(v1.m_quad, 99), __vpermwi(v2.m_quad, 135));
        const hkQuadReal cross1 = __vmulfp(__vpermwi(v1.m_quad, 135), __vpermwi(v2.m_quad, 99));
        m_quad = __vsubfp(cross0, cross1);
    }
    // a where t is 0, b where t is 1.
    HK_FORCE_INLINE void setInterpolate4(const hkVector4 &a, const hkVector4 &b, hkSimdRealParameter t)
    {
        hkQuadReal bt = __vspltw(t.m_real, 0);
        hkQuadReal at = __vsubfp(lbl_82132D10, bt);
        m_quad = __vmaddfp(bt, b.m_quad, __vmulfp(at, a.m_quad));
    }
    HK_FORCE_INLINE void setNeg4(const hkVector4 &v) { m_quad = __vxor(v.m_quad, lbl_8209AB20); }
    HK_FORCE_INLINE void setAbs4(const hkVector4 &a) { m_quad = __vand(a.m_quad, lbl_821CA820); }
    HK_FORCE_INLINE void setMin4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vminfp(a.m_quad, b.m_quad); }
    HK_FORCE_INLINE void setMax4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vmaxfp(a.m_quad, b.m_quad); }
    // v with its sign flipped in the lanes where s is negative.
    HK_FORCE_INLINE void setFlipSign(const hkVector4 &v, hkSimdRealParameter s)
    {
        m_quad = __vxor(v.m_quad, __vand(__vspltw(s.m_real, 0), lbl_8209AB20));
    }

    HK_FORCE_INLINE hkSimdReal dot3(const hkVector4 &a) const
    {
        hkSimdReal r;
        r.m_real = __vmsum3fp(m_quad, a.m_quad);
        return r;
    }
    HK_FORCE_INLINE hkSimdReal dot4(const hkVector4 &a) const
    {
        hkSimdReal r;
        r.m_real = __vmsum4fp(m_quad, a.m_quad);
        return r;
    }
    // x*a.x + y*a.y + z*a.z + w
    HK_FORCE_INLINE hkReal dot4xyz1(const hkVector4 &a) const
    {
        hkReal r;
        __stvewx(__vaddfp(__vspltw(m_quad, 3), __vmsum3fp(m_quad, a.m_quad)), &r, 0);
        return r;
    }
    HK_FORCE_INLINE hkSimdReal lengthSquared3() const { return dot3(*this); }
    HK_FORCE_INLINE hkReal lengthSquared4() const
    {
        hkReal r;
        __stvewx(__vmsum4fp(m_quad, m_quad), &r, 0);
        return r;
    }
    // 1 / length, by two Newton-Raphson steps on the reciprocal square root estimate; zero for
    // the zero vector.
    HK_FORCE_INLINE hkSimdReal lengthInverse3() const
    {
        const hkQuadReal zero = __vspltisw(0);
        const hkQuadReal len2 = __vmsum3fp(m_quad, m_quad);
        hkQuadReal e = __vrsqrtefp(len2);
        const hkQuadReal halfLen2 = __vmulfp(len2, lbl_82132D70);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        hkSimdReal r;
        r.m_real = __vsel(e, zero, __vcmpeqfp(zero, len2));
        return r;
    }
    HK_FORCE_INLINE hkReal length3() const
    {
        const hkQuadReal zero = __vspltisw(0);
        const hkQuadReal len2 = __vmsum3fp(m_quad, m_quad);
        hkQuadReal e = __vrsqrtefp(len2);
        const hkQuadReal halfLen2 = __vmulfp(len2, lbl_82132D70);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vsel(e, zero, __vcmpeqfp(zero, len2));
        hkReal r;
        __stvewx(__vmulfp(len2, e), &r, 0);
        return r;
    }
    HK_FORCE_INLINE void normalize3()
    {
        const hkQuadReal zero = __vspltisw(0);
        const hkQuadReal len2 = __vmsum3fp(m_quad, m_quad);
        hkQuadReal e = __vrsqrtefp(len2);
        const hkQuadReal halfLen2 = __vmulfp(len2, lbl_82132D70);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vsel(e, zero, __vcmpeqfp(zero, len2));
        m_quad = __vmulfp(m_quad, __vspltw(e, 0));
    }
    HK_FORCE_INLINE void normalize4()
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

    // Lanes where this <= a.
    HK_FORCE_INLINE hkVector4Comparison compareLessThanEqual4(const hkVector4 &a) const
    {
        hkVector4Comparison c;
        c.m_mask = __vcmpgefp(a.m_quad, m_quad);
        return c;
    }
    HK_FORCE_INLINE hkBool32 equals3(const hkVector4 &v, hkReal epsilon) const
    {
        hkVector4 t;
        t.setSub4(*this, v);
        t.setAbs4(t);
        hkVector4 e;
        e.setAll(epsilon);
        return t.compareLessThanEqual4(e).allAreSet(hkVector4Comparison::MASK_XYZ);
    }
    HK_FORCE_INLINE hkBool32 equals4(const hkVector4 &v, hkReal epsilon) const
    {
        hkVector4 t;
        t.setSub4(*this, v);
        t.setAbs4(t);
        hkVector4 e;
        e.setAll(epsilon);
        return t.compareLessThanEqual4(e).allAreSet(hkVector4Comparison::MASK_XYZW);
    }

    // Products with a matrix. Those with a leading underscore are always inline (hkMatrix3.h,
    // hkTransform.h); the others are functions of the game.
    void setRotatedDir(const hkRotation &r, const hkVector4 &b);
    void setRotatedInverseDir(const hkRotation &r, const hkVector4 &b);
    void setTransformedPos(const hkTransform &t, const hkVector4 &b);
    void setTransformedInversePos(const hkTransform &t, const hkVector4 &b);
    HK_FORCE_INLINE void _setMul3(const hkMatrix3 &r, const hkVector4 &b);
    HK_FORCE_INLINE void _setRotatedInverseDir(const hkMatrix3 &r, const hkVector4 &b);
    HK_FORCE_INLINE void _setRotatedDir(const hkRotation &r, const hkVector4 &b);
    HK_FORCE_INLINE void _setTransformedPos(const hkTransform &t, const hkVector4 &b);

    hkQuadReal m_quad;
};

#endif
