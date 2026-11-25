// hkpShapeCollectionAgent::~hkpShapeCollectionAgent, the implicit destructor (Physics/Collide/Agent/
// CompoundAgent/ShapeCollection/hkpShapeCollectionAgent.h), emitted out of line: the deleting destructor
// (fn_82D55498) calls it; identical code also serves hkpMultiSphereAgent. It destroys the hkArray of
// key/agent pairs at +0xC. The function at the end only makes the compiler emit the vtable.
#include "havok/hkpCollisionAgent.h"

class hkpShapeCollectionAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    struct KeyAgentPair {
        hkpShapeKey m_key;
        hkpCollisionAgent *m_agent;
    };
    hkpShapeCollectionAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr) {}

    hkArray<KeyAgentPair> m_agents;   // +0xC
};

void emitVtable_82D55060(void *p) { new (p) hkpShapeCollectionAgent(0); }
