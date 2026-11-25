// Sphere mass properties (probably hkInertiaTensorComputer::computeSphereVolumeMassProperties): inertia
// 0.4 * r^2 * m on the diagonal, volume 4/3 * pi * r^3. The 4/3 * pi literal is lbl_82145200 in the game.
#include "havok/hkMatrix3.h"
#include "havok/hkStreamWriter.h"

struct hkMassProperties_82DE5138 {
    hkReal m_volume;           // +0x00
    hkReal m_mass;             // +0x04
    hkVector4 m_centerOfMass;  // +0x10
    hkMatrix3 m_inertiaTensor; // +0x20
};

static HK_FORCE_INLINE hkReal &Element(hkMatrix3 &m, int row, int column)
{
    return ((hkReal *)&m.getColumn(column))[row];
}

static HK_FORCE_INLINE void SetZero(hkMatrix3 &m)
{
    hkVector4 zero;
    zero.setZero4();
    m.m_col0 = zero;
    m.m_col1 = zero;
    m.m_col2 = zero;
}

static HK_FORCE_INLINE void SetIdentity(hkMatrix3 &m)
{
    SetZero(m);
    Element(m, 0, 0) = 1.0f;
    Element(m, 1, 1) = 1.0f;
    Element(m, 2, 2) = 1.0f;
}

static HK_FORCE_INLINE void SetDiagonal(hkMatrix3 &m, hkReal m00, hkReal m11, hkReal m22)
{
    SetIdentity(m);
    Element(m, 0, 0) = m00;
    Element(m, 1, 1) = m11;
    Element(m, 2, 2) = m22;
}

extern "C" hkResult fn_82DE5138(hkReal radius, hkReal mass, hkMassProperties_82DE5138 &result)
{
    if (mass <= 0.0f) {
        return HK_FAILURE;
    }
    if (radius <= 0.0f) {
        return HK_FAILURE;
    }
    SetIdentity(result.m_inertiaTensor);
    hkReal k = radius * radius * mass * 0.4f;
    Element(result.m_inertiaTensor, 0, 0) = k;
    Element(result.m_inertiaTensor, 1, 1) = k;
    Element(result.m_inertiaTensor, 2, 2) = k;
    result.m_centerOfMass.setZero4();
    result.m_volume = radius * radius * radius * 4.1887902f;
    result.m_mass = mass;
    return HK_SUCCESS;
}
