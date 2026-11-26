// hkpSampledHeightFieldShape scalar deleting destructor; it calls ~hkpSampledHeightFieldShape (out of line,
// already named) and frees through the class allocator. Hierarchy from the RTTI: hkpSampledHeightFieldShape
// -> hkpHeightFieldShape -> hkpShape. The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkpSampledHeightFieldShape.h"

void emitVtable_82D398A0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpSampledHeightFieldShape(f); }
