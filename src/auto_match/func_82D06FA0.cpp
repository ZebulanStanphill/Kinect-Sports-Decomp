// finishLoadedObjecthkMemoryMeshShape: the finish function in hkMemoryMeshShape's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok). Only m_name's finish constructor is out of line (fn_82CED308).
#include "havok/hkBase.h"

class hkMeshShape : public hkReferencedObject {
public:
    hkMeshShape(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkMemoryMeshShape : public hkMeshShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    struct Section;
    hkMemoryMeshShape(hkFinishLoadedObjectFlag flag)
        : hkMeshShape(flag), m_sections(flag), m_indices16(flag), m_indices32(flag), m_name(flag) {}

    hkArray<Section *> m_sections;      // +0x8
    hkArray<hkUint16> m_indices16;      // +0x14
    hkArray<hkUint32> m_indices32;      // +0x20
    hkStringPtr m_name;                 // +0x2C
};

void HK_CALL finishLoadedObjecthkMemoryMeshShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkMemoryMeshShape(f);
}
