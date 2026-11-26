// hkMemoryTrackStreamReader::hkMemoryTrackStreamReader(const hkMemoryTrack *, MemoryType) (Common/Base/System/Io/Reader/MemoryTrack).
#include "havok/hkBase.h"
#include "havok/hkMemoryTrackStreamReader.h"

hkMemoryTrackStreamReader::hkMemoryTrackStreamReader(const hkMemoryTrack *track, MemoryType t)
    : m_memType(t)
{
    m_track = track;
    m_trackOffset = 0;
}
