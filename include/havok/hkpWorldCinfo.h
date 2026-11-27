// hkpWorldCinfo (Physics/Dynamics/World/hkpWorldCinfo.h), 0xE0 bytes: the settings an hkpWorld is
// constructed from. The members and their offsets are those the constructor (82D8E600) fills in; the names
// are the game's (its hkpWorldCinfo reflection strings). The constructor is out of line (82D8E600). The
// destructor is inline but not forced: the Havok units (/O2) expand it, game code (/O1) calls the copy emitted
// in a game object (8253C630, with the deleting destructor 8253C6B8). The finish constructor (82D8E840) turns a zero m_contactRestingVelocity into 1.
#ifndef HAVOK_HKPWORLDCINFO_H
#define HAVOK_HKPWORLDCINFO_H

#include "havok/hkBase.h"
#include "havok/hkAabb.h"
#include "havok/hkEnum.h"
#include "havok/hkVector4.h"
#include "havok/hkpCollisionFilter.h"
#include "havok/hkpCollisionInput.h"

class hkpWorldCinfo : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);

    enum SimulationType {
        SIMULATION_TYPE_INVALID,
        SIMULATION_TYPE_DISCRETE,
        SIMULATION_TYPE_CONTINUOUS,
        SIMULATION_TYPE_MULTITHREADED
    };
    enum ContactPointGeneration {
        CONTACT_POINT_ACCEPT_ALWAYS,
        CONTACT_POINT_REJECT_DUBIOUS,
        CONTACT_POINT_REJECT_MANY
    };
    enum BroadPhaseBorderBehaviour {
        BROADPHASE_BORDER_ASSERT,
        BROADPHASE_BORDER_FIX_ENTITY,
        BROADPHASE_BORDER_REMOVE_ENTITY,
        BROADPHASE_BORDER_DO_NOTHING
    };
    enum TreeUpdateType { REBUILD_ACTIVE, REBUILD_ALL };

    hkpWorldCinfo();
    HK_FORCE_INLINE hkpWorldCinfo(hkFinishLoadedObjectFlag flag)
        : hkReferencedObject(flag), m_collisionFilter(flag), m_convexListFilter(flag), m_memoryWatchDog(flag)
    {
        if (flag.m_finishing && m_contactRestingVelocity == 0.0f)
            m_contactRestingVelocity = 1.0f;
    }
    virtual ~hkpWorldCinfo() {}

    hkVector4 m_gravity;                                                      // +0x10
    hkInt32 m_broadPhaseQuerySize;                                            // +0x20
    hkReal m_contactRestingVelocity;                                          // +0x24
    hkEnum<BroadPhaseBorderBehaviour, hkInt8> m_broadPhaseBorderBehaviour;    // +0x28
    hkBool m_mtPostponeAndSortBroadPhaseBorderCallbacks;                      // +0x29
    hkAabb m_broadPhaseWorldAabb;                                             // +0x30
    hkBool m_useKdTree;                                                       // +0x50
    hkBool m_useMultipleTree;                                                 // +0x51
    hkEnum<TreeUpdateType, hkInt8> m_treeUpdateType;                          // +0x52
    hkBool m_autoUpdateKdTree;                                                // +0x53
    hkReal m_collisionTolerance;                                              // +0x54
    hkRefPtr<hkpCollisionFilter> m_collisionFilter;                           // +0x58
    hkRefPtr<hkpConvexListFilter> m_convexListFilter;                         // +0x5C
    hkReal m_expectedMaxLinearVelocity;                                       // +0x60
    int m_sizeOfToiEventQueue;                                                // +0x64
    hkReal m_expectedMinPsiDeltaTime;                                         // +0x68
    // An hkWorldMemoryAvailableWatchDog, which has no header yet: the inline destructor needs the complete
    // class for the hkRefPtr.
    hkRefPtr<hkReferencedObject> m_memoryWatchDog;                            // +0x6C
    hkInt32 m_broadPhaseNumMarkers;                                           // +0x70
    hkEnum<ContactPointGeneration, hkInt8> m_contactPointGeneration;          // +0x74
    hkBool m_allowToSkipConfirmedCallbacks;                                   // +0x75
    hkReal m_solverTau;                                                       // +0x78
    hkReal m_solverDamp;                                                      // +0x7C
    hkInt32 m_solverIterations;                                               // +0x80
    hkInt32 m_solverMicrosteps;                                               // +0x84
    hkBool m_forceCoherentConstraintOrderingInSolver;                         // +0x88
    hkReal m_snapCollisionToConvexEdgeThreshold;                              // +0x8C
    hkReal m_snapCollisionToConcaveEdgeThreshold;                             // +0x90
    hkBool m_enableToiWeldRejection;                                          // +0x94
    hkBool m_enableDeprecatedWelding;                                         // +0x95
    hkReal m_iterativeLinearCastEarlyOutDistance;                             // +0x98
    hkInt32 m_iterativeLinearCastMaxIterations;                               // +0x9C
    hkUint8 m_deactivationNumInactiveFramesSelectFlag0;                       // +0xA0
    hkUint8 m_deactivationNumInactiveFramesSelectFlag1;                       // +0xA1
    hkUint8 m_deactivationIntegrateCounter;                                   // +0xA2
    hkBool m_shouldActivateOnRigidBodyTransformChange;                        // +0xA3
    hkReal m_deactivationReferenceDistance;                                   // +0xA4
    hkReal m_toiCollisionResponseRotateNormal;                                // +0xA8
    int m_maxSectorsPerCollideTask;                                           // +0xAC
    hkBool m_processToisMultithreaded;                                        // +0xB0
    int m_maxEntriesPerToiCollideTask;                                        // +0xB4
    int m_maxNumToiCollisionPairsSinglethreaded;                              // +0xB8
    hkReal m_numToisTillAllowedPenetrationSimplifiedToi;                      // +0xBC
    hkReal m_numToisTillAllowedPenetrationToi;                                // +0xC0
    hkReal m_numToisTillAllowedPenetrationToiHigher;                          // +0xC4
    hkReal m_numToisTillAllowedPenetrationToiForced;                          // +0xC8
    hkBool m_enableDeactivation;                                              // +0xCC
    hkEnum<SimulationType, hkInt8> m_simulationType;                          // +0xCD
    hkBool m_enableSimulationIslands;                                         // +0xCE
    hkUint32 m_minDesiredIslandSize;                                          // +0xD0
    hkBool m_processActionsInSingleThread;                                    // +0xD4
    hkBool m_allowIntegrationOfIslandsWithoutConstraintsInASeparateJob;       // +0xD5
    hkReal m_frameMarkerPsiSnap;                                              // +0xD8
    hkBool m_fireCollisionCallbacks;                                          // +0xDC
};

#endif
