// hkMemoryTrackStreamReader::isOk (vtable slot +0xC): the read position is still inside the track.
#include "havok/hkBase.h"
#include "havok/hkMemoryTrack.h"
#include "havok/hkMemoryTrackStreamReader.h"

hkBool hkMemoryTrackStreamReader::isOk() const { return m_track->getSize() >= m_trackOffset; }
