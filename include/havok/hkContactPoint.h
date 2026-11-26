// hkContactPoint (Common/Base/Types/Physics/ContactPoint/hkContactPoint.h),
// 0x20 bytes. The distance is the w of the separating normal.
#ifndef HAVOK_HKCONTACTPOINT_H
#define HAVOK_HKCONTACTPOINT_H

#include "havok/hkVector4.h"

class hkContactPoint {
public:
    HK_FORCE_INLINE const hkVector4 &getPosition() const { return m_position; }
    HK_FORCE_INLINE const hkVector4 &getSeparatingNormal() const { return m_separatingNormal; }
    HK_FORCE_INLINE hkReal getDistance() const { return m_separatingNormal(3); }
    HK_FORCE_INLINE void setDistance(hkReal d) { m_separatingNormal.setW(d); }

    hkVector4 m_position;           // +0x0
    hkVector4 m_separatingNormal;   // +0x10
};

#endif
