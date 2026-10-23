// hkMemoryMeshShape::~hkMemoryMeshShape (Common/GeometryUtilities/Mesh/Memory/hkMemoryMeshShape.cpp): releases each section's vertex buffer and material, then the members.
#include "havok/hkBase.h"

class hkMeshVertexBuffer : public hkReferencedObject {};
class hkMeshMaterial : public hkReferencedObject {};

struct hkMeshSectionCinfo {
    hkMeshVertexBuffer *m_vertexBuffer;   // +0x0
    hkMeshMaterial *m_material;           // +0x4
    hkUint8 m_rest[0x18];                 // +0x8 (primitive type, index ranges)
};

class hkMeshShape : public hkReferencedObject {
public:
    hkMeshShape(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkMemoryMeshShape : public hkMeshShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkMemoryMeshShape(hkFinishLoadedObjectFlag flag)
        : hkMeshShape(flag), m_sections(flag), m_indices16(flag), m_indices32(flag), m_name(flag) {}
    virtual ~hkMemoryMeshShape();

    hkArray<hkMeshSectionCinfo> m_sections;   // +0x8
    hkArray<hkUint16> m_indices16;            // +0x14
    hkArray<hkUint32> m_indices32;            // +0x20
    hkStringPtr m_name;                       // +0x2C
};

hkMemoryMeshShape::~hkMemoryMeshShape()
{
    const int numSections = m_sections.getSize();
    for (int i = 0; i < numSections; i++) {
        hkMeshSectionCinfo &section = m_sections[i];
        section.m_vertexBuffer->removeReference();
        if (section.m_material)
            section.m_material->removeReference();
    }
}
