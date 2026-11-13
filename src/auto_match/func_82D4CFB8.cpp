// Havok hkpPlaneShape::castRay: inside the "TtrcPlane" timer scope, intersects the ray with the
// plane (from in front, to behind), interpolates the hit point and accepts it when it lies inside
// the plane's AABB (centre + half extents); then writes the plane normal, the hit fraction and an
// invalid shape key to the output. The hkBool result is returned through the hidden pointer.
#include "havok/hkBaseTypes.h"
typedef unsigned int hkBool32;
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
typedef float hkReal;

extern "C" {
__vector4 __lvlx(const void *, int);
__vector4 __vspltw(__vector4, unsigned int);
__vector4 __vspltisw(int);
__vector4 __vaddfp(__vector4, __vector4);
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vmsum3fp(__vector4, __vector4);
__vector4 __vand(__vector4, __vector4);
__vector4 __vor(__vector4, __vector4);
__vector4 __vcmpgefp(__vector4, __vector4);
__vector4 __vcmpequwR(__vector4, __vector4, unsigned int *);
void __stvewx(__vector4, void *, int);
extern const __vector4 lbl_82132D10;        // Havok's (1, 1, 1, 1)
extern const __vector4 lbl_821CA820;        // sign-clearing mask
extern __vector4 lbl_8323B330[16];          // per-mask vectors OR-ed in before the all-set test
}

class hkSimdReal {
public:
    __forceinline hkSimdReal(const float &x) { q = __vspltw(__lvlx(&x, 0), 0); }
    __vector4 q;
};

class hkVector4Comparison {
public:
    enum Mask { MASK_XYZ = 14 };
    __forceinline hkBool32 allAreSet(Mask m) const
    {
        unsigned int cr;
        __vcmpequwR(__vor(mask, lbl_8323B330[m]), __vspltisw(-1), &cr);
        return cr & 0x80;
    }
    __vector4 mask;
};

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { q = v.q; }
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { q = __vsubfp(a.q, b.q); }
    __forceinline void setAbs4(const hkVector4 &a) { q = __vand(a.q, lbl_821CA820); }
    __forceinline void setInterpolate4(const hkVector4 &a, const hkVector4 &b, const hkSimdReal &t)
    {
        __vector4 bt = __vspltw(t.q, 0);
        __vector4 at = __vsubfp(lbl_82132D10, bt);
        q = __vmaddfp(bt, b.q, __vmulfp(at, a.q));
    }
    __forceinline hkVector4Comparison compareLessThanEqual4(const hkVector4 &a) const
    {
        hkVector4Comparison c;
        c.mask = __vcmpgefp(a.q, q);
        return c;
    }
    __forceinline float dot4xyz1(const hkVector4 &v) const
    {
        float r;
        __stvewx(__vaddfp(__vspltw(q, 3), __vmsum3fp(q, v.q)), &r, 0);
        return r;
    }
    __vector4 q;
};

struct hkpShapeRayCastInput {
    hkVector4 m_from;            // 0x00
    hkVector4 m_to;              // 0x10
};

struct hkpShapeRayCastOutput {
    hkVector4 m_normal;          // 0x00
    hkReal m_hitFraction;        // 0x10
    int m_extraInfo;             // 0x14
    int pad18[2];
    unsigned int m_shapeKeys[8]; // 0x20
    int m_shapeKeyIndex;         // 0x40
    __forceinline void setKey(unsigned int key) { m_shapeKeys[m_shapeKeyIndex] = key; }
};

struct hkpPlaneShape {
    char pad0[0x10];
    hkVector4 m_plane;           // 0x10
    hkVector4 m_aabbCenter;      // 0x20
    hkVector4 m_aabbHalfExtents; // 0x30
};

struct ProfTls_82D4CFB8 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
};

extern "C" {
extern unsigned int lbl_8323B4A0;
void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);
}

static __forceinline void TimerBegin(const char *name)
{
    ProfTls_82D4CFB8 *t = (ProfTls_82D4CFB8 *)KeTlsGetValue(lbl_8323B4A0);
    void **p = t->cur;
    if (p < t->end) {
        p[0] = (void *)name;
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}

struct TimerScope_82D4CFB8 {
    __forceinline TimerScope_82D4CFB8(const char *name) { TimerBegin(name); }
    __forceinline ~TimerScope_82D4CFB8() { TimerBegin("Et"); }
};

extern "C" hkBool fn_82D4CFB8(const hkpPlaneShape *self, const hkpShapeRayCastInput &input,
                              hkpShapeRayCastOutput &results)
{
    TimerScope_82D4CFB8 timer("TtrcPlane");
    const hkVector4 &plane = self->m_plane;
    const hkReal fromDist = plane.dot4xyz1(input.m_from);
    const hkVector4 &plane2 = self->m_plane;
    const hkReal toDist = plane2.dot4xyz1(input.m_to);
    if (fromDist >= 0.0f && toDist < 0.0f) {
        const hkReal hitFraction = fromDist / (fromDist - toDist);
        hkVector4 hitPoint;
        hitPoint.setInterpolate4(input.m_from, input.m_to, hitFraction);
        hkVector4 diff;
        diff.setSub4(hitPoint, self->m_aabbCenter);
        diff.setAbs4(diff);
        if (diff.compareLessThanEqual4(self->m_aabbHalfExtents).allAreSet(hkVector4Comparison::MASK_XYZ)) {
            results.m_hitFraction = hitFraction;
            results.m_normal = self->m_plane;
            results.setKey(0xffffffff);
            return true;
        }
    }
    return false;
}
