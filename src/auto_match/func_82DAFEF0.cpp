// hkpSimulationIsland::~hkpSimulationIsland (Physics/Dynamics/World/Simulation/hkpSimulationIsland.cpp): an empty user-written destructor; then the arrays (layout from the constructor, fn_82DB0088: m_actions at +0x38, the entities' hkInplaceArray at +0x48, the agent track's sector hkInplaceArray at +0x5C). The hkInplaceArrays are written as an hkArray plus its storage, since hkInplaceArray's implicit destructor is inlined here.
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
    hkArray<hkpEntity *> m_entities;                 // +0x48 hkInplaceArray<hkpEntity *, 1>: the array,
    hkpEntity *m_entitiesStorage[1];                 // +0x54 then its storage
    // hkpAgentNnTrack m_narrowphaseAgentTrack (+0x58), flattened: a struct member with an hkArray gets an
    // out-of-line implicit destructor, while the game inlines it.
    hkUint16 m_bytesUsedInLastSector;                // +0x58
    hkUint8 m_nnTrackType;                           // +0x5A
    hkUint8 m_padding;                               // +0x5B
    hkArray<hkpAgentNnSector *> m_sectors;           // +0x5C hkInplaceArray<hkpAgentNnSector *, 1>: the array,
    hkpAgentNnSector *m_sectorsStorage[1];           // +0x68 then its storage
};

hkpSimulationIsland::~hkpSimulationIsland()
{
}
