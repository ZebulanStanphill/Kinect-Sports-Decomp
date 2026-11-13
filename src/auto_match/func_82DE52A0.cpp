// Havok hkpInertiaTensorComputer::computeConvexHullMassProperties shape: build the convex hull of
// the vertices, add the volume of a shell of the given radius, grow the hull's planar margin until
// it is a 3D hull with a minimum volume, then copy its mass properties (unit mass) and scale the
// inertia by the volume ratio. Keeps its fn_ name.
// Havok code: /O2 /QVMXReserve (flag file). The minimum volume 1.1920929e-05f is a literal whose pooled
// constant the original names lbl_82145204 (pool alias __real@37480000=lbl_82145204).
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

extern "C" {
__vector4 __lvlx(const void *, int);
__vector4 __vspltw(__vector4, unsigned int);
}

class hkVector4 {
public:
    HK_FORCE_INLINE hkVector4() {}
    HK_FORCE_INLINE hkVector4(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    hkQuadReal m_quad;
};

class hkSimdReal {
public:
    HK_FORCE_INLINE hkSimdReal(hkReal r) { m_real = __vspltw(__lvlx(&r, 0), 0); }
    hkQuadReal m_real;
};

class hkMatrix3 {
public:
    HK_FORCE_INLINE void operator=(const hkMatrix3 &m)
    {
        m_col0 = m.m_col0;
        m_col1 = m.m_col1;
        m_col2 = m.m_col2;
    }
    hkVector4 m_col0;
    hkVector4 m_col1;
    hkVector4 m_col2;
};

struct hkpMassProperties {
    hkReal m_volume;          // +0x0
    hkReal m_mass;            // +0x4
    hkVector4 m_centerOfMass; // +0x10
    hkMatrix3 m_inertiaTensor;// +0x20
};

struct hkStridedVertices;

class hkgpConvexHull {
public:
    struct BuildConfig {
        hkBool m_setSourceIndices;
        hkUint8 m_data[0xF];
    };
    void *m_vtable;
    int m_refCount;
    void *m_data;
    int m_pad[2];
};

extern "C" {
extern float lbl_83181A30;
extern const float lbl_82145208;   // 4 * pi
void fn_82D0D6E8(hkgpConvexHull *self);                                        // hkgpConvexHull::hkgpConvexHull
void fn_82D0D640(hkgpConvexHull *self);                                        // hkgpConvexHull::~hkgpConvexHull
void fn_82D0B0C0(hkgpConvexHull::BuildConfig *self);                           // BuildConfig::BuildConfig
int fn_82D0D888(hkgpConvexHull *self, const hkStridedVertices &v, const hkgpConvexHull::BuildConfig &c); // build
int fn_82D0B1D8(const hkgpConvexHull *self);                                   // getDimensions
void fn_82D0C928(hkgpConvexHull *self);                                        // buildMassProperties
hkReal fn_82D0B7C0(const hkgpConvexHull *self);                                // getSurfaceArea
hkReal fn_82D0B6F8(const hkgpConvexHull *self);                                // getVolume
void fn_82D0E4B8(hkgpConvexHull *self, hkReal margin);                         // expand by planar margin
const hkVector4 &fn_82D0BAA8(const hkgpConvexHull *self);                      // getCenterOfMass
const hkMatrix3 &fn_82D0B9E0(const hkgpConvexHull *self);                      // getInertiaTensor
void fn_82CEBE20(hkMatrix3 *self, const hkSimdReal &s);                        // hkMatrix3::mul
}

extern "C" int fn_82DE52A0(const hkStridedVertices &vertices, hkReal radius, hkpMassProperties &result)
{
    hkgpConvexHull hull;
    fn_82D0D6E8(&hull);
    hkgpConvexHull::BuildConfig config;
    fn_82D0B0C0(&config);
    config.m_setSourceIndices = true;
    fn_82D0D888(&hull, vertices, config);
    if (fn_82D0B1D8(&hull) != -1) {
    hkReal margin = lbl_83181A30 * 0.2f;
    hkReal extraVolume = 0.0f;
    if (fn_82D0B1D8(&hull) == 3) {
        fn_82D0C928(&hull);
        if (radius > 0.0f) {
            hkReal r2 = radius * radius;
            hkReal r3 = r2 * radius;
            extraVolume = fn_82D0B7C0(&hull) * radius + r3 * lbl_82145208 * (1.0f / 3.0f);
        }
    }
    while (fn_82D0B1D8(&hull) != 3 || fn_82D0B6F8(&hull) < 1.1920929e-05f) {
        fn_82D0D888(&hull, vertices, config);
        fn_82D0E4B8(&hull, margin);
        if (fn_82D0B1D8(&hull) == 3) fn_82D0C928(&hull);
        margin *= 2.0f;
    }
    result.m_centerOfMass = fn_82D0BAA8(&hull);
    result.m_inertiaTensor = fn_82D0B9E0(&hull);
    hkReal volume = fn_82D0B6F8(&hull) + extraVolume;
    result.m_volume = volume;
    result.m_mass = 1.0f;
    if (volume > 0.0f && extraVolume > 0.0f) {
        fn_82CEBE20(&result.m_inertiaTensor, hkSimdReal(1.0f + extraVolume / volume));
    }
    fn_82D0D640(&hull);
    return 0;
    }
    fn_82D0D640(&hull);
    return 1;
}
