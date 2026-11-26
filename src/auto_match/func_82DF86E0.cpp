// hkpSerializedAgentNnEntry::hkpSerializedAgentNnEntry() (Physics/Utilities/Serialize/hkpSerializedAgentNnEntry.h),
// out of line. Havok code, so /O2 (flag file). m_useEntityIds must be an hkBool: its inline constructor is
// what leaves the two `mr` copies of -1 (with a plain hkUint8 the code is 8 bytes shorter and scheduled
// differently). The contact data info's init() zeroes its 7 words in a loop.
#include "havok/hkBase.h"
#include "havok/hkEnum.h"
#include "havok/hkContactPoint.h"
#include "havok/hkpSerializedTrack1nInfo.h"
#include "havok/hkpSimpleContactConstraintAtom.h"

class hkpEntity;

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
