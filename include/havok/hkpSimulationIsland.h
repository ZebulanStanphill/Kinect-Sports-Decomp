// hkpSimulationIsland (Physics/Dynamics/World/Simulation/hkpSimulationIsland.h), 0x6C bytes: a group of
// entities, actions and constraints that is simulated and deactivated together.
//
// Layout from the constructor (fn_82DB0088, a C unit: hkpSimulationIsland(hkpWorld *)): m_world +0x18, +0x1C
// cleared, +0x22 set to 0xFFFF, the 2-bit fields of +0x25 cleared, +0x26 set to 0x50 (the first two fields of
// that byte set: m_isInActiveIslandsArray and m_activeMark), an hkMultiThreadCheck at +0x28 (0xFFFFFFD1, 0),
// +0x30 and +0x34 cleared, the actions' hkArray at +0x38, -10.0 at +0x44, an hkInplaceArray<.., 1> at +0x48
// (its storage at +0x54), the word 0x200 at +0x58 and a second hkInplaceArray<.., 1> at +0x5C (storage +0x68).
// The destructor (82DAFEF0) frees the three arrays. hkpEntity::activate (82D89BD8) reads m_activeMark as
// (byte +0x26 >> 4) & 3: bit-fields fill a byte from its high bits here. The agent sector job (82DC39A0) reads
// m_narrowphaseAgentTrack. The names of the members follow Havok's header; those of +0x1C..+0x25 and of
// +0x30/+0x34 are not checked against the game (no unit reads them).
//
// The two hkInplaceArrays and m_narrowphaseAgentTrack (hkpAgentNnTrack, +0x58) are written out flat, as an
// hkArray followed by its storage: with hkInplaceArray, or a struct member holding an hkArray, the compiler
// makes the member's implicit destructor an out-of-line call, while the game inlines the arrays' destructors
// into ~hkpSimulationIsland (82DAFEF0). The constructor stores 0x200 (the sector size) as one
// word, so m_bytesUsedInLastSector is an int here (82DC39A0's copy has it so).
#ifndef HAVOK_HKPSIMULATIONISLAND_H
#define HAVOK_HKPSIMULATIONISLAND_H

#include "havok/hkBase.h"
#include "havok/hkArray.h"
#include "havok/hkMultiThreadCheck.h"
#include "havok/hkpConstraintOwner.h"

class hkpWorld;
class hkpAction;
class hkpEntity;
struct hkpAgentNnSector;

class hkpSimulationIsland : public hkpConstraintOwner {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    // The constructor is out of line (fn_82DB0088) and is not declared: no unit calls it by name.
    virtual ~hkpSimulationIsland();   // 82DAFEF0

    HK_FORCE_INLINE int getActiveMark() const { return m_activeMark; }

    hkpWorld *m_world;                               // +0x18
    int m_numConstraints;                            // +0x1C
    hkUint16 m_storageIndex;                         // +0x20
    hkUint16 m_dirtyListIndex;                       // +0x22
    hkUint8 m_splitCheckFrameCounter;                // +0x24
    hkUint8 m_splitCheckRequested : 2;               // +0x25
    hkUint8 m_isSparse : 2;
    hkUint8 m_actionListCleanupNeeded : 2;
    hkUint8 m_allowIslandLocking : 2;
    hkUint8 m_isInActiveIslandsArray : 2;            // +0x26
    hkUint8 m_activeMark : 2;
    hkUint8 m_tryToDeactivate : 2;
    hkUint8 m_inIntegrateJob : 2;
    hkMultiThreadCheck m_multiThreadCheck;           // +0x28
    hkReal m_timeSinceLastHighFrequencyCheck;        // +0x30
    hkReal m_timeSinceLastLowFrequencyCheck;         // +0x34
    hkArray<hkpAction *> m_actions;                  // +0x38
    hkReal m_timeOfDeactivation;                     // +0x44
    hkArray<hkpEntity *> m_entities;                 // +0x48 hkInplaceArray<hkpEntity *, 1>: the array,
    hkpEntity *m_entitiesStorage[1];                 // +0x54 then its storage
    // hkpAgentNnTrack m_narrowphaseAgentTrack, flat (see above).
    int m_bytesUsedInLastSector;                     // +0x58
    hkArray<hkpAgentNnSector *> m_sectors;           // +0x5C hkInplaceArray<hkpAgentNnSector *, 1>: the array,
    hkpAgentNnSector *m_sectorsStorage[1];           // +0x68 then its storage
};

#endif
