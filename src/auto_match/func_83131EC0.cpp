// hkpWorldCinfoClass's static initializer (Physics/Dynamics/World/hkpWorldCinfoClass.cpp, Havok's
// generated reflection): hkClass::hkClass (fn_82CEB3D8, keeps its fn_ name) on lbl_8323D830 =
// hkpWorldCinfoClass. The members (lbl_83183898) are in .data and stay external; the file's
// constant data is defined here as in the original, in its .rdata order from 0x8213E850: the
// enum item arrays, the enum table (lbl_8213E910) and hkpWorldCinfo_Default (+0x68).
// The enums and the defaults are separate statics: MSVC materialises their addresses separately
// during register allocation and only then folds the defaults' address into lbl_8213E910 + 0x68,
// so neither one object nor an extern lbl_8213E910 + 0x68 reproduces the original. The defaults
// are named LAB_8213E978 because objdiff skips LAB_ names when sizing symbols, so it resolves the
// folded address to lbl_8213E910 + 0x68, as it does in the original object, where the data is
// external. Havok code is /O2 (flag file).
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
extern hkClass lbl_8323D830;          // hkpWorldCinfoClass
extern const hkClass lbl_8323AB38;    // hkReferencedObjectClass
extern const hkInternalClassMember lbl_83183898[];   // hkpWorldCinfoClass_Members
}

// hkpWorldCinfo::SolverType
static const hkInternalClassEnumItem lbl_8213E850[] = {
    { 0, "SOLVER_TYPE_INVALID" },
    { 1, "SOLVER_TYPE_2ITERS_SOFT" },
    { 2, "SOLVER_TYPE_2ITERS_MEDIUM" },
    { 3, "SOLVER_TYPE_2ITERS_HARD" },
    { 4, "SOLVER_TYPE_4ITERS_SOFT" },
    { 5, "SOLVER_TYPE_4ITERS_MEDIUM" },
    { 6, "SOLVER_TYPE_4ITERS_HARD" },
    { 7, "SOLVER_TYPE_8ITERS_SOFT" },
    { 8, "SOLVER_TYPE_8ITERS_MEDIUM" },
    { 9, "SOLVER_TYPE_8ITERS_HARD" },
    { 10, "SOLVER_TYPE_MAX_ID" },
};
// hkpWorldCinfo::SimulationType
static const hkInternalClassEnumItem lbl_8213E8A8[] = {
    { 0, "SIMULATION_TYPE_INVALID" },
    { 1, "SIMULATION_TYPE_DISCRETE" },
    { 2, "SIMULATION_TYPE_CONTINUOUS" },
    { 3, "SIMULATION_TYPE_MULTITHREADED" },
};
// hkpWorldCinfo::ContactPointGeneration
static const hkInternalClassEnumItem lbl_8213E8C8[] = {
    { 0, "CONTACT_POINT_ACCEPT_ALWAYS" },
    { 1, "CONTACT_POINT_REJECT_DUBIOUS" },
    { 2, "CONTACT_POINT_REJECT_MANY" },
};
// hkpWorldCinfo::BroadPhaseBorderBehaviour
static const hkInternalClassEnumItem lbl_8213E8E0[] = {
    { 0, "BROADPHASE_BORDER_ASSERT" },
    { 1, "BROADPHASE_BORDER_FIX_ENTITY" },
    { 2, "BROADPHASE_BORDER_REMOVE_ENTITY" },
    { 3, "BROADPHASE_BORDER_DO_NOTHING" },
};
// hkpWorldCinfo::TreeUpdateType
static const hkInternalClassEnumItem lbl_8213E900[] = {
    { 0, "REBUILD_ACTIVE" },
    { 1, "REBUILD_ALL" },
};
static const hkInternalClassEnum lbl_8213E910[] = {
    { "SolverType", lbl_8213E850, 11, HK_NULL, 0 },
    { "SimulationType", lbl_8213E8A8, 4, HK_NULL, 0 },
    { "ContactPointGeneration", lbl_8213E8C8, 3, HK_NULL, 0 },
    { "BroadPhaseBorderBehaviour", lbl_8213E8E0, 4, HK_NULL, 0 },
    { "TreeUpdateType", lbl_8213E900, 2, HK_NULL, 0 },
};
const hkClassEnum *hkpWorldCinfoSolverTypeEnum = reinterpret_cast<const hkClassEnum *>(&lbl_8213E910[0]);
const hkClassEnum *hkpWorldCinfoSimulationTypeEnum = reinterpret_cast<const hkClassEnum *>(&lbl_8213E910[1]);
const hkClassEnum *hkpWorldCinfoContactPointGenerationEnum = reinterpret_cast<const hkClassEnum *>(&lbl_8213E910[2]);
const hkClassEnum *hkpWorldCinfoBroadPhaseBorderBehaviourEnum = reinterpret_cast<const hkClassEnum *>(&lbl_8213E910[3]);
const hkClassEnum *hkpWorldCinfoTreeUpdateTypeEnum = reinterpret_cast<const hkClassEnum *>(&lbl_8213E910[4]);

