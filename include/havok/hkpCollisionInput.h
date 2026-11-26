#ifndef HAVOK_HKPCOLLISIONINPUT_H
#define HAVOK_HKPCOLLISIONINPUT_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"

class hkpCdBody;
class hkpCollisionDispatcher;
class hkpCollisionFilter;
struct hkpCollisionInput;

// hkpConvexListFilter (Physics/Collide/Filter/hkpConvexListFilter.h): tells the
// agent factories how to treat a convex list shape in a given pair.
class hkpConvexListFilter : public hkReferencedObject {
public:
    enum ConvexListCollisionType {
        TREAT_CONVEX_LIST_AS_NORMAL,
        TREAT_CONVEX_LIST_AS_LIST,
        TREAT_CONVEX_LIST_AS_CONVEX
    };
    virtual ConvexListCollisionType getConvexListCollisionType(const hkpCdBody &convexListBody,
                                                               const hkpCdBody &otherBody,
                                                               const hkpCollisionInput &input) const;   // +0xC
};

// Physics/Collide/Agent/hkpCollisionInput.h, hkpLinearCastCollisionInput.h: m_dispatcher (+0x0) and
// m_createPredictiveAgents (+0x14) from the agent constructors; the sizes (0x50, 0x70) and m_path (+0x50) from the
// flipped linear casts, which copy the input and negate the path. The
// tolerance (+0x8) is read by hkpShapePhantom::setPosition, the filter (+0xC)
// is the one the shape collection agent asks, and the agent factories call
// getConvexListCollisionType on the object at +0x10.
struct hkpCollisionInput {
    hkpCollisionDispatcher *m_dispatcher;             // +0x0
    hkUint32 m_weldClosestPoints;                     // +0x4
    hkReal m_tolerance;                               // +0x8
    const hkpCollisionFilter *m_filter;               // +0xC
    const hkpConvexListFilter *m_convexListFilter;    // +0x10
    hkBool32 m_createPredictiveAgents;                // +0x14
    hkUint8 m_members[0x28];                  // +0x18
    hkVector4 m_aabb32Info;                   // +0x40
};

struct hkpLinearCastCollisionInput : public hkpCollisionInput {
    hkVector4 m_path;                // +0x50
    hkReal m_maxExtraPenetration;    // +0x60
    hkReal m_cachedPathLength;       // +0x64
};

#endif
