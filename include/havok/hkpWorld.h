// hkpWorld (Physics/Dynamics/World/hkpWorld.h), 0x350 bytes: the simulation world.
// The layout is the game's:
//  - the constructor (82D86990, hkpWorld(const hkpWorldCinfo &, unsigned int sdkVersion)) copies the
//    construction info into the settings from +0xB0 to +0x100 and +0x330 to +0x340, creates the
//    maintenance manager (+0x4C, hkpDefaultWorldMaintenanceMgr), the tree manager (+0x5C, an
//    hkpKdTreeWorldManager or an hkpAabbTreeWorldManager, with the cinfo's m_autoUpdateKdTree at +0x60), the
//    broad-phase border (+0x1BC, hkpBroadPhaseBorder) and, when the cinfo asks for collision callbacks, the
//    collision callback utility (+0x1C0, through hkpCollisionCallbackUtil::requireCollisionCallbackUtil,
//    82DB4298);
//  - the destructor (fn_82D846E0) releases or frees every owned pointer, which gives the pointer members
//    from +0x8 to +0x88, the three critical sections (0x1C bytes) at +0xB8, +0xC0 and +0xC4 and the 14 arrays
//    from +0x114;
//  - the add/remove listener functions (82D83D30.., 82D813C0..) give the listener arrays from +0x120;
//  - hkpMultiThreadedSimulation's constructor (82DA9400) enables multithreading on +0x58 (the broad phase)
//    and sets broad-phase listeners through +0x64; hkpSimpleConstraintContactMgr (82DAC350) reads the
//    dispatcher at +0x80, hkpShapePhantom (82D99E00) the collision input at +0x78.
// The member names follow Havok's header (which has the same members in the same order); where the game
// has a member that Havok's header does not explain, the member keeps its offset as a name.
#ifndef HAVOK_HKPWORLD_H
#define HAVOK_HKPWORLD_H

#include "havok/hkBase.h"
#include "havok/hkMultiThreadCheck.h"
#include "havok/hkpSolverInfo.h"
#include "havok/hkVector4.h"

// The SDK version the game's Havok passes to hkpWorld's constructor (hkpPhysicsData::createWorld and game code
// pass 70000).
#ifndef HAVOK_SDK_VERSION_NUMBER
#define HAVOK_SDK_VERSION_NUMBER 70000
#endif

class hkCriticalSection;
class hkpActionListener;
class hkpBroadPhase;
class hkpBroadPhaseBorder;
class hkpBroadPhaseBorderListener;
class hkpCollisionCallbackUtil;
class hkpCollisionDispatcher;
class hkpCollisionFilter;
class hkpConstraintListener;
class hkpContactImpulseLimitBreachedListener;
class hkpContactListener;
class hkpConvexListFilter;
class hkpEntityEntityBroadPhaseListener;
class hkpEntityListener;
class hkpIslandActivationListener;
class hkpIslandPostCollideListener;
class hkpIslandPostIntegrateListener;
class hkpPhantom;
class hkpPhantomBroadPhaseListener;
class hkpPhantomListener;
struct hkpProcessCollisionInput;
class hkpRigidBody;
class hkpSimulation;
class hkpSimulationIsland;
class hkpTreeWorldManager;
class hkpTypedBroadPhaseDispatcher;
class hkpWorld;
class hkpWorldCinfo;
class hkpWorldDeletionListener;
class hkpWorldMaintenanceMgr;
class hkpWorldOperationQueue;
class hkpWorldPostCollideListener;
class hkpWorldPostIntegrateListener;
class hkpWorldPostSimulationListener;
struct hkpDebugInfoOnPendingOperationQueues;
struct hkpMtThreadStructure;

// Out of line in hkpWorld.cpp:
extern "C" {
hkpPhantom *fn_82D83B68(hkpWorld *world, hkpPhantom *phantom);                 // addPhantom
// removePhantomBatch (hkpBroadPhaseBorder's deactivate calls it on its six phantoms):
void fn_82D86660(hkpWorld *world, hkpPhantom *const *phantoms, int numPhantoms);
}

