// hkpSerializedAgentNnEntry (Physics/Utilities/Dynamics/SaveContactPoints/hkpSerializedAgentNnEntry.h, the folder of
// its class unit), 0x120 bytes: a saved collision agent entry of two bodies, with its contact constraint atom,
// contact points and agent data.
// The members, their offsets and types are the game's reflection table for the class (lbl_83185558's members:
// bodyA +0x8 ... version +0x110). The size is the 16-byte aligned end of m_version (the atom is aligned).
// The constructor is out of line (??0hkpSerializedAgentNnEntry@@QAA@XZ, 82DF86E0): null bodies, ids -1, no
// entity ids, then the endian check word 0x103 and version 1. 82DF7640, in the same part of the code, inlines it;
// its unit defines it as well. The destructor is out of line (??1, 82DF5078: it releases the two bodies); the
// finish constructor is inline (finishLoadedObject 82DE4CF8, getVtable 82DE4D20).
// The member names are the reflection table's; the enum's name is the reflection's "SerializedAgentType", and its
// enumerator is Havok's.
#ifndef HAVOK_HKPSERIALIZEDAGENTNNENTRY_H
#define HAVOK_HKPSERIALIZEDAGENTNNENTRY_H

#include "havok/hkBase.h"
#include "havok/hkEnum.h"
#include "havok/hkContactPoint.h"
#include "havok/hkpSerializedTrack1nInfo.h"
#include "havok/hkpSimpleContactConstraintAtom.h"

class hkpEntity;

class hkpSerializedAgentNnEntry : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    enum SerializedAgentType { INVALID_AGENT_TYPE };

    hkpSerializedAgentNnEntry();
    hkpSerializedAgentNnEntry(hkFinishLoadedObjectFlag f)
        : hkReferencedObject(f), m_atom(f), m_propertiesStream(f), m_contactPoints(f), m_cpIdMgr(f), m_trackInfo(f) {}
    virtual ~hkpSerializedAgentNnEntry();

    hkpEntity *m_bodyA;                                // +0x8
    hkpEntity *m_bodyB;                                // +0xC
    hkUlong m_bodyAId;                                 // +0x10
    hkUlong m_bodyBId;                                 // +0x14
    hkBool m_useEntityIds;                             // +0x18
    hkEnum<SerializedAgentType, hkInt8> m_agentType;   // +0x19
    hkpSimpleContactConstraintAtom m_atom;             // +0x20
    hkArray<hkUint8> m_propertiesStream;               // +0x50
    hkArray<hkContactPoint> m_contactPoints;           // +0x5C
    hkArray<hkUint8> m_cpIdMgr;                        // +0x68
    hkUint8 m_nnEntryData[0x80];                       // +0x74
    hkpSerializedTrack1nInfo m_trackInfo;              // +0xF4
    hkUint8 m_endianCheckBuffer[4];                    // +0x10C
    hkUint32 m_version;                                // +0x110
};

#endif
