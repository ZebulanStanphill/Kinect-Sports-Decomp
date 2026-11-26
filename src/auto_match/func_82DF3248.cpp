// hkpPhysicsData::~hkpPhysicsData (hkpPhysicsData.cpp).
#include "havok/hkBase.h"
#include "havok/hkpPhysicsSystem.h"
#include "havok/hkpPhysicsData.h"
#include "havok/hkpWorldCinfo.h"

hkpPhysicsData::~hkpPhysicsData()
{
    if (m_worldCinfo)
        m_worldCinfo->removeReference();
    for (int i = 0; i < m_systems.getSize(); ++i)
        fn_82CE4118(m_systems[i]);   // removeReference(); the direct call keeps the original lwzx operand order
}
