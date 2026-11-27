// hkpMultiSphereAgent::cleanup (+0x1C of hkpMultiSphereAgent's and hkpSymmetricAgent<hkpMultiSphereAgent>'s
// vtables): cleans up every child agent, then deletes the agent.
#include "havok/hkpMultiSphereAgent.h"

void hkpMultiSphereAgent::cleanup(hkCollisionConstraintOwner &constraintOwner)
{
    for (int i = 0; i < m_agents.getSize(); i++) {
        m_agents[i].m_agent->cleanup(constraintOwner);
    }
    delete this;
}
