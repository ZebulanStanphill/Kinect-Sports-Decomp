// hkpSimulationIsland's scalar deleting destructor ??_GhkpSimulationIsland@@UAAPAXI@Z
// (Physics/Dynamics/World/Simulation/hkpSimulationIsland.h): calls the out-of-line destructor
// (fn_82DAFEF0), then frees through the class allocator. The function at the end only makes the compiler
// emit the vtable, and with it this function.
#include "havok/hkBase.h"

class hkpWorld;
class hkpAction;
class hkpEntity;
struct hkpAgentNnSector;

struct hkpConstraintInfo {
    int m_maxSizeOfSchema;
    int m_sizeOfSchemas;
    int m_numSolverResults;
    int m_numSolverElemTemps;
};

class hkpConstraintOwner : public hkReferencedObject {
public:
    hkpConstraintInfo m_constraintInfo;   // +0x8
};

class hkpSimulationIsland : public hkpConstraintOwner {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    virtual ~hkpSimulationIsland();

    hkpWorld *m_world;                               // +0x18
    char m_state[0x38 - 0x1C];                       // +0x1C
    hkArray<hkpAction *> m_actions;                  // +0x38
    hkReal m_timeOfDeactivation;                     // +0x44
    hkArray<hkpEntity *> m_entities;                 // +0x48 hkInplaceArray<hkpEntity *, 1>
    hkpEntity *m_entitiesStorage[1];                 // +0x54
    hkUint16 m_bytesUsedInLastSector;                // +0x58 hkpAgentNnTrack m_narrowphaseAgentTrack
    hkUint8 m_nnTrackType;                           // +0x5A
    hkUint8 m_padding;                               // +0x5B
    hkArray<hkpAgentNnSector *> m_sectors;           // +0x5C hkInplaceArray<hkpAgentNnSector *, 1>
    hkpAgentNnSector *m_sectorsStorage[1];           // +0x68
};

void emitVtable_82DB01D0(void *p) { new (p) hkpSimulationIsland; }
