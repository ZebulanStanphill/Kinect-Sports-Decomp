// hkpPhysicsData::createWorld(hkBool registerAllAgents), keeping its fn_ name.
// Layouts are partial (only the members the function touches).
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"
#include "havok/hkpPhysicsSystem.h"
#include "havok/hkpWorldCinfo.h"
#include "havok/hkpSaveContactPointsUtil.h"

extern "C" {
void fn_82D8E600(hkpWorldCinfo *info);                                     // hkpWorldCinfo()
hkpWorld *fn_82D86990(hkpWorld *w, const hkpWorldCinfo *info, int sdkVersion); // hkpWorld(info, version)
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
    union { void *ptr; char buf[sizeof(hkpWorldCinfo)]; } storage;
    hkpWorldCinfo &defaultInfo = *(hkpWorldCinfo *)storage.buf;
    fn_82D8E600(&defaultInfo);
    hkpWorld *world;
    if (!m_worldCinfo)
        world = fn_82D86990((hkpWorld *)hkpWorld::operator new(sizeof(hkpWorld)), &defaultInfo, 70000);
    else
        world = fn_82D86990((hkpWorld *)hkpWorld::operator new(sizeof(hkpWorld)), m_worldCinfo, 70000);
    if (registerAllAgents)
        fn_82D404C8(world->m_collisionDispatcher);
    for (int i = 0; i < m_systems.getSize(); ++i) {
        fn_82D89248(world, *(m_systems.begin() + i));
        if ((*(m_systems.begin() + i))->hasContacts()) {
            hkpSaveContactPointsUtil::LoadPointsInput input;
            fn_82DF8520(&input, *(m_systems.begin() + i), world);
        }
    }
    if (m_worldCinfo && m_worldCinfo->m_collisionFilter)
        fn_82D88440(world, 0, 1);
    defaultInfo.hkpWorldCinfo::~hkpWorldCinfo();
    return world;
}

extern "C" hkpWorld *fn_82DF3068(hkpPhysicsData *self, hkBool registerAllAgents)
{
    return self->createWorld(registerAllAgents);
}
