// hkOstream::hkOstream(void *, int, hkBool) (hkOStream.cpp).
#include "havok/hkBase.h"
#include "havok/hkOstream.h"
#include "havok/hkBufferedStreamWriter.h"

hkOstream::hkOstream(void *mem, int memSize, hkBool isString)
{
    m_writer = new hkBufferedStreamWriter(mem, memSize, isString);
}
