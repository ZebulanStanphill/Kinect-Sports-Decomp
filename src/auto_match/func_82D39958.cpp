// hkpCompressedSampledHeightFieldShape scalar deleting destructor: the implicit destructor
// (m_storage, an hkArray<hkUint16>, then hkpSampledHeightFieldShape's out-of-line implicit
// destructor ??1, fn_82D46390) is inlined. The finish constructor below only makes the
// compiler emit the vtable.
#include "havok/hkpCompressedSampledHeightFieldShape.h"

void emitVtable_82D39958(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpCompressedSampledHeightFieldShape(f); }
