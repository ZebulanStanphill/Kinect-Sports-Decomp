#include "havok/hkBase.h"
class hkpCollisionAgent : public hkReferencedObject { public: void *m_contactMgr; };
class hkpIterativeLinearCastAgent : public hkpCollisionAgent {};
class hkpMultiRayConvexAgent : public hkpIterativeLinearCastAgent {
public:
 hkArray<hkUint16> m_contactInfo;
 hkUint16 m_storage[4];
};
void emitVtable_82D60E30(void *p) { new(p) hkpMultiRayConvexAgent; }
