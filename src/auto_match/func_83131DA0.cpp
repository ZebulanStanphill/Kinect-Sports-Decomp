// hkpWorldClass's static initializer (Physics/Dynamics/World/hkpWorldClass.cpp, Havok's generated
// reflection): hkClass::hkClass (fn_82CEB3D8, keeps its fn_ name) on lbl_8323D7F0 = hkpWorldClass.
// The file's constant data is defined here as in the original, in its .rdata order from 0x8213DC50:
// the enum item arrays and enum tables of hkpWorld.h and hkpWorld, then hkpWorldClass_Members.
// The enums (lbl_8213DD54) and members (+0x3c) are separate statics: MSVC materialises their
// addresses separately during register allocation (numMembers ends up in r31) and only then folds
// the members' address into lbl_8213DD54 + 0x3c, so neither one array nor an extern
// lbl_8213DD54 + 0x3c reproduces the original. The members array is named LAB_8213DD90 because
// objdiff skips LAB_ names when sizing symbols, so it resolves the folded address to
// lbl_8213DD54 + 0x3c, as it does in the original object, where the data is external.
#include "havok/hkBaseTypes.h"

class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;

// The POD images of hkClassEnum::Item, hkClassEnum and hkClassMember that Havok's
// generated reflection files define (Common/Base/Reflection/hkInternalClassMember.h).
struct hkInternalClassEnumItem {
    int m_value;
    const char *m_name;
};
struct hkInternalClassEnum {
    const char *m_name;
    const hkInternalClassEnumItem *m_items;
    int m_numItems;
    const hkCustomAttributes *m_attributes;
    hkUint32 m_flags;
};
struct hkInternalClassMember {
    const char *m_name;
    const hkClass *m_class;
    const hkClassEnum *m_enum;
    hkUint8 m_type;
    hkUint8 m_subtype;
    hkInt16 m_cArraySize;
    hkUint16 m_flags;
    hkUint16 m_offset;
    const hkCustomAttributes *m_attributes;
};

// hkClassMember::Type and hkClassMember::FlagValues
enum {
    TYPE_VOID = 0, TYPE_BOOL = 1, TYPE_INT8 = 3, TYPE_UINT8 = 4, TYPE_INT32 = 7, TYPE_UINT32 = 8,
    TYPE_REAL = 11, TYPE_VECTOR4 = 12, TYPE_POINTER = 20, TYPE_ARRAY = 22, TYPE_ENUM = 24, TYPE_STRUCT = 25
};
enum { SERIALIZE_IGNORED = 0x400 };

extern "C" {
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent, int objectSize,
    const hkClass **interfaces, int numInterfaces, const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, hkUint32 flags, hkUint32 version);   // hkClass::hkClass
extern hkClass lbl_8323D7F0;          // hkpWorldClass
extern const hkClass lbl_8323AB38;    // hkReferencedObjectClass
extern const hkClass lbl_8323D5D0;    // hkpSimulationClass
extern const hkClass lbl_8323D4C0;    // hkpRigidBodyClass
extern const hkClass lbl_8323B0A8;    // hkMultiThreadCheckClass
extern const hkClass lbl_8323E170;    // hkpPhantomClass
}

