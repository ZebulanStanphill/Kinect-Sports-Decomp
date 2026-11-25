// hkxMeshSection::hkxMeshSection(const hkxMeshSection &): default-constructs the members, then assigns (hkxMeshSection::operator=, out of line as fn_82E08818).
#include "havok/hkSceneData.h"
#include "havok/hkMemoryResourceContainer.h"

hkxMeshSection::hkxMeshSection(const hkxMeshSection &other) : m_vertexBuffer(HK_NULL), m_material(HK_NULL)
{
    *this = other;
}
