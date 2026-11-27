// hkpWorldCinfo::hkpWorldCinfo() (Physics/Dynamics/World/hkpWorldCinfo.cpp). Member names from the
// game's hkpWorldCinfo reflection strings. Havok code: /O2 /QVMXReserve (flag file).
//
// Havok writes literals. Vector literals become __vmx@ constants and float literals __real@ constants:
// the rename map gives the game's lbl_ copies of them (referenced by no Matching unit) those names, and
// symbols.txt already names 0.6f, 0.1f, 200.0f and 1.0f that way.
#include "havok/hkpWorldCinfo.h"
#include "havok/hkWorldMemoryAvailableWatchDog.h"

hkpWorldCinfo::hkpWorldCinfo()
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
