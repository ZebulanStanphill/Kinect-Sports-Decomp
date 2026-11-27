// hkArrayStreamWriter::seek(int offset, SeekWhence whence) (Common/Base/System/Io/Writer/Array/hkArrayStreamWriter.cpp, slot +0x1C):
// the new position is relative to the start, the current position or the end of the array; a negative position
// fails, a position past the end grows the array, zero-filling the gap (hkArray::setSize(n + 1, 0), then the
// size is set back to n so a terminating zero stays in the buffer).
#include "havok/hkBase.h"
#include "havok/hkArrayStreamWriter.h"

hkResult hkArrayStreamWriter::seek(int offset, SeekWhence whence)
{
    int absOffset = m_offset;
    switch (whence) {
    case hkStreamWriter::STREAM_SET:
        absOffset = offset;
        break;
    case hkStreamWriter::STREAM_CUR:
        absOffset = m_offset + offset;
        break;
    case hkStreamWriter::STREAM_END:
        absOffset = m_arr->getSize() - offset;
        break;
    }
    if (absOffset >= 0) {
        if (absOffset > m_arr->getSize()) {
            m_arr->setSize(absOffset + 1, 0);
            m_arr->setSizeUnchecked(absOffset);
        }
        m_offset = absOffset;
        return HK_SUCCESS;
    }
    return HK_FAILURE;
}
