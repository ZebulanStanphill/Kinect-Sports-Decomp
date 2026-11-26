// hkpDisplayBindingData scalar deleting destructor: calls the out-of-line implicit ~hkpDisplayBindingData (fn_82DE4198), then frees through the class allocator.
#include "havok/hkBase.h"
#include "havok/hkpDisplayBindingData.h"

void emitVtable_82DE4320(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpDisplayBindingData(f); }
