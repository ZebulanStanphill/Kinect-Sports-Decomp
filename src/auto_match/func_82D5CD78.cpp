#include "havok/hkBase.h"
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpShapeCollectionAgent.h"

class hkpGskfAgent : public hkpCollisionAgent {
public:
    hkpGskfAgent(const hkpCdBody &a, const hkpCdBody &b, hkpContactMgr *m);
    char pad[0x74];
};
class hkpPredGskfAgent : public hkpGskfAgent {
public:
    hkpPredGskfAgent(const hkpCdBody &a, const hkpCdBody &b, hkpContactMgr *m) : hkpGskfAgent(a, b, m) {}
};
// hkpConvexListAgent (Physics/Collide/Agent/Deprecated/ConvexList/hkpConvexListAgent.h), 0x90 bytes; its
// constructor is out of line (82D5C050).
class hkpConvexListAgent : public hkpPredGskfAgent {
public:
    hkpConvexListAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    hkpCollisionDispatcher *m_dispatcher;   // +0x80 input.m_dispatcher
    hkBool m_inGskMode;                     // +0x84
    hkBool m_processFunctionCalled;         // +0x85
    char m_pad86[0xA];
};
extern "C" hkpCollisionAgent *fn_82D5CD78(const hkpCdBody &a, const hkpCdBody &b, const hkpCollisionInput &i,
                                          hkpContactMgr *m)
{
    if (m) {
        switch (i.m_convexListFilter->getConvexListCollisionType(b, a, i)) {
        case hkpConvexListFilter::TREAT_CONVEX_LIST_AS_NORMAL:
            return new hkpConvexListAgent(a, b, i, m);
        case hkpConvexListFilter::TREAT_CONVEX_LIST_AS_LIST:
            return new hkpSymmetricAgent<hkpShapeCollectionAgent>(a, b, i, m);
        case hkpConvexListFilter::TREAT_CONVEX_LIST_AS_CONVEX:
            return new hkpPredGskfAgent(a, b, m);
        default:
            return 0;
        }
    }
    return new hkpSymmetricAgent<hkpShapeCollectionAgent>(a, b, i, 0);
}
