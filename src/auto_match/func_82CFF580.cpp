// hkMemoryTrackStreamReader::skip (vtable slot +0x14): moves the read position.
#include "havok/hkBase.h"
#include "havok/hkMemoryTrackStreamReader.h"

int hkMemoryTrackStreamReader::skip(int nbytes)
{
    m_trackOffset += nbytes;
    return nbytes;
}
