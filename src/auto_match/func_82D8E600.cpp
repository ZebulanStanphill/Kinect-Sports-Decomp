// hkpWorldCinfo::hkpWorldCinfo() (Physics/Dynamics/World/hkpWorldCinfo.cpp). Keeps its fn_ name:
// the Matching C++ unit func_82DF3068 calls it. Member names from the game's hkpWorldCinfo
// reflection strings. Havok code: /O2 /QVMXReserve (flag file).
//
// Havok writes literals. Vector literals become __vmx@ constants and float literals __real@ constants:
// the rename map gives the game's lbl_ copies of them (referenced by no Matching unit) those names, and
// symbols.txt already names 0.6f, 0.1f and 200.0f that way. 1.0f is the exception: Matching C units
// reference lbl_82002AE0, so it keeps its name. Literals are materialized from the first constant
// object with that value the compiler has seen in the unit, so lbl_82002AE0 is defined (selectany,
// like __real@ constants) and used once in hkpWorldCinfo_bindConstants before the constructor: the
// constructor's 1.0f literals then load from lbl_82002AE0 and schedule like literals (one load, no
// aliasing with the stores). Using the lbl_ object directly in the constructor reloads it per use;
// a plain extern declaration blocks the scheduler.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { q = v.q; }
    HK_FORCE_INLINE void set(hkReal x, hkReal y, hkReal z, hkReal w = 0.0f) { __vector4 v = { x, y, z, w }; q = v; }
    __vector4 q;
};

struct hkAabb {
    hkVector4 m_min;
    hkVector4 m_max;
};

template <typename ENUM, typename STORAGE>
class hkEnum {
public:
    HK_FORCE_INLINE void operator=(ENUM e) { m_storage = static_cast<STORAGE>(e); }
    STORAGE m_storage;
};

class hkpCollisionFilter : public hkReferencedObject {};
class hkpConvexListFilter : public hkReferencedObject {};
class hkWorldMemoryAvailableWatchDog : public hkReferencedObject {};

// hkRefPtr with Havok's operator=(TYPE *): the new object gains a reference before the old
// one loses its own (the shared header has no assignment operator).
template <typename TYPE>
class hkRefPtrA : public hkRefPtr<TYPE> {
public:
    HK_FORCE_INLINE void operator=(TYPE *e)
    {
        if (e)
            e->addReference();
        if (this->m_pntr)
            this->m_pntr->removeReference();
        this->m_pntr = e;
    }
};

extern "C" {
__declspec(selectany) extern const float lbl_82002AE0 = 1.0f;
}

// Makes the configured name the compiler's constant-pool entry for 1.0f (see above).
void hkpWorldCinfo_bindConstants(float *out)
{
    out[0] = lbl_82002AE0;
}


class hkpWorldCinfo : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);

    enum SimulationType { SIMULATION_TYPE_INVALID, SIMULATION_TYPE_DISCRETE, SIMULATION_TYPE_CONTINUOUS, SIMULATION_TYPE_MULTITHREADED };
    enum ContactPointGeneration { CONTACT_POINT_ACCEPT_ALWAYS, CONTACT_POINT_REJECT_DUBIOUS, CONTACT_POINT_REJECT_MANY };
    enum BroadPhaseBorderBehaviour { BROADPHASE_BORDER_ASSERT, BROADPHASE_BORDER_FIX_ENTITY, BROADPHASE_BORDER_REMOVE_ENTITY, BROADPHASE_BORDER_DO_NOTHING };
    enum TreeUpdateType { REBUILD_ACTIVE, REBUILD_ALL };

    hkpWorldCinfo();
    virtual ~hkpWorldCinfo() {}

    hkVector4 m_gravity;                                            // +0x10
    hkInt32 m_broadPhaseQuerySize;                                  // +0x20
    hkReal m_contactRestingVelocity;                                // +0x24
    hkEnum<BroadPhaseBorderBehaviour, hkInt8> m_broadPhaseBorderBehaviour;   // +0x28
    hkBool m_mtPostponeAndSortBroadPhaseBorderCallbacks;            // +0x29
    hkAabb m_broadPhaseWorldAabb;                                   // +0x30
    hkBool m_useKdTree;                                             // +0x50
    hkBool m_useMultipleTree;                                       // +0x51
    hkEnum<TreeUpdateType, hkInt8> m_treeUpdateType;                // +0x52
    hkBool m_autoUpdateKdTree;                                      // +0x53
    hkReal m_collisionTolerance;                                    // +0x54
    hkRefPtrA<hkpCollisionFilter> m_collisionFilter;                // +0x58
    hkRefPtrA<hkpConvexListFilter> m_convexListFilter;              // +0x5C
    hkReal m_expectedMaxLinearVelocity;                             // +0x60
    int m_sizeOfToiEventQueue;                                      // +0x64
    hkReal m_expectedMinPsiDeltaTime;                               // +0x68
    hkRefPtrA<hkWorldMemoryAvailableWatchDog> m_memoryWatchDog;     // +0x6C
    hkInt32 m_broadPhaseNumMarkers;                                 // +0x70
    hkEnum<ContactPointGeneration, hkInt8> m_contactPointGeneration;   // +0x74
    hkBool m_allowToSkipConfirmedCallbacks;                         // +0x75
    hkReal m_solverTau;                                             // +0x78
    hkReal m_solverDamp;                                            // +0x7C
    hkInt32 m_solverIterations;                                     // +0x80
    hkInt32 m_solverMicrosteps;                                     // +0x84
    hkBool m_forceCoherentConstraintOrderingInSolver;               // +0x88
    hkReal m_snapCollisionToConvexEdgeThreshold;                    // +0x8C
    hkReal m_snapCollisionToConcaveEdgeThreshold;                   // +0x90
    hkBool m_enableToiWeldRejection;                                // +0x94
    hkBool m_enableDeprecatedWelding;                               // +0x95
    hkReal m_iterativeLinearCastEarlyOutDistance;                   // +0x98
    hkInt32 m_iterativeLinearCastMaxIterations;                     // +0x9C
    hkUint8 m_deactivationNumInactiveFramesSelectFlag0;             // +0xA0
    hkUint8 m_deactivationNumInactiveFramesSelectFlag1;             // +0xA1
    hkUint8 m_deactivationIntegrateCounter;                         // +0xA2
    hkBool m_shouldActivateOnRigidBodyTransformChange;              // +0xA3
    hkReal m_deactivationReferenceDistance;                         // +0xA4
    hkReal m_toiCollisionResponseRotateNormal;                      // +0xA8
    int m_maxSectorsPerCollideTask;                                 // +0xAC
    hkBool m_processToisMultithreaded;                              // +0xB0
    int m_maxEntriesPerToiCollideTask;                              // +0xB4
    int m_maxNumToiCollisionPairsSinglethreaded;                    // +0xB8
    hkReal m_numToisTillAllowedPenetrationSimplifiedToi;            // +0xBC
    hkReal m_numToisTillAllowedPenetrationToi;                      // +0xC0
    hkReal m_numToisTillAllowedPenetrationToiHigher;                // +0xC4
    hkReal m_numToisTillAllowedPenetrationToiForced;                // +0xC8
    hkBool m_enableDeactivation;                                    // +0xCC
    hkEnum<SimulationType, hkInt8> m_simulationType;                // +0xCD
    hkBool m_enableSimulationIslands;                               // +0xCE
    hkUint32 m_minDesiredIslandSize;                                // +0xD0
    hkBool m_processActionsInSingleThread;                          // +0xD4
    hkBool m_allowIntegrationOfIslandsWithoutConstraintsInASeparateJob;   // +0xD5
    hkReal m_frameMarkerPsiSnap;                                    // +0xD8
    hkBool m_fireCollisionCallbacks;                                // +0xDC
};

