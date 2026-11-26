// getVtablehkpSerializedAgentNnEntry (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns
// its vtable pointer.
#include "havok/hkBase.h"
#include "havok/hkpEntity.h"
#include "havok/hkContactPoint.h"
#include "havok/hkpSerializedTrack1nInfo.h"
#include "havok/hkpSimpleContactConstraintAtom.h"

// Physics/Utilities/Serialize/hkpSerializedAgentNnEntry.h.
class hkpSerializedAgentNnEntry : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    hkpSerializedAgentNnEntry();
    hkpSerializedAgentNnEntry(hkFinishLoadedObjectFlag f)
        : hkReferencedObject(f), m_atom(f), m_propertiesStream(f), m_contactPoints(f), m_cpIdMgr(f), m_trackInfo(f) {}
    virtual ~hkpSerializedAgentNnEntry();

    hkpEntity *m_bodyA;                          // +0x8
    hkpEntity *m_bodyB;                          // +0xC
    hkUlong m_bodyAId;                           // +0x10
    hkUlong m_bodyBId;                           // +0x14
    hkBool m_useEntityIds;                       // +0x18
    hkInt8 m_agentType;                          // +0x19
    hkpSimpleContactConstraintAtom m_atom;       // +0x20
    hkArray<hkUint8> m_propertiesStream;         // +0x50
    hkArray<hkContactPoint> m_contactPoints;     // +0x5C
    hkArray<hkUint8> m_cpIdMgr;                  // +0x68
    hkUint8 m_nnEntryData[0x80];                 // +0x74
    hkpSerializedTrack1nInfo m_trackInfo;        // +0xF4
    hkUint8 m_endianCheckBuffer[4];              // +0x10C
    hkUint32 m_version;                          // +0x110
};

const void *HK_CALL getVtablehkpSerializedAgentNnEntry()
{
    union {
        void *ptr;
        char buf[sizeof(hkpSerializedAgentNnEntry)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpSerializedAgentNnEntry(f);
    return u.ptr;
}
