// hkgpMesh::TriangleShape scalar deleting destructor (identical code also
// serves hkgpMesh::ConvexHullShape and hkgpMesh::PrismShape<1>).
// TriangleShape derives from the interface hkgpMesh::IConvexOverlap::IConvexShape
// (RTTI) and has Havok's non-virtual class allocator, so deleting frees
// sizeof(TriangleShape) = 8 bytes to the heap. The implicit destructor leaves
// only IConvexShape's vtable store. The function at the end only makes the
// compiler emit the vtable.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkgpMesh {
public:
    class IConvexOverlap {
    public:
        class IConvexShape {
        public:
            static void operator delete(void *p) { fn_8265CA20(p); }
            virtual ~IConvexShape() {}
        };
    };
    class TriangleShape : public IConvexOverlap::IConvexShape {
    public:
        HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, TriangleShape);
        hkUint8 m_members[0x4];   // not needed here; sizeof is 0x8
    };
};

void emitVtable_82D2A7D8(void *p) { new (p) hkgpMesh::TriangleShape; }
