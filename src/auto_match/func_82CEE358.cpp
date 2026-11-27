// hkMemoryTrackStreamWriter scalar deleting destructor; it calls ~hkMemoryTrackStreamWriter (not visible here). The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkMemoryTrack.h"
#include "havok/hkMemoryTrackStreamWriter.h"

void emitVtable_82CEE358(void *p) { new (p) hkMemoryTrackStreamWriter(HK_NULL, hkMemoryTrackStreamWriter::TRACK_BORROW); }
