// hkOArchive::hkOArchive(hkStreamWriter *, hkBool) (Common/Base/System/Io/OArchive/hkOArchive.cpp).
#include "havok/hkOArchive.h"

hkOArchive::hkOArchive(hkStreamWriter *sw, hkBool byteswap)
    : m_writer(sw), m_byteSwap(byteswap)
{
    m_writer->addReference();
}