namespace {
// hkpWorldCinfo_DefaultStruct: offsets of each member's default value (-1: none), then the values.
struct hkpWorldCinfo_DefaultStruct {
    int s_defaultOffsets[52];
    hkReal m_gravity[4];
    hkInt32 m_broadPhaseQuerySize;
    hkInt8 m_autoUpdateKdTree;
    hkReal m_collisionTolerance;
    hkReal m_expectedMaxLinearVelocity;
    hkInt32 m_sizeOfToiEventQueue;
    hkReal m_expectedMinPsiDeltaTime;
    hkReal m_solverDamp;
    hkInt32 m_solverIterations;
    hkInt32 m_solverMicrosteps;
    hkReal m_snapCollisionToConvexEdgeThreshold;
    hkReal m_snapCollisionToConcaveEdgeThreshold;
    hkReal m_iterativeLinearCastEarlyOutDistance;
    hkInt32 m_iterativeLinearCastMaxIterations;
    hkInt8 m_shouldActivateOnRigidBodyTransformChange;
    hkReal m_deactivationReferenceDistance;
    hkReal m_toiCollisionResponseRotateNormal;
    hkInt32 m_maxSectorsPerCollideTask;
    hkInt8 m_processToisMultithreaded;
    hkInt32 m_maxEntriesPerToiCollideTask;
    hkInt32 m_maxNumToiCollisionPairsSinglethreaded;
    hkReal m_numToisTillAllowedPenetrationSimplifiedToi;
    hkReal m_numToisTillAllowedPenetrationToi;
    hkReal m_numToisTillAllowedPenetrationToiHigher;
    hkReal m_numToisTillAllowedPenetrationToiForced;
    hkInt8 m_enableDeactivation;
    hkInt8 m_enableSimulationIslands;
    hkUint32 m_minDesiredIslandSize;
    hkInt8 m_processActionsInSingleThread;
    hkReal m_frameMarkerPsiSnap;
};
}
static const hkpWorldCinfo_DefaultStruct LAB_8213E978 = {
    { 0xd0, 0xe0, -1, -1, -1, -1, -1, -1, -1, 0xe4, 0xe8, -1, -1, 0xec, 0xf0, 0xf4, -1, -1, -1, -1, -1, 0xf8, 0xfc, 0x100, -1, 0x104, 0x108, -1, -1, 0x10c, 0x110, -1, -1, -1, 0x114, 0x118, 0x11c, 0x120, 0x124, 0x128, 0x12c, 0x130, 0x134, 0x138, 0x13c, 0x140, -1, 0x141, 0x144, 0x148, 0x14c, -1 },
    { 0.0f, -9.8f, 0.0f, 0.0f },
    1024,
    1,
    0.1f,
    200.0f,
    250,
    0.033333335f,
    0.6f,
    4,
    1,
    0.524f,
    0.698f,
    0.01f,
    20,
    1,
    0.02f,
    0.2f,
    4,
    1,
    1,
    1,
    3.0f,
    3.0f,
    4.0f,
    20.0f,
    1,
    1,
    64,
    1,
    0.0001f,
};

extern "C" void fn_83131EC0()
{
    fn_82CEB3D8(&lbl_8323D830, "hkpWorldCinfo", &lbl_8323AB38, 0xe0, HK_NULL, 0,
        reinterpret_cast<const hkClassEnum *>(lbl_8213E910), 5,
        reinterpret_cast<const hkClassMember *>(lbl_83183898), 0x34,
        &LAB_8213E978, HK_NULL, 0, 6);
}
