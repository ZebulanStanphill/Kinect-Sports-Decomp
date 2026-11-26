// hkgpMesh::CollideShapeTriangle scalar deleting destructor. CollideShapeTriangle derives from the interface
// hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector (RTTI) and has
// Havok's non-virtual class allocator, so deleting frees sizeof(CollideShapeTriangle) = 0x20 bytes to
// the heap. The implicit destructor leaves only the Collector vtable store.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkAabbTreeQueryUtils.h"

class hkgpMesh {
public:
    class CollideShapeTriangle : public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector {
    public:
        HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, CollideShapeTriangle);
        hkUint8 m_members[0x1C];   // not needed here; sizeof is 0x20
    };
};

void emitVtable_82D2B118(void *p) { new (p) hkgpMesh::CollideShapeTriangle; }
