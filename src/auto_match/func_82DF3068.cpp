// hkpPhysicsData::createWorld(hkBool registerAllAgents), keeping its fn_ name.
// Layouts are partial (only the members the function touches).
#include "havok/hkBase.h"

class hkpWorldCinfo : public hkReferencedObject {
public:
    char p8[0x50];
    hkRefPtr<hkReferencedObject> m_collisionFilter;    // +0x58
    hkRefPtr<hkReferencedObject> m_convexListFilter;   // +0x5c
    char p60[0xc];
    hkRefPtr<hkReferencedObject> m_memoryWatchDog;     // +0x6c
    char p70[0x70];
    HK_FORCE_INLINE ~hkpWorldCinfo() {}
};

class hkpWorld : public hkReferencedObject {
public:
    char p8[0x78];
    void *m_collisionDispatcher;                       // +0x80
    char rest[0x2cc];
};

struct hkpSaveContactPointsUtil {
    struct LoadPointsInput {
        hkBool m_a, m_b;
        int m_x;
        hkBool m_c, m_d, m_e;
        HK_FORCE_INLINE LoadPointsInput()
            : m_a(false), m_b(false), m_x(0), m_c(true), m_d(true), m_e(false) {}
    };
};

class hkpPhysicsSystem {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual hkBool hasContacts();
};

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
