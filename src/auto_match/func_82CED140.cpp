// hkIArchive::hkIArchive(const char *, hkBool) (hkIArchive.cpp).
#include "havok/hkBase.h"
#include "havok/hkIArchive.h"
#include "havok/hkFileSystem.h"

hkIArchive::hkIArchive(const char *filename, hkBool byteswap)
    : m_byteSwap(byteswap)
{
    m_streamReader = hkFileSystem::getInstance().openReader(filename);
}
