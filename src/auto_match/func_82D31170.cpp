// The default triangulator's scalar deleting destructor (hkgpTriangulatorType<hkgpTriangulatorBase::VertexBase,
// TriangleBase, DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator, -1>), generated from
// its inline destructor: reset(true), then the members in reverse order (the pool allocator's and the
// mesh's destructors are out of line). The function at the end only makes the compiler emit the vtable.
#include "havok/hkgpTriangulator.h"

void emitVtable_82D31170(hkgpTriangulator *p) { p->hkgpTriangulator::~hkgpTriangulatorType(); }