class hkpWorld : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_WORLD);

    // The world is not serialised. The finish constructor (82D845F0, called by hkpWorld's getVtable and
    // finishLoadedObject functions) runs hkReferencedObject's default constructor (m_referenceCount = 1) and
    // default-constructs the members that have constructors, except m_phantoms, which it leaves alone.
    // Out of line (82D86990, no source yet).
    hkpWorld(const hkpWorldCinfo &info, unsigned int sdkVersion = HAVOK_SDK_VERSION_NUMBER);
    hkpWorld(hkFinishLoadedObjectFlag flag);
    // Out of line (fn_82D846E0).
    virtual ~hkpWorld();

    hkpPhantom *addPhantom(hkpPhantom *phantom) { return fn_82D83B68(this, phantom); }
    void removePhantomBatch(hkpPhantom *const *phantoms, int numPhantoms) { fn_82D86660(this, phantoms, numPhantoms); }

    // The listener functions are out of line. Each add function appends to its array, each remove function
    // finds the listener and clears its entry. The arrays of the action, post-integrate and post-collide
    // listeners have add and remove functions too (82D83CB8.., 82D81378..), which keep their fn_ names.
    void addConstraintListener(hkpConstraintListener *worldListener);
    void addEntityListener(hkpEntityListener *worldListener);
    void addPhantomListener(hkpPhantomListener *worldListener);
    void addIslandActivationListener(hkpIslandActivationListener *worldListener);
    void addWorldPostSimulationListener(hkpWorldPostSimulationListener *worldListener);
    void addWorldDeletionListener(hkpWorldDeletionListener *worldListener);
    void addContactImpulseLimitBreachedListener(hkpContactImpulseLimitBreachedListener *worldListener);
    void addContactListener(hkpContactListener *worldListener);
    void removeConstraintListener(hkpConstraintListener *worldListener);
    void removeEntityListener(hkpEntityListener *worldListener);
    void removePhantomListener(hkpPhantomListener *worldListener);
    void removeIslandActivationListener(hkpIslandActivationListener *worldListener);
    void removeWorldPostSimulationListener(hkpWorldPostSimulationListener *worldListener);
    void removeWorldDeletionListener(hkpWorldDeletionListener *worldListener);
    void removeContactImpulseLimitBreachedListener(hkpContactImpulseLimitBreachedListener *worldListener);
    void removeContactListener(hkpContactListener *worldListener);

    HK_FORCE_INLINE const hkpProcessCollisionInput *getCollisionInput() const { return m_collisionInput; }
    HK_FORCE_INLINE hkpCollisionDispatcher *getCollisionDispatcher() const { return m_collisionDispatcher; }

    hkpSimulation *m_simulation;                                        // +0x8
    hkUint8 m_pad0C[4];                                                 // +0xC
    hkVector4 m_gravity;                                                // +0x10
    hkpSimulationIsland *m_fixedIsland;                                 // +0x20
    hkpRigidBody *m_fixedRigidBody;                                     // +0x24
    hkArray<hkpSimulationIsland *> m_activeSimulationIslands;           // +0x28
    hkArray<hkpSimulationIsland *> m_inactiveSimulationIslands;         // +0x34
    hkArray<hkpSimulationIsland *> m_dirtySimulationIslands;            // +0x40
    hkpWorldMaintenanceMgr *m_maintenanceMgr;                           // +0x4C
    // An hkWorldMemoryAvailableWatchDog, which has no header yet: the inline finish constructor would need the
    // complete class for the hkRefPtr.
    hkRefPtr<hkReferencedObject> m_memoryWatchDog;                      // +0x50
    hkBool m_assertOnRunningOutOfSolverMemory;                          // +0x54
    hkpBroadPhase *m_broadPhase;                                        // +0x58
    hkpTreeWorldManager *m_kdTreeManager;                               // +0x5C
    hkBool m_autoUpdateTree;                                            // +0x60
    hkpTypedBroadPhaseDispatcher *m_broadPhaseDispatcher;               // +0x64
    hkpPhantomBroadPhaseListener *m_phantomBroadPhaseListener;          // +0x68
    hkpEntityEntityBroadPhaseListener *m_entityEntityBroadPhaseListener;   // +0x6C
    hkpBroadPhaseBorderListener *m_broadPhaseBorderListener;            // +0x70
    hkpMtThreadStructure *m_multithreadedSimulationJobData;             // +0x74: 0x100 bytes
    hkpProcessCollisionInput *m_collisionInput;                         // +0x78
    hkpCollisionFilter *m_collisionFilter;                              // +0x7C
    hkpCollisionDispatcher *m_collisionDispatcher;                      // +0x80
    hkpConvexListFilter *m_convexListFilter;                            // +0x84
    hkpWorldOperationQueue *m_pendingOperations;                        // +0x88: 0x28 bytes
    int m_pendingOperationsCount;                                       // +0x8C
    int m_pendingBodyOperationsCount;                                   // +0x90
    int m_criticalOperationsLockCount;                                  // +0x94
    int m_criticalOperationsLockCountForPhantoms;                       // +0x98
    hkBool m_blockExecutingPendingOperations;                           // +0x9C
    hkBool m_criticalOperationsAllowed;                                 // +0x9D
    hkpDebugInfoOnPendingOperationQueues *m_pendingOperationQueues;     // +0xA0
    int m_pendingOperationQueueCount;                                   // +0xA4
    mutable hkMultiThreadCheck m_multiThreadCheck;                      // +0xA8
    hkBool m_processActionsInSingleThread;                              // +0xB0
    hkBool m_allowIntegrationOfIslandsWithoutConstraintsInASeparateJob;   // +0xB1
    hkUint32 m_minDesiredIslandSize;                                    // +0xB4
    hkCriticalSection *m_modifyConstraintCriticalSection;               // +0xB8
    int m_isLocked;                                                     // +0xBC
    hkCriticalSection *m_islandDirtyListCriticalSection;                // +0xC0
    hkCriticalSection *m_propertyMasterLock;                            // +0xC4
    hkBool m_wantSimulationIslands;                                     // +0xC8
    hkUint8 m_padC9[3];                                                 // +0xC9: not seen written
    hkReal m_snapCollisionToConvexEdgeThreshold;                        // +0xCC
    hkReal m_snapCollisionToConcaveEdgeThreshold;                       // +0xD0
    hkBool m_enableToiWeldRejection;                                    // +0xD4
    hkBool m_wantDeactivation;                                          // +0xD5
    hkBool m_shouldActivateOnRigidBodyTransformChange;                  // +0xD6
    hkReal m_deactivationReferenceDistance;                             // +0xD8
    hkReal m_toiCollisionResponseRotateNormal;                          // +0xDC
    int m_maxSectorsPerCollideTask;                                     // +0xE0
    hkBool m_processToisMultithreaded;                                  // +0xE4
    int m_maxEntriesPerToiCollideTask;                                  // +0xE8
    int m_maxNumToiCollisionPairsSinglethreaded;                        // +0xEC
    hkInt32 m_simulationType;                                           // +0xF0: hkpWorldCinfo::SimulationType
    hkReal m_numToisTillAllowedPenetrationSimplifiedToi;                // +0xF4
    hkReal m_numToisTillAllowedPenetrationToi;                          // +0xF8
    hkReal m_numToisTillAllowedPenetrationToiHigher;                    // +0xFC
    hkReal m_numToisTillAllowedPenetrationToiForced;                    // +0x100
    // The constructor clears the byte at +0x104 and stores the same value at +0x108 and +0x110; what they
    // are is not known.
    hkUint8 m_unknown104[0x10];                                         // +0x104
    hkArray<hkpPhantom *> m_phantoms;                                   // +0x114
    hkArray<hkpActionListener *> m_actionListeners;                     // +0x120
    hkArray<hkpEntityListener *> m_entityListeners;                     // +0x12C
    hkArray<hkpPhantomListener *> m_phantomListeners;                   // +0x138
    hkArray<hkpConstraintListener *> m_constraintListeners;             // +0x144
    hkArray<hkpWorldDeletionListener *> m_worldDeletionListeners;       // +0x150
    hkArray<hkpIslandActivationListener *> m_islandActivationListeners;   // +0x15C
    hkArray<hkpWorldPostSimulationListener *> m_worldPostSimulationListeners;   // +0x168
    hkArray<hkpWorldPostIntegrateListener *> m_worldPostIntegrateListeners;     // +0x174
    hkArray<hkpWorldPostCollideListener *> m_worldPostCollideListeners;         // +0x180
    hkArray<hkpIslandPostIntegrateListener *> m_islandPostIntegrateListeners;   // +0x18C
    hkArray<hkpIslandPostCollideListener *> m_islandPostCollideListeners;       // +0x198
    hkArray<hkpContactListener *> m_contactListeners;                           // +0x1A4
    hkArray<hkpContactImpulseLimitBreachedListener *> m_contactImpulseLimitBreachedListeners;   // +0x1B0
    hkpBroadPhaseBorder *m_broadPhaseBorder;                            // +0x1BC
    hkpCollisionCallbackUtil *m_collisionCallbackUtil;                  // +0x1C0
    hkUint32 m_unknown1C4;                                              // +0x1C4: cleared by the constructor
    hkUint8 m_pad1C8[8];                                                // +0x1C8
    // An hkStepInfo, then the hkpSolverInfo at +0x1E0 (its deactivation selectors are at +0x305..+0x307:
    // hkpEntity::activate, 82D89BD8).
    hkpWorldDynamicsStepInfo m_dynamicsStepInfo;                        // +0x1D0, 0x140 bytes
    hkVector4 m_broadPhaseExtents[2];                                   // +0x310
    int m_broadPhaseNumMarkers;                                         // +0x330
    int m_sizeOfToiEventQueue;                                          // +0x334
    int m_broadPhaseQuerySize;                                          // +0x338
    int m_broadPhaseUpdateSize;                                         // +0x33C
    hkInt8 m_contactPointGeneration;                                    // +0x340: hkpWorldCinfo::ContactPointGeneration
    hkUint8 m_pad341[0xF];                                              // +0x341
};

#endif
