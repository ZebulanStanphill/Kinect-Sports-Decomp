// hkIArchive::hkIArchive(const void *, int, hkBool) (hkIArchive.cpp).
#include "havok/hkBase.h"

#include "havok/hkMemoryStreamReader.h"

#include "havok/hkIArchive.h"

hkIArchive::hkIArchive(const void *mem, int memSize, hkBool byteswap)
    : m_byteSwap(byteswap)
{
    m_streamReader = new hkMemoryStreamReader(mem, memSize, hkMemoryStreamReader::MEMORY_INPLACE);
}
