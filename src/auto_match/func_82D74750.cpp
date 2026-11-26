// hkpNullAgent::hkpNullAgent() (Physics/Collide/Agent/MiscAgent/Null/hkpNullAgent.cpp): an agent without contact manager.
#include "havok/hkBase.h"
#include "havok/hkpNullAgent.h"

hkpNullAgent::hkpNullAgent() : hkpCollisionAgent(HK_NULL)
{
}
