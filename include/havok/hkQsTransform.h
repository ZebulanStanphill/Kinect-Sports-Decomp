// hkQsTransform (Common/Base/Math/QsTransform/hkQsTransform.h), 0x30 bytes: a translation, a rotation and a scale.
// The member names and order follow Havok's header and the units that read them (82CF6518, 82CF6628, 82CF6738).
#ifndef HAVOK_HKQSTRANSFORM_H
#define HAVOK_HKQSTRANSFORM_H

#include "havok/hkVector4.h"
#include "havok/hkQuaternion.h"

class hkQsTransform {
public:
    hkVector4 m_translation;    // +0x0
    hkQuaternion m_rotation;    // +0x10
    hkVector4 m_scale;          // +0x20
};

#endif
