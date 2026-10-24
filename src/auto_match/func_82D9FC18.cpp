// hkpLinearParametricCurve::hkpLinearParametricCurve() (Physics/Dynamics/Constraint/Bilateral/
// PointToPath/hkpLinearParametricCurve.cpp), /O2 /QVMXReserve (flag file). It keeps its fn_ name (the
// constructor body runs through MSVC's explicit self->C::C() call).
// The smoothing factor 0.01f and the direction (0, 1, 0, 0) are literals: hkVector4::set builds the quad
// in a local, which the compiler folds into a vector constant; the rename map names the game's merged
// copy of it (lbl_820D2840) __vmx@000000003f8000000000000000000000.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    HK_FORCE_INLINE void set(hkReal a, hkReal b, hkReal c, hkReal d = 0.0f)
    {
        hkQuadReal q;
        q.vector4_f32[0] = a;
        q.vector4_f32[1] = b;
        q.vector4_f32[2] = c;
        q.vector4_f32[3] = d;
        m_quad = q;
    }
    hkQuadReal m_quad;
};

class hkpParametricCurve : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpParametricCurve() {}
};

class hkpLinearParametricCurve : public hkpParametricCurve {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    HK_FORCE_INLINE hkpLinearParametricCurve() : m_smoothingFactor(0.01f), m_closedLoop(false)
    {
        m_dirNotParallelToTangentAlongWholePath.set(0.0f, 1.0f, 0.0f, 0.0f);
    }

    hkReal m_smoothingFactor;                             // +0x8
    hkBool m_closedLoop;                                  // +0xc
    hkVector4 m_dirNotParallelToTangentAlongWholePath;    // +0x10
    hkArray<hkVector4> m_points;                          // +0x20
    hkArray<hkReal> m_distance;                           // +0x2c
};

extern "C" hkpLinearParametricCurve *fn_82D9FC18(hkpLinearParametricCurve *self)
{
    self->hkpLinearParametricCurve::hkpLinearParametricCurve();
    return self;
}