HK_FORCE_INLINE hkpWorldCinfo::hkpWorldCinfo()
{
    m_gravity.set(0.0f, -9.8f, 0.0f);
    m_enableSimulationIslands = true;
    m_broadPhaseQuerySize = 1024;
    m_broadPhaseWorldAabb.m_min.set(-500.0f, -500.0f, -500.0f);
    m_broadPhaseWorldAabb.m_max.set(500.0f, 500.0f, 500.0f);
    m_collisionFilter = HK_NULL;
    m_convexListFilter = HK_NULL;
    m_broadPhaseNumMarkers = 0;
    m_sizeOfToiEventQueue = 250;
    m_solverTau = 0.6f;
    m_solverDamp = 1.0f;
    m_contactRestingVelocity = 1.0f;
    m_solverIterations = 4;
    m_solverMicrosteps = 1;
    m_forceCoherentConstraintOrderingInSolver = false;
    m_snapCollisionToConvexEdgeThreshold = 0.524f;
    m_snapCollisionToConcaveEdgeThreshold = 0.698f;
    m_enableToiWeldRejection = false;
    m_collisionTolerance = 0.1f;
    m_broadPhaseBorderBehaviour = BROADPHASE_BORDER_ASSERT;
    m_treeUpdateType = REBUILD_ACTIVE;
    m_useKdTree = false;
    m_useMultipleTree = false;
    m_autoUpdateKdTree = true;
    m_toiCollisionResponseRotateNormal = 0.2f;
    m_processToisMultithreaded = true;
    m_maxSectorsPerCollideTask = 4;
    m_maxEntriesPerToiCollideTask = 8;
    m_maxNumToiCollisionPairsSinglethreaded = 1;
    m_numToisTillAllowedPenetrationSimplifiedToi = 3.0f;
    m_numToisTillAllowedPenetrationToi = 3.0f;
    m_numToisTillAllowedPenetrationToiHigher = 4.0f;
    m_numToisTillAllowedPenetrationToiForced = 20.0f;
    m_deactivationReferenceDistance = 0.02f;
    m_expectedMaxLinearVelocity = 200.0f;
    m_expectedMinPsiDeltaTime = (1.0f / 30.0f);
    m_iterativeLinearCastEarlyOutDistance = 0.01f;
    m_enableDeprecatedWelding = false;
    m_iterativeLinearCastMaxIterations = 20;
    m_enableDeactivation = true;
    m_shouldActivateOnRigidBodyTransformChange = true;
    m_minDesiredIslandSize = 64;
    m_deactivationNumInactiveFramesSelectFlag0 = 0;
    m_deactivationNumInactiveFramesSelectFlag1 = 0;
    m_deactivationIntegrateCounter = 0;
    m_contactPointGeneration = CONTACT_POINT_REJECT_MANY;
    m_allowToSkipConfirmedCallbacks = false;
    m_frameMarkerPsiSnap = 0.0001f;
    m_simulationType = SIMULATION_TYPE_CONTINUOUS;
    m_memoryWatchDog = HK_NULL;
    m_processActionsInSingleThread = true;
    m_fireCollisionCallbacks = false;
}

extern "C" hkpWorldCinfo *fn_82D8E600(hkpWorldCinfo *self)
{
    self->hkpWorldCinfo::hkpWorldCinfo();
    return self;
}
