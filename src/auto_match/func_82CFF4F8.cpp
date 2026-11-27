// hkMemoryTrackStreamReader::~hkMemoryTrackStreamReader: deletes the track it owns (delete checks for null).
#include "havok/hkBase.h"
#include "havok/hkMemoryTrack.h"
#include "havok/hkMemoryTrackStreamReader.h"

hkMemoryTrackStreamReader::~hkMemoryTrackStreamReader()
{
    if (m_memType == MEMORY_TAKE)
        delete m_track;
}
