// getVtablehkMemoryMeshShape (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns its vtable pointer.
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

const void *HK_CALL getVtablehkMemoryMeshShape()
{
    union {
        void *ptr;
        char buf[sizeof(hkMemoryMeshShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkMemoryMeshShape(f);
    return u.ptr;
}