// Global enums (hkpWorld.h)
// hkpUpdateCollisionFilterOnWorldMode
static const hkInternalClassEnumItem lbl_8213DC50[] = {
    { 0, "HK_UPDATE_FILTER_ON_WORLD_FULL_CHECK" },
    { 1, "HK_UPDATE_FILTER_ON_WORLD_DISABLE_ENTITY_ENTITY_COLLISIONS_ONLY" },
};
// hkpUpdateCollisionFilterOnEntityMode
static const hkInternalClassEnumItem lbl_8213DC60[] = {
    { 0, "HK_UPDATE_FILTER_ON_ENTITY_FULL_CHECK" },
    { 1, "HK_UPDATE_FILTER_ON_ENTITY_DISABLE_ENTITY_ENTITY_COLLISIONS_ONLY" },
};
// hkpEntityActivation
static const hkInternalClassEnumItem lbl_8213DC70[] = {
    { 0, "HK_ENTITY_ACTIVATION_DO_NOT_ACTIVATE" },
    { 1, "HK_ENTITY_ACTIVATION_DO_ACTIVATE" },
};
// hkpUpdateCollectionFilterMode
static const hkInternalClassEnumItem lbl_8213DC80[] = {
    { 0, "HK_UPDATE_COLLECTION_FILTER_IGNORE_SHAPE_COLLECTIONS" },
    { 1, "HK_UPDATE_COLLECTION_FILTER_PROCESS_SHAPE_COLLECTIONS" },
};
// hkpStepResult
static const hkInternalClassEnumItem lbl_8213DC90[] = {
    { 0, "HK_STEP_RESULT_SUCCESS" },
    { 1, "HK_STEP_RESULT_MEMORY_FAILURE_BEFORE_INTEGRATION" },
    { 2, "HK_STEP_RESULT_MEMORY_FAILURE_DURING_COLLIDE" },
    { 3, "HK_STEP_RESULT_MEMORY_FAILURE_DURING_TOI_SOLVE" },
};
static const hkInternalClassEnum lbl_8213DCB0[] = {
    { "hkpUpdateCollisionFilterOnWorldMode", lbl_8213DC50, 2, HK_NULL, 0 },
    { "hkpUpdateCollisionFilterOnEntityMode", lbl_8213DC60, 2, HK_NULL, 0 },
    { "hkpEntityActivation", lbl_8213DC70, 2, HK_NULL, 0 },
    { "hkpUpdateCollectionFilterMode", lbl_8213DC80, 2, HK_NULL, 0 },
    { "hkpStepResult", lbl_8213DC90, 4, HK_NULL, 0 },
};
const hkClassEnum *hkpUpdateCollisionFilterOnWorldModeEnum = reinterpret_cast<const hkClassEnum *>(&lbl_8213DCB0[0]);
const hkClassEnum *hkpUpdateCollisionFilterOnEntityModeEnum = reinterpret_cast<const hkClassEnum *>(&lbl_8213DCB0[1]);
const hkClassEnum *hkpEntityActivationEnum = reinterpret_cast<const hkClassEnum *>(&lbl_8213DCB0[2]);
const hkClassEnum *hkpUpdateCollectionFilterModeEnum = reinterpret_cast<const hkClassEnum *>(&lbl_8213DCB0[3]);
const hkClassEnum *hkpStepResultEnum = reinterpret_cast<const hkClassEnum *>(&lbl_8213DCB0[4]);

// hkpWorld::ReintegrationRecollideMode
static const hkInternalClassEnumItem lbl_8213DD14[] = {
    { 1, "RR_MODE_REINTEGRATE" },
    { 2, "RR_MODE_RECOLLIDE_BROADPHASE" },
    { 4, "RR_MODE_RECOLLIDE_NARROWPHASE" },
    { 7, "RR_MODE_ALL" },
};
// hkpWorld::MtAccessChecking
static const hkInternalClassEnumItem lbl_8213DD34[] = {
    { 0, "MT_ACCESS_CHECKING_ENABLED" },
    { 1, "MT_ACCESS_CHECKING_DISABLED" },
};
// hkpWorld::CachedAabbUpdate
static const hkInternalClassEnumItem lbl_8213DD44[] = {
    { 0, "SHIFT_BROADPHASE_UPDATE_ENTITY_AABBS" },
    { 1, "SHIFT_BROADPHASE_IGNORE_ENTITY_AABBS" },
};
static const hkInternalClassEnum lbl_8213DD54[] = {
    { "ReintegrationRecollideMode", lbl_8213DD14, 4, HK_NULL, 0 },
    { "MtAccessChecking", lbl_8213DD34, 2, HK_NULL, 0 },
    { "CachedAabbUpdate", lbl_8213DD44, 2, HK_NULL, 0 },
};
const hkClassEnum *hkpWorldReintegrationRecollideModeEnum = reinterpret_cast<const hkClassEnum *>(&lbl_8213DD54[0]);
const hkClassEnum *hkpWorldMtAccessCheckingEnum = reinterpret_cast<const hkClassEnum *>(&lbl_8213DD54[1]);
const hkClassEnum *hkpWorldCachedAabbUpdateEnum = reinterpret_cast<const hkClassEnum *>(&lbl_8213DD54[2]);

