// hkpTriSampledHeightFieldCollection scalar deleting destructor; it calls ~hkpTriSampledHeightFieldCollection (fn_82D521B8, out of line) and frees
// through the class allocator. The copy at the end only makes the compiler emit the vtable (the header declares
// no inline constructor).
#include "havok/hkpTriSampledHeightFieldCollection.h"

void emitVtable_82D3B980(void *p, const void *q)
{
    new (p) hkpTriSampledHeightFieldCollection(*(const hkpTriSampledHeightFieldCollection *)q);
}
