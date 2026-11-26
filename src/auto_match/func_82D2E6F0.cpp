// hkgpAbstractMesh<hkgpTriangulatorType<...>::Edge, Vertex, Triangle, hkContainerHeapAllocator> scalar deleting
// destructor for the default triangulator (hkgpTriangulatorType<hkgpTriangulatorBase::VertexBase, TriangleBase,
// DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator, -1>), from
// Common/Internal/GeometryProcessing/AbstractMesh/hkgpAbstractMesh.h; it calls the out-of-line destructor
// (fn_82D2E680, already named) and frees through the class allocator. The constructor at the end only makes
// the compiler emit the vtable.
#include "havok/hkgpTriangulator.h"

typedef hkgpAbstractMesh<hkgpTriangulator::Edge, hkgpTriangulator::Vertex, hkgpTriangulator::Triangle,
                         hkContainerHeapAllocator>
    hkgpTriangulatorMesh;

void emitVtable_82D2E6F0(void *p) { new (p) hkgpTriangulatorMesh(); }