// hkpWorldClass_Members
static const hkInternalClassMember LAB_8213DD90[] = {
    { "simulation", &lbl_8323D5D0, HK_NULL, TYPE_POINTER, TYPE_STRUCT, 0, 0, 0x8, HK_NULL },
    { "gravity", HK_NULL, HK_NULL, TYPE_VECTOR4, TYPE_VOID, 0, 0, 0x10, HK_NULL },
    { "fixedIsland", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x20, HK_NULL },
    { "fixedRigidBody", &lbl_8323D4C0, HK_NULL, TYPE_POINTER, TYPE_STRUCT, 0, 0, 0x24, HK_NULL },
    { "activeSimulationIslands", HK_NULL, HK_NULL, TYPE_ARRAY, TYPE_POINTER, 0, SERIALIZE_IGNORED, 0x28, HK_NULL },
    { "inactiveSimulationIslands", HK_NULL, HK_NULL, TYPE_ARRAY, TYPE_POINTER, 0, SERIALIZE_IGNORED, 0x34, HK_NULL },
    { "dirtySimulationIslands", HK_NULL, HK_NULL, TYPE_ARRAY, TYPE_POINTER, 0, SERIALIZE_IGNORED, 0x40, HK_NULL },
    { "maintenanceMgr", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x4c, HK_NULL },
    { "memoryWatchDog", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x50, HK_NULL },
    { "assertOnRunningOutOfSolverMemory", HK_NULL, HK_NULL, TYPE_BOOL, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x54, HK_NULL },
    { "broadPhase", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x58, HK_NULL },
    { "kdTreeManager", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x5c, HK_NULL },
    { "autoUpdateTree", HK_NULL, HK_NULL, TYPE_BOOL, TYPE_VOID, 0, 0, 0x60, HK_NULL },
    { "broadPhaseDispatcher", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x64, HK_NULL },
    { "phantomBroadPhaseListener", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x68, HK_NULL },
    { "entityEntityBroadPhaseListener", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x6c, HK_NULL },
    { "broadPhaseBorderListener", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x70, HK_NULL },
    { "multithreadedSimulationJobData", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x74, HK_NULL },
    { "collisionInput", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x78, HK_NULL },
    { "collisionFilter", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x7c, HK_NULL },
    { "collisionDispatcher", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x80, HK_NULL },
    { "convexListFilter", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x84, HK_NULL },
    { "pendingOperations", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x88, HK_NULL },
    { "pendingOperationsCount", HK_NULL, HK_NULL, TYPE_INT32, TYPE_VOID, 0, 0, 0x8c, HK_NULL },
    { "pendingBodyOperationsCount", HK_NULL, HK_NULL, TYPE_INT32, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x90, HK_NULL },
    { "criticalOperationsLockCount", HK_NULL, HK_NULL, TYPE_INT32, TYPE_VOID, 0, 0, 0x94, HK_NULL },
    { "criticalOperationsLockCountForPhantoms", HK_NULL, HK_NULL, TYPE_INT32, TYPE_VOID, 0, 0, 0x98, HK_NULL },
    { "blockExecutingPendingOperations", HK_NULL, HK_NULL, TYPE_BOOL, TYPE_VOID, 0, 0, 0x9c, HK_NULL },
    { "criticalOperationsAllowed", HK_NULL, HK_NULL, TYPE_BOOL, TYPE_VOID, 0, 0, 0x9d, HK_NULL },
    { "pendingOperationQueues", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0xa0, HK_NULL },
    { "pendingOperationQueueCount", HK_NULL, HK_NULL, TYPE_INT32, TYPE_VOID, 0, 0, 0xa4, HK_NULL },
    { "multiThreadCheck", &lbl_8323B0A8, HK_NULL, TYPE_STRUCT, TYPE_VOID, 0, SERIALIZE_IGNORED, 0xa8, HK_NULL },
    { "processActionsInSingleThread", HK_NULL, HK_NULL, TYPE_BOOL, TYPE_VOID, 0, 0, 0xb0, HK_NULL },
    { "minDesiredIslandSize", HK_NULL, HK_NULL, TYPE_UINT32, TYPE_VOID, 0, 0, 0xb4, HK_NULL },
    { "modifyConstraintCriticalSection", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0xb8, HK_NULL },
    { "isLocked", HK_NULL, HK_NULL, TYPE_INT32, TYPE_VOID, 0, 0, 0xbc, HK_NULL },
    { "islandDirtyListCriticalSection", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0xc0, HK_NULL },
    { "propertyMasterLock", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0xc4, HK_NULL },
    { "wantSimulationIslands", HK_NULL, HK_NULL, TYPE_BOOL, TYPE_VOID, 0, 0, 0xc8, HK_NULL },
    { "snapCollisionToConvexEdgeThreshold", HK_NULL, HK_NULL, TYPE_REAL, TYPE_VOID, 0, 0, 0xcc, HK_NULL },
    { "snapCollisionToConcaveEdgeThreshold", HK_NULL, HK_NULL, TYPE_REAL, TYPE_VOID, 0, 0, 0xd0, HK_NULL },
    { "enableToiWeldRejection", HK_NULL, HK_NULL, TYPE_BOOL, TYPE_VOID, 0, 0, 0xd4, HK_NULL },
    { "wantDeactivation", HK_NULL, HK_NULL, TYPE_BOOL, TYPE_VOID, 0, 0, 0xd5, HK_NULL },
    { "shouldActivateOnRigidBodyTransformChange", HK_NULL, HK_NULL, TYPE_BOOL, TYPE_VOID, 0, 0, 0xd6, HK_NULL },
    { "deactivationReferenceDistance", HK_NULL, HK_NULL, TYPE_REAL, TYPE_VOID, 0, 0, 0xd8, HK_NULL },
    { "toiCollisionResponseRotateNormal", HK_NULL, HK_NULL, TYPE_REAL, TYPE_VOID, 0, 0, 0xdc, HK_NULL },
    { "maxSectorsPerCollideTask", HK_NULL, HK_NULL, TYPE_INT32, TYPE_VOID, 0, 0, 0xe0, HK_NULL },
    { "processToisMultithreaded", HK_NULL, HK_NULL, TYPE_BOOL, TYPE_VOID, 0, 0, 0xe4, HK_NULL },
    { "maxEntriesPerToiCollideTask", HK_NULL, HK_NULL, TYPE_INT32, TYPE_VOID, 0, 0, 0xe8, HK_NULL },
    { "maxNumToiCollisionPairsSinglethreaded", HK_NULL, HK_NULL, TYPE_INT32, TYPE_VOID, 0, 0, 0xec, HK_NULL },
    { "simulationType", HK_NULL, HK_NULL, TYPE_ENUM, TYPE_INT32, 0, SERIALIZE_IGNORED, 0xf0, HK_NULL },
    { "numToisTillAllowedPenetrationSimplifiedToi", HK_NULL, HK_NULL, TYPE_REAL, TYPE_VOID, 0, 0, 0xf4, HK_NULL },
    { "numToisTillAllowedPenetrationToi", HK_NULL, HK_NULL, TYPE_REAL, TYPE_VOID, 0, 0, 0xf8, HK_NULL },
    { "numToisTillAllowedPenetrationToiHigher", HK_NULL, HK_NULL, TYPE_REAL, TYPE_VOID, 0, 0, 0xfc, HK_NULL },
    { "numToisTillAllowedPenetrationToiForced", HK_NULL, HK_NULL, TYPE_REAL, TYPE_VOID, 0, 0, 0x100, HK_NULL },
    { "compressedMeshShapeOnSpu", HK_NULL, HK_NULL, TYPE_BOOL, TYPE_VOID, 0, 0, 0x104, HK_NULL },
    { "lastEntityUid", HK_NULL, HK_NULL, TYPE_UINT32, TYPE_VOID, 0, 0, 0x108, HK_NULL },
    { "lastIslandUid", HK_NULL, HK_NULL, TYPE_UINT32, TYPE_VOID, 0, 0, 0x10c, HK_NULL },
    { "lastConstraintUid", HK_NULL, HK_NULL, TYPE_UINT32, TYPE_VOID, 0, 0, 0x110, HK_NULL },
    { "phantoms", &lbl_8323E170, HK_NULL, TYPE_ARRAY, TYPE_POINTER, 0, 0, 0x114, HK_NULL },
    { "actionListeners", HK_NULL, HK_NULL, TYPE_ARRAY, TYPE_POINTER, 0, SERIALIZE_IGNORED, 0x120, HK_NULL },
    { "entityListeners", HK_NULL, HK_NULL, TYPE_ARRAY, TYPE_POINTER, 0, SERIALIZE_IGNORED, 0x12c, HK_NULL },
    { "phantomListeners", HK_NULL, HK_NULL, TYPE_ARRAY, TYPE_POINTER, 0, SERIALIZE_IGNORED, 0x138, HK_NULL },
    { "constraintListeners", HK_NULL, HK_NULL, TYPE_ARRAY, TYPE_POINTER, 0, SERIALIZE_IGNORED, 0x144, HK_NULL },
    { "worldDeletionListeners", HK_NULL, HK_NULL, TYPE_ARRAY, TYPE_POINTER, 0, SERIALIZE_IGNORED, 0x150, HK_NULL },
    { "islandActivationListeners", HK_NULL, HK_NULL, TYPE_ARRAY, TYPE_POINTER, 0, SERIALIZE_IGNORED, 0x15c, HK_NULL },
    { "worldPostSimulationListeners", HK_NULL, HK_NULL, TYPE_ARRAY, TYPE_POINTER, 0, SERIALIZE_IGNORED, 0x168, HK_NULL },
    { "worldPostIntegrateListeners", HK_NULL, HK_NULL, TYPE_ARRAY, TYPE_POINTER, 0, SERIALIZE_IGNORED, 0x174, HK_NULL },
    { "worldPostCollideListeners", HK_NULL, HK_NULL, TYPE_ARRAY, TYPE_POINTER, 0, SERIALIZE_IGNORED, 0x180, HK_NULL },
    { "islandPostIntegrateListeners", HK_NULL, HK_NULL, TYPE_ARRAY, TYPE_POINTER, 0, SERIALIZE_IGNORED, 0x18c, HK_NULL },
    { "islandPostCollideListeners", HK_NULL, HK_NULL, TYPE_ARRAY, TYPE_POINTER, 0, SERIALIZE_IGNORED, 0x198, HK_NULL },
    { "contactListeners", HK_NULL, HK_NULL, TYPE_ARRAY, TYPE_POINTER, 0, SERIALIZE_IGNORED, 0x1a4, HK_NULL },
    { "contactImpulseLimitBreachedListeners", HK_NULL, HK_NULL, TYPE_ARRAY, TYPE_POINTER, 0, SERIALIZE_IGNORED, 0x1b0, HK_NULL },
    { "broadPhaseBorder", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x1bc, HK_NULL },
    { "collisionCallbackUtil", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x1c0, HK_NULL },
    { "destructionWorld", HK_NULL, HK_NULL, TYPE_POINTER, TYPE_VOID, 0, SERIALIZE_IGNORED, 0x1c4, HK_NULL },
    { "broadPhaseExtents", HK_NULL, HK_NULL, TYPE_VECTOR4, TYPE_VOID, 2, 0, 0x310, HK_NULL },
    { "broadPhaseNumMarkers", HK_NULL, HK_NULL, TYPE_INT32, TYPE_VOID, 0, 0, 0x330, HK_NULL },
    { "sizeOfToiEventQueue", HK_NULL, HK_NULL, TYPE_INT32, TYPE_VOID, 0, 0, 0x334, HK_NULL },
    { "broadPhaseQuerySize", HK_NULL, HK_NULL, TYPE_INT32, TYPE_VOID, 0, 0, 0x338, HK_NULL },
    { "broadPhaseUpdateSize", HK_NULL, HK_NULL, TYPE_INT32, TYPE_VOID, 0, 0, 0x33c, HK_NULL },
    { "contactPointGeneration", HK_NULL, HK_NULL, TYPE_ENUM, TYPE_INT8, 0, SERIALIZE_IGNORED, 0x340, HK_NULL },
};

extern "C" void fn_83131DA0()
{
    fn_82CEB3D8(&lbl_8323D7F0, "hkpWorld", &lbl_8323AB38, 0x350, HK_NULL, 0,
        reinterpret_cast<const hkClassEnum *>(lbl_8213DD54), 3,
        reinterpret_cast<const hkClassMember *>(LAB_8213DD90), sizeof(LAB_8213DD90) / sizeof(LAB_8213DD90[0]),
        HK_NULL, HK_NULL, 1, 0);
}
