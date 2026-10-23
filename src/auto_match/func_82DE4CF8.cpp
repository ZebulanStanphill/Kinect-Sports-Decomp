// finishLoadedObjecthkpSerializedAgentNnEntry: the finish function in hkpSerializedAgentNnEntry's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok);
// the atom's finish constructor (fn_82D9FE90) ends it as a tail call.
#include "havok/hkBase.h"

class hkpSimpleContactConstraintAtom;
extern "C" void fn_82D9FE90(hkpSimpleContactConstraintAtom *self, hkFinishLoadedObjectFlag f);   // its finish constructor

// Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h.
struct hkpConstraintAtom {
    hkUint16 m_type;   // +0x0 hkEnum<AtomType, hkUint16>
};

class __declspec(align(16)) hkpSimpleContactConstraintDataInfo {
public:
    hkUint16 m_flags;          // +0x0
    hkUint16 m_index;          // +0x2
    hkUint32 m_data[7];        // +0x4
};

class hkpSimpleContactConstraintAtom : public hkpConstraintAtom {
public:
    // Out of line in the game (fn_82D9FE90, which keeps its fn_ name).
    HK_FORCE_INLINE hkpSimpleContactConstraintAtom(hkFinishLoadedObjectFlag f) { fn_82D9FE90(this, f); }

    hkUint16 m_sizeOfAllAtoms;                    // +0x2
    hkUint16 m_numContactPoints;                  // +0x4
    hkUint16 m_numReservedContactPoints;          // +0x6
    hkUint8 m_numUserDatasForBodyA;               // +0x8
    hkUint8 m_numUserDatasForBodyB;               // +0x9
    hkUint8 m_contactPointPropertiesStriding;     // +0xA
    hkUint16 m_maxNumContactPoints;               // +0xC
    hkpSimpleContactConstraintDataInfo m_info;    // +0x10
};

class hkpEntity : public hkReferencedObject {
};

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

// Common/Base/Types/Physics/ContactPoint/hkContactPoint.h (0x20 bytes).
class hkContactPoint {
public:
    hkVector4 m_position;
    hkVector4 m_separatingNormal;
};
struct hkpAgent1nSector;
struct hkpSerializedSubTrack1nInfo;

struct hkpSerializedTrack1nInfo {
    hkpSerializedTrack1nInfo(hkFinishLoadedObjectFlag f) : m_sectors(f), m_subTracks(f) {}
    ~hkpSerializedTrack1nInfo();   // out of line (fn_82DF4EF8)
    hkArray<hkpAgent1nSector *> m_sectors;                 // +0x0
    hkArray<hkpSerializedSubTrack1nInfo *> m_subTracks;    // +0xC
};

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

void HK_CALL finishLoadedObjecthkpSerializedAgentNnEntry(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpSerializedAgentNnEntry(f);
}
