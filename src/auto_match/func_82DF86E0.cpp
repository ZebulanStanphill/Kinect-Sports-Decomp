// hkpSerializedAgentNnEntry::hkpSerializedAgentNnEntry() (Physics/Utilities/Serialize/hkpSerializedAgentNnEntry.h),
// out of line. Havok code, so /O2 (flag file). m_useEntityIds must be an hkBool: its inline constructor is
// what leaves the two `mr` copies of -1 (with a plain hkUint8 the code is 8 bytes shorter and scheduled
// differently). The contact data info's init() zeroes its 7 words in a loop.
#include "havok/hkBase.h"

template <typename ENUM, typename STORAGE>
class hkEnum {
public:
    HK_FORCE_INLINE hkEnum() {}
    HK_FORCE_INLINE hkEnum(ENUM e) { m_storage = static_cast<STORAGE>(e); }
    HK_FORCE_INLINE void operator=(ENUM e) { m_storage = static_cast<STORAGE>(e); }
    STORAGE m_storage;
};

class hkpEntity;

struct hkpConstraintAtom {
    enum AtomType { TYPE_CONTACT = 22 };
    HK_FORCE_INLINE hkpConstraintAtom(AtomType type) : m_type(type) {}
    hkEnum<AtomType, hkUint16> m_type;   // +0x0
};

class __declspec(align(16)) hkpSimpleContactConstraintDataInfo {
public:
    HK_FORCE_INLINE hkpSimpleContactConstraintDataInfo() { init(); }
    HK_FORCE_INLINE void init()
    {
        m_flags = 0;
        m_index = 3;
        for (int i = 0; i < 7; ++i)
            m_data[i] = 0;
    }
    hkUint16 m_flags;     // +0x0
    hkUint16 m_index;     // +0x2
    hkUint32 m_data[7];   // +0x4
};

struct hkpSimpleContactConstraintAtom : public hkpConstraintAtom {
    HK_FORCE_INLINE hkpSimpleContactConstraintAtom() : hkpConstraintAtom(TYPE_CONTACT) {}
    hkUint16 m_sizeOfAllAtoms;                  // +0x2
    hkUint16 m_numContactPoints;                // +0x4
    hkUint16 m_numReservedContactPoints;        // +0x6
    hkUint8 m_numUserDatasForBodyA;             // +0x8
    hkUint8 m_numUserDatasForBodyB;             // +0x9
    hkUint8 m_contactPointPropertiesStriding;   // +0xa
    hkUint16 m_maxNumContactPoints;             // +0xc
    hkpSimpleContactConstraintDataInfo m_info;  // +0x10
};

struct hkpAgent1nSector;
struct hkpSerializedSubTrack1nInfo;
struct hkpSerializedTrack1nInfo {
    hkArray<hkpAgent1nSector *> m_sectors;                 // +0x0
    hkArray<hkpSerializedSubTrack1nInfo *> m_subTracks;    // +0xc
};

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};
class hkContactPoint {
public:
    hkVector4 m_position;
    hkVector4 m_separatingNormal;
};

class hkpSerializedAgentNnEntry : public hkReferencedObject {
public:
    enum SerializedAgentType { INVALID_AGENT_TYPE };
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    hkpSerializedAgentNnEntry();

    hkpEntity *m_bodyA;                          // +0x8
    hkpEntity *m_bodyB;                          // +0xC
    hkUlong m_bodyAId;                           // +0x10
    hkUlong m_bodyBId;                           // +0x14
    hkBool m_useEntityIds;                       // +0x18
    hkEnum<SerializedAgentType, hkInt8> m_agentType;   // +0x19
    hkpSimpleContactConstraintAtom m_atom;       // +0x20
    hkArray<hkUint8> m_propertiesStream;         // +0x50
    hkArray<hkContactPoint> m_contactPoints;     // +0x5C
    hkArray<hkUint8> m_cpIdMgr;                  // +0x68
    hkUint8 m_nnEntryData[0x80];                 // +0x74
    hkpSerializedTrack1nInfo m_trackInfo;        // +0xF4
    hkUint8 m_endianCheckBuffer[4];              // +0x10C
    hkUint32 m_version;                          // +0x110
};

hkpSerializedAgentNnEntry::hkpSerializedAgentNnEntry()
    : m_bodyA(HK_NULL), m_bodyB(HK_NULL), m_bodyAId(hkUlong(-1)), m_bodyBId(hkUlong(-1)), m_useEntityIds(false)
{
    *(hkUint32 *)m_endianCheckBuffer = 0x103;
    m_version = 1;
}
