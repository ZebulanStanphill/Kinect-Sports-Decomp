// hkpHeightFieldAgent::~hkpHeightFieldAgent (Physics/Collide/Agent/MiscAgent/HeightField/hkpHeightFieldAgent.cpp): user-written and empty (it stores the class vtable); the hkArray
// member at +0xC (2-byte items) is destroyed, then the bases.
#include "havok/hkpCollisionAgent.h"

typedef hkUint16 hkContactPointId;

class hkpHeightFieldAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpHeightFieldAgent(hkpContactMgr *mgr);
    virtual ~hkpHeightFieldAgent();

    hkArray<hkContactPointId> m_contactPointId;   // +0xC
};

hkpHeightFieldAgent::~hkpHeightFieldAgent()
{
}
