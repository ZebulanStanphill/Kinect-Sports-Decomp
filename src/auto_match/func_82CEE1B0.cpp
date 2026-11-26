// hkOstream::hkOstream(hkArray<char> &) (hkOStream.cpp).
#include "havok/hkBase.h"
#include "havok/hkOstream.h"
#include "havok/hkArrayStreamWriter.h"

hkOstream::hkOstream(hkArray<char> &buf)
{
    m_writer = new hkArrayStreamWriter(&buf, hkArrayStreamWriter::ARRAY_BORROW);
}
