#ifndef HAVOK_HKPSHAPEPHANTOM_H
#define HAVOK_HKPSHAPEPHANTOM_H

#include "havok/hkpPhantom.h"
#include "havok/hkMotionState.h"

class hkpCdBodyPairCollector;
class hkpCdPointCollector;
struct hkpCollisionInput;
struct hkpLinearCastInput;

// hkpShapePhantom (Physics/Dynamics/Phantom/hkpShapePhantom.h): hkMotionState at +0xB0.
// Its vtable (??_7hkpShapePhantom@@6B@, 18 slots) overrides setShape (82D99CD0), getMotionState (82D99CC0),
// calcAabb (82D99F20) and deallocateInternalArrays (82D99CC8) and adds four pure slots, declared here with
// Havok's names in Havok's order (not checked against the game).
class hkpShapePhantom : public hkpPhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpShapePhantom(const hkpShape *shape, const hkTransform &transform);
    virtual hkWorldOperation::Result setShape(const hkpShape *shape);
    virtual hkMotionState *getMotionState();
    virtual void calcAabb(hkAabb &aabb);
    virtual void deallocateInternalArrays();
    virtual void setPositionAndLinearCast(const hkVector4 &position, const hkpLinearCastInput &input,
                                          hkpCdPointCollector &castCollector,
                                          hkpCdPointCollector *startCollector);            // +0x38
    virtual void setTransformAndLinearCast(const hkTransform &transform, const hkpLinearCastInput &input,
                                           hkpCdPointCollector &castCollector,
                                           hkpCdPointCollector *startCollector);           // +0x3C
    virtual void getClosestPoints(hkpCdPointCollector &collector, const hkpCollisionInput *input = HK_NULL);   // +0x40
    virtual void getPenetrations(hkpCdBodyPairCollector &collector, const hkpCollisionInput *input = HK_NULL); // +0x44
    void setTransform(const hkTransform &transform);

    hkMotionState m_motionState;   // +0xB0
};

#endif
