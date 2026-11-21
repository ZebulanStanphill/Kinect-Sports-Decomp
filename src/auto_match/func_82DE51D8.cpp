// Box mass properties (probably hkInertiaTensorComputer::computeBoxVolumeMassProperties): inertia
// m / 3 * (b^2 + c^2) on the diagonal for half extents a, b, c, volume 8 * a * b * c.
// Havok code: /O2 /QVMXReserve (flag file). The 8.0f literal is lbl_82015BD4 in the game
// (pool alias __real@41000000=lbl_82015BD4).
#include "havok/hkBase.h"
#include "havok/hkMatrix3.h"
#include "havok/hkStreamWriter.h"

struct hkMassProperties_82DE51D8 {
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
    m.m_col[0] = zero;
    m.m_col[1] = zero;
    m.m_col[2] = zero;
}

static HK_FORCE_INLINE void SetIdentity(hkMatrix3 &m)
{
    SetZero(m);
    Element(m, 0, 0) = 1.0f;
    Element(m, 1, 1) = 1.0f;
    Element(m, 2, 2) = 1.0f;
}

extern "C" hkResult fn_82DE51D8(const hkVector4 &halfExtents, hkReal mass, hkMassProperties_82DE51D8 &result)
{
    if (mass <= 0.0f) {
        return HK_FAILURE;
    }
    hkReal x = halfExtents(0);
    hkReal y = halfExtents(1);
    hkReal z = halfExtents(2);
    hkReal zz = z * z;
    hkReal yy = y * y;
    hkReal xx = x * x;
    hkReal k = mass * (1.0f / 3.0f);
    SetIdentity(result.m_inertiaTensor);
    Element(result.m_inertiaTensor, 2, 2) = (xx + yy) * k;
    Element(result.m_inertiaTensor, 0, 0) = (yy + zz) * k;
    Element(result.m_inertiaTensor, 1, 1) = (xx + zz) * k;
    result.m_centerOfMass.setZero4();
    result.m_volume = z * y * x * 8.0f;
    result.m_mass = mass;
    return HK_SUCCESS;
}
