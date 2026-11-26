// hkOArchive::hkOArchive(hkArray<char> &, hkBool) (hkOArchive.cpp).
#include "havok/hkBase.h"
#include "havok/hkOArchive.h"
#include "havok/hkArrayStreamWriter.h"

hkOArchive::hkOArchive(hkArray<char> &buf, hkBool byteswap)
    : m_byteSwap(byteswap)
{
    m_writer = new hkArrayStreamWriter(&buf, hkArrayStreamWriter::ARRAY_BORROW);
}
