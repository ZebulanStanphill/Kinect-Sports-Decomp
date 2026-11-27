// hkpPhysicsData::createWorld(hkBool registerAllAgents), keeping its fn_ name.
// Layouts are partial (only the members the function touches).
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"
#include "havok/hkpPhysicsSystem.h"
#include "havok/hkpWorldCinfo.h"
#include "havok/hkpSaveContactPointsUtil.h"

extern "C" {
void fn_82D404C8(void *dispatcher);                                         // registerAllAgents
void fn_82D89248(hkpWorld *w, hkpPhysicsSystem *s);                         // addPhysicsSystem
void fn_82DF8520(const hkpSaveContactPointsUtil::LoadPointsInput *in, hkpPhysicsSystem *s, hkpWorld *w);
void fn_82D88440(hkpWorld *w, int updateMode, int updateShapeCollections);  // updateCollisionFilterOnWorld
}

struct hkpPhysicsData {
    char p0[8];
    hkpWorldCinfo *m_worldCinfo;                        // +0x8
    hkArray<hkpPhysicsSystem *> m_systems;              // +0xc
    HK_FORCE_INLINE hkpWorld *createWorld(hkBool registerAllAgents);
};

HK_FORCE_INLINE hkpWorld *hkpPhysicsData::createWorld(hkBool registerAllAgents)
{
    hkpWorldCinfo defaultInfo;
    hkpWorld *world;
    if (!m_worldCinfo)
        world = new hkpWorld(defaultInfo);
    else
        world = new hkpWorld(*m_worldCinfo);
    if (registerAllAgents)
        fn_82D404C8(world->m_collisionDispatcher);
    for (int i = 0; i < m_systems.getSize(); ++i) {
        fn_82D89248(world, m_systems[i]);
        if (m_systems[i]->hasContacts()) {
            hkpSaveContactPointsUtil::LoadPointsInput input;
            fn_82DF8520(&input, m_systems[i], world);
        }
    }
    if (m_worldCinfo && m_worldCinfo->m_collisionFilter)
        fn_82D88440(world, 0, 1);
    return world;
}

extern "C" hkpWorld *fn_82DF3068(hkpPhysicsData *self, hkBool registerAllAgents)
{
    return self->createWorld(registerAllAgents);
}
