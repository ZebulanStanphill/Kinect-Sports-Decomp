// hkpNullAgent::hkpNullAgent() (Physics/Collide/Agent/MiscAgent/Null/hkpNullAgent.cpp): an agent without contact manager.
#include "havok/hkBase.h"
#include "havok/hkpCollisionAgent.h"

class hkpNullAgent : public hkpCollisionAgent {
public:
    hkpNullAgent();
};

hkpNullAgent::hkpNullAgent() : hkpCollisionAgent(HK_NULL)
{
}
