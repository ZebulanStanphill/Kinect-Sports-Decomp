// hkgpAbstractMesh<hkgpMeshBase::Edge, Vertex, Triangle, hkContainerHeapAllocator> scalar deleting destructor
// (Common/Internal/GeometryProcessing/AbstractMesh/hkgpAbstractMesh.h); it calls the out-of-line destructor
// (fn_82D2C388, already named) and frees through the class allocator. The constructor at the end only makes
// the compiler emit the vtable.
#include "havok/hkgpMeshBase.h"

typedef hkgpAbstractMesh<hkgpMeshBase::Edge, hkgpMeshBase::Vertex, hkgpMeshBase::Triangle, hkContainerHeapAllocator>
    hkgpMeshBaseMesh;

void emitVtable_82D2CBC0(void *p) { new (p) hkgpMeshBaseMesh(); }
