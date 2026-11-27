// hkMemoryTrackStreamReader scalar deleting destructor; it calls ~hkMemoryTrackStreamReader (not visible here). The
// function at the end only makes the compiler emit the vtable; it copies an object because the header declares no
// inline constructor.
#include "havok/hkBase.h"
#include "havok/hkMemoryTrack.h"
#include "havok/hkMemoryTrackStreamReader.h"

void emitVtable_82CFF5D0(void *p, const void *q)
{
    new (p) hkMemoryTrackStreamReader(*(const hkMemoryTrackStreamReader *)q);
}
