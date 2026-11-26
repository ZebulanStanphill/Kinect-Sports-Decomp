// hkArrayStreamWriter::seek(int offset, SeekWhence whence) (Common/Base/System/Io/Writer/Array/hkArrayStreamWriter.h):
// the new position is relative to the start, the current position or the end of the array; a negative position
// fails (1), a position past the end grows the array, zero-filling the gap (hkArray::setSize(n + 1, 0), then the
// size is set back to n so a terminating zero stays in the buffer).
#include "havok/hkBase.h"
#include "havok/hkArrayStreamWriter.h"

template <typename T>
static HK_FORCE_INLINE void constructWithCopy(T *p, int n, const T &fill)
{
    for (int i = 0; i < n; ++i)
        p[i] = fill;
}

// hkArray::setSize(n, fill) and the _reserve it inlines; hkArray.h does not declare them, so m_arr is cast to
// this helper to call them (free functions over hkArrayBase put the operands of one add in the other order).
template <typename T>
class hkArraySetSize_82CFF188 : public hkArrayBase<T> {
public:
    HK_FORCE_INLINE void _reserve(hkMemoryAllocator &a, int n)
    {
        const int capacity = this->getCapacity();
        if (capacity < n) {
            int cap2 = 2 * capacity;
            int newSize = (n < cap2) ? cap2 : n;
            hkArrayUtil::_reserve(a, this, newSize, sizeof(T));
        }
    }
    HK_FORCE_INLINE void setSize(int n, const T &fill)
    {
        hkMemoryAllocator &a = hkContainerHeapAllocator::get(this);
        _reserve(a, n);
        constructWithCopy(this->m_data + this->m_size, n - this->m_size, fill);
        this->m_size = n;
    }
};

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
            static_cast<hkArraySetSize_82CFF188<char> *>(self->m_arr)->setSize(absOffset + 1, 0);
            self->m_arr->m_size = absOffset;   // setSizeUnchecked
        }
        self->m_offset = absOffset;
        return 0;
    }
    return 1;
}
