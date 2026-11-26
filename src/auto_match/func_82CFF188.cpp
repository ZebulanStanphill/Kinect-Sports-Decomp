// hkArrayStreamWriter::seek(int offset, SeekWhence whence) (Common/Base/System/Io/Writer/Array/hkArrayStreamWriter.h):
// the new position is relative to the start, the current position or the end of the array; a negative position
// fails (1), a position past the end grows the array, zero-filling the gap (hkArray::setSize(n + 1, 0), then the
// size is set back to n so a terminating zero stays in the buffer).
#include "havok/hkBase.h"
#include "havok/hkArrayStreamWriter.h"

extern "C" int fn_82CFF188(hkArrayStreamWriter *self, int offset, hkStreamWriter::SeekWhence whence)
{
    int absOffset = self->m_offset;
    switch (whence) {
    case hkStreamWriter::STREAM_SET:
        absOffset = offset;
        break;
    case hkStreamWriter::STREAM_CUR:
        absOffset = self->m_offset + offset;
        break;
    case hkStreamWriter::STREAM_END:
        absOffset = self->m_arr->getSize() - offset;
        break;
    }
    if (absOffset >= 0) {
        if (absOffset > self->m_arr->getSize()) {
            self->m_arr->setSize(absOffset + 1, 0);
            self->m_arr->setSizeUnchecked(absOffset);
        }
        self->m_offset = absOffset;
        return 0;
    }
    return 1;
}
