// hkpStorageSampledHeightFieldShape scalar deleting destructor: the implicit destructor
// (m_storage, an hkArray<hkReal>, then hkpSampledHeightFieldShape's out-of-line implicit
// destructor ??1, fn_82D46390) is inlined. The finish constructor below only makes the
// compiler emit the vtable.
#include "havok/hkpStorageSampledHeightFieldShape.h"

void emitVtable_82D3B5E0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpStorageSampledHeightFieldShape(f); }
