// hkMeshSection (0x28 bytes) and hkMeshSectionCinfo (0x20 bytes) (Common/GeometryUtilities/Mesh/hkMeshShape.h): a
// section of a mesh shape as it is read, and as it is built. Both are reflected and the layouts are their member
// tables: hkMeshSection's initialiser 8312CAA0 (members lbl_8317FA40, the two enums lbl_821342EC, whose enumerator
// names are in the game), hkMeshSectionCinfo's 8312CB48 (members lbl_8317FB30). The member names are the reflected
// ones.
#ifndef HAVOK_HKMESHSECTION_H
#define HAVOK_HKMESHSECTION_H

#include "havok/hkBase.h"
#include "havok/hkEnum.h"

class hkMeshVertexBuffer;
class hkMeshMaterial;

struct hkMeshSection {
    enum MeshSectionIndexType {
        INDEX_TYPE_NONE = 0,
        INDEX_TYPE_UINT16 = 1,
        INDEX_TYPE_UINT32 = 2
    };

    enum PrimitiveType {
        PRIMITIVE_TYPE_UNKNOWN = 0,
        PRIMITIVE_TYPE_POINT_LIST = 1,
        PRIMITIVE_TYPE_LINE_LIST = 2,
        PRIMITIVE_TYPE_TRIANGLE_LIST = 3,
        PRIMITIVE_TYPE_TRIANGLE_STRIP = 4
    };

    hkEnum<PrimitiveType, hkUint8> m_primitiveType;    // +0x0
    hkInt32 m_numPrimitives;                           // +0x4
    hkInt32 m_numIndices;                              // +0x8
    hkInt32 m_vertexStartIndex;                        // +0xC
    hkInt32 m_transformIndex;                          // +0x10
    hkEnum<MeshSectionIndexType, hkUint8> m_indexType; // +0x14
    const void *m_indices;                             // +0x18
    hkMeshVertexBuffer *m_vertexBuffer;                // +0x1C
    hkMeshMaterial *m_material;                        // +0x20
    hkInt32 m_sectionIndex;                            // +0x24
};

struct hkMeshSectionCinfo {
    hkMeshVertexBuffer *m_vertexBuffer;                                // +0x0
    hkMeshMaterial *m_material;                                        // +0x4
    hkEnum<hkMeshSection::PrimitiveType, hkUint8> m_primitiveType;     // +0x8
    hkInt32 m_numPrimitives;                                           // +0xC
    hkEnum<hkMeshSection::MeshSectionIndexType, hkUint8> m_indexType;  // +0x10
    const void *m_indices;                                             // +0x14
    hkInt32 m_vertexStartIndex;                                        // +0x18
    hkInt32 m_transformIndex;                                          // +0x1C
};

#endif
