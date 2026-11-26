// hkpSampledHeightFieldShape::~hkpSampledHeightFieldShape, the implicit destructor, emitted out of line;
// the deleting destructors of hkpSampledHeightFieldShape, hkpCompressedSampledHeightFieldShape and
// hkpStorageSampledHeightFieldShape call it (identical code folded). Nothing to destroy, so only
// hkBaseObject's vtable store is left. The function at the end only makes the compiler emit the vtable.
#include "havok/hkpSampledHeightFieldShape.h"

hkpSampledHeightFieldShape::~hkpSampledHeightFieldShape() {}

void emitVtable_82D46390(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpSampledHeightFieldShape(f); }
