// hkMemoryTrack::~hkMemoryTrack: clears the track (fn_82CFF298 frees the sectors), then destroys the sector array.
#include "havok/hkBase.h"
#include "havok/hkMemoryTrack.h"

hkMemoryTrack::~hkMemoryTrack() { clear(); }
