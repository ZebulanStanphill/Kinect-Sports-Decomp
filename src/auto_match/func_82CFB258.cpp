// hkBufferedStreamWriter::hkBufferedStreamWriter(void *, int, hkBool) (Common/Base/System/Io/Writer/Buffered/hkBufferedStreamWriter.cpp).
#include "havok/hkBase.h"
#include "havok/hkBufferedStreamWriter.h"

hkBufferedStreamWriter::hkBufferedStreamWriter(void *mem, int memSize, hkBool memoryIsString)
    : m_stream(HK_NULL), m_buf(static_cast<char *>(mem)), m_bufSize(0),
      m_bufCapacity(memoryIsString ? memSize - 1 : memSize), m_ownBuffer(false)
{
    if (memoryIsString)
        hkString::memSet(mem, 0, memSize);
}
