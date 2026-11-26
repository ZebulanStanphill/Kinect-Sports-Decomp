// hkIArchive::hkIArchive(hkStreamReader *, hkBool) (Common/Base/System/Io/IArchive/hkIArchive.cpp).
#include "havok/hkBase.h"
#include "havok/hkIArchive.h"

hkIArchive::hkIArchive(hkStreamReader *sb, hkBool byteswap)
    : m_streamReader(sb), m_byteSwap(byteswap)
{
    m_streamReader->addReference();
}
