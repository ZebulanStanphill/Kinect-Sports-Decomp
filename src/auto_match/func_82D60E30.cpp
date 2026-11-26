#include "havok/hkBase.h"
#include "havok/hkpIterativeLinearCastAgent.h"
class hkpMultiRayConvexAgent : public hkpIterativeLinearCastAgent {
public:
 hkpMultiRayConvexAgent(hkpContactMgr *mgr) : hkpIterativeLinearCastAgent(mgr) {}
 hkArray<hkUint16> m_contactInfo;
 hkUint16 m_storage[4];
};
void emitVtable_82D60E30(void *p, hkpContactMgr *mgr) { new(p) hkpMultiRayConvexAgent(mgr); }
