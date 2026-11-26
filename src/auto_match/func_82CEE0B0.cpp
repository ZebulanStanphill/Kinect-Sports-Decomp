// hkOstream::hkOstream(hkMemoryTrack *) (hkOStream.cpp).
#include "havok/hkBase.h"
#include "havok/hkOstream.h"
#include "havok/hkMemoryTrackStreamWriter.h"

hkOstream::hkOstream(hkMemoryTrack *track)
{
    m_writer = new hkMemoryTrackStreamWriter(track, hkMemoryTrackStreamWriter::TRACK_BORROW);
}
