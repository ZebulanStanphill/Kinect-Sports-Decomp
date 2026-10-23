// hkpConvexVerticesConnectivity::~hkpConvexVerticesConnectivity, the implicit destructor (Physics/Collide/Shape/
// Convex/ConvexVertices/hkpConvexVerticesConnectivity.h), emitted out of line: the deleting destructor
// (fn_82D3A008) calls it. It destroys the two hkArrays in reverse order. The function at the end only makes
// the compiler emit the vtable.
#include "havok/hkBase.h"

class hkpConvexVerticesConnectivity : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexVerticesConnectivity(hkFinishLoadedObjectFlag flag)
        : hkReferencedObject(flag), m_vertexIndices(flag), m_numVerticesPerFace(flag) {}

    hkArray<hkUint16> m_vertexIndices;       // +0x8
    hkArray<hkUint8> m_numVerticesPerFace;   // +0x14
};

void emitVtable_82D39F50(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpConvexVerticesConnectivity(f); }
