// hkOArchive::hkOArchive(const char *, hkBool) (Common/Base/System/Io/OArchive/hkOArchive.cpp).
#include "havok/hkBase.h"
#include "havok/hkOArchive.h"
#include "havok/hkFileSystem.h"

hkOArchive::hkOArchive(const char *filename, hkBool byteswap)
    : m_byteSwap(byteswap)
{
    m_writer = hkFileSystem::getInstance().openWriter(filename);
}
