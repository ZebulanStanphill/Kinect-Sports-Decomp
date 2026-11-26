#include "havok/hkBase.h"
#include "havok/hkpSymmetricAgent.h"

class hkpShapeCollectionAgent : public hkpCollisionAgent {
public:
    hkpShapeCollectionAgent(const hkpCdBody &, const hkpCdBody &, const hkpCollisionInput &, hkpContactMgr *);
    char pad[0x2c];
};
class hkpGskfAgent;
extern "C" void fn_82D757E8(hkpGskfAgent *, const hkpCdBody &, const hkpCdBody &, hkpContactMgr *);
class hkpGskfAgent : public hkpCollisionAgent {
public:
    hkpGskfAgent(const hkpCdBody &a, const hkpCdBody &b, hkpContactMgr *m);
    char pad[0x74];
};
class hkpPredGskfAgent : public hkpGskfAgent {
public:
    hkpPredGskfAgent(const hkpCdBody &a, const hkpCdBody &b, hkpContactMgr *m) : hkpGskfAgent(a, b, m) {}
};
extern "C" hkpCollisionAgent *fn_82D5C050(void *, const hkpCdBody &, const hkpCdBody &, const hkpCollisionInput &,
                                          hkpContactMgr *);
extern "C" hkpCollisionAgent *fn_82D5CD78(const hkpCdBody &a, const hkpCdBody &b, const hkpCollisionInput &i,
                                          hkpContactMgr *m)
{
    if (m) {
        switch (i.m_convexListFilter->getConvexListCollisionType(b, a, i)) {
        case hkpConvexListFilter::TREAT_CONVEX_LIST_AS_NORMAL:
            return fn_82D5C050(hkpCollisionAgent::operator new(0x90), a, b, i, m);
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
