// hkOArchive::hkOArchive(void *, int, hkBool) (hkOArchive.cpp).
#include "havok/hkBase.h"
#include "havok/hkOArchive.h"
#include "havok/hkBufferedStreamWriter.h"

hkOArchive::hkOArchive(void *mem, int memSize, hkBool byteswap)
    : m_byteSwap(byteswap)
{
    m_writer = new hkBufferedStreamWriter(mem, memSize, false);
}
