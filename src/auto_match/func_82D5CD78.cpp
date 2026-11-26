#include "havok/hkBase.h"
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpShapeCollectionAgent.h"
#include "havok/hkpConvexListAgent.h"

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
