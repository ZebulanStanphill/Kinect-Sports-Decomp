#ifndef HAVOK_HKPCOLLISIONINPUT_H
#define HAVOK_HKPCOLLISIONINPUT_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"

class hkpCdBody;
class hkpCollisionDispatcher;
class hkpCollisionFilter;
struct hkpCollisionInput;

// hkpConvexListFilter (Physics/Collide/Filter/hkpConvexListFilter.h): tells the
// agent factories how to treat a convex list shape in a given pair. The finish
// constructor is the one hkpDefaultConvexListFilter's hkTypeInfo functions
// (82D3A180, 82D3A198) run through their own class; it stores nothing.
class hkpConvexListFilter : public hkReferencedObject {
public:
    hkpConvexListFilter() {}
    hkpConvexListFilter(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    enum ConvexListCollisionType {
        TREAT_CONVEX_LIST_AS_NORMAL,
        TREAT_CONVEX_LIST_AS_LIST,
        TREAT_CONVEX_LIST_AS_CONVEX
    };
    virtual ConvexListCollisionType getConvexListCollisionType(const hkpCdBody &convexListBody,
                                                               const hkpCdBody &otherBody,
                                                               const hkpCollisionInput &input) const;   // +0xC
};

// hkPadSpu (Common/Base/Types/hkBaseTypes.h): a value padded to 16 bytes on SPU, plain elsewhere.
// hkpCollisionInput's scalars are wrapped in it: the implicit copy constructor the game has
// (emitted with 82DF2A08) moves the tolerance through an integer register, as a class member is
// copied, not through a float register.
template <typename TYPE>
class hkPadSpu {
public:
    HK_FORCE_INLINE hkPadSpu() {}
    HK_FORCE_INLINE hkPadSpu(TYPE e) : m_storage(e) {}
    HK_FORCE_INLINE void operator=(TYPE e) { m_storage = e; }
    HK_FORCE_INLINE TYPE val() const { return m_storage; }
    HK_FORCE_INLINE TYPE operator->() const { return m_storage; }
    HK_FORCE_INLINE operator TYPE() const { return m_storage; }
    TYPE m_storage;
};

// Physics/Collide/Agent/hkpCollisionInput.h, hkpLinearCastCollisionInput.h: m_dispatcher (+0x0) and
// m_createPredictiveAgents (+0x14) from the agent constructors; the sizes (0x50, 0x70) and m_path (+0x50) from the
// flipped linear casts, which copy the input and negate the path. The
// tolerance (+0x8) is read by hkpShapePhantom::setPosition, the filter (+0xC)
// is the one the shape collection agent asks, and the agent factories call
// getConvexListCollisionType on the object at +0x10. The three vectors at +0x20 are copied one by one by
// hkpMouseSpringAction's constructor (82DF2A08), which copies the world's input and skips +0x18 to +0x1F;
// their names are Havok's. Havok's later m_forceAcceptContactPoints is not in this version.
struct hkpCollisionInput {
    hkPadSpu<hkpCollisionDispatcher *> m_dispatcher;            // +0x0
    hkPadSpu<hkBool> m_weldClosestPoints;                       // +0x4: one byte (82DF2A08 copies it with lbz/stb)
    hkPadSpu<hkReal> m_tolerance;                               // +0x8
    hkPadSpu<const hkpCollisionFilter *> m_filter;              // +0xC
    hkPadSpu<const hkpConvexListFilter *> m_convexListFilter;   // +0x10
    hkPadSpu<hkBool32> m_createPredictiveAgents;                // +0x14
    struct Aabb32Info {
        hkVector4 m_bitOffsetLow;
        hkVector4 m_bitOffsetHigh;
        hkVector4 m_bitScale;
    };
    Aabb32Info m_aabb32Info;                          // +0x20
};

struct hkpLinearCastCollisionInput : public hkpCollisionInput {
    hkVector4 m_path;                // +0x50
    hkReal m_maxExtraPenetration;    // +0x60
    hkReal m_cachedPathLength;       // +0x64
};

#endif
