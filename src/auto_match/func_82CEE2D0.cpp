// hkMemoryTrackStreamWriter::~hkMemoryTrackStreamWriter: deletes the track it owns (delete checks for null).
#include "havok/hkBase.h"
#include "havok/hkMemoryTrack.h"
#include "havok/hkMemoryTrackStreamWriter.h"

hkMemoryTrackStreamWriter::~hkMemoryTrackStreamWriter()
{
    if (m_ownerShip == TRACK_TAKE)
        delete m_track;
}
