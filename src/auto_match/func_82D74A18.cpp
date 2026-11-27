// hkpGskBaseAgent::cleanup (+0x1C of ??_7hkpGskBaseAgent@@6B@): deletes the agent.
#include "havok/hkpGskBaseAgent.h"

void hkpGskBaseAgent::cleanup(hkCollisionConstraintOwner &constraintOwner)
{
    delete this;
}
