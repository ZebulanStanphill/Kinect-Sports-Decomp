#ifndef HAVOK_HKPSHAPEPHANTOM_H
#define HAVOK_HKPSHAPEPHANTOM_H

#include "havok/hkpPhantom.h"
#include "havok/hkMotionState.h"

// hkpShapePhantom (Physics/Dynamics/Phantom/hkpShapePhantom.h): hkMotionState at +0xB0.
class hkpShapePhantom : public hkpPhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpShapePhantom(const hkpShape *shape, const hkTransform &transform);
    void setTransform(const hkTransform &transform);

    hkMotionState m_motionState;   // +0xB0
};

#endif
