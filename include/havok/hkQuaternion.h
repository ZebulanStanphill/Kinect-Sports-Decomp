// hkQuaternion (Common/Base/Math/Quaternion/hkQuaternion.h): the imaginary
// part in x, y, z and the real part in w.
#ifndef HAVOK_HKQUATERNION_H
#define HAVOK_HKQUATERNION_H

#include "havok/hkVector4.h"

class hkQuaternion;
class hkRotation;
extern "C" const hkVector4 lbl_82132D50;   // (0, 0, 0, 1): the identity
// hkQuaternion::set(const hkRotation &), out of line (82CE5990 is a branch to 82CE57B0).
extern "C" void fn_82CE5990(hkQuaternion *self, const hkRotation &r);

class hkQuaternion {
public:
    HK_FORCE_INLINE void setIdentity() { m_vec = lbl_82132D50; }
    HK_FORCE_INLINE void set(const hkRotation &r) { fn_82CE5990(this, r); }
    HK_FORCE_INLINE const hkVector4 &getImag() const { return m_vec; }
    HK_FORCE_INLINE hkReal getReal() const { return m_vec(3); }

    hkVector4 m_vec;
};

#endif
