// hkMemoryMeshShape::~hkMemoryMeshShape (Common/GeometryUtilities/Mesh/Memory/hkMemoryMeshShape.cpp): releases each section's vertex buffer and material, then the members.
#include "havok/hkBase.h"
#include "havok/hkMeshSection.h"
#include "havok/hkMeshMaterial.h"
#include "havok/hkMeshVertexBuffer.h"
#include "havok/hkMemoryMeshShape.h"

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
