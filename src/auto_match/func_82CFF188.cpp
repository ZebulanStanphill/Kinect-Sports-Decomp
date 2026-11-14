// hkArrayStreamWriter::seek(int offset, SeekWhence whence) (Common/Base/System/Io/Writer/Array/hkArrayStreamWriter.h):
// the new position is relative to the start, the current position or the end of the array; a negative position
// fails (1), a position past the end grows the array, zero-filling the gap (hkArray::setSize(n + 1, 0), then the
// size is set back to n so a terminating zero stays in the buffer).
#include "havok/hkBase.h"

extern "C" void fn_82CE6310(hkMemoryAllocator *alloc, void *array, int reqCapacity, int sizeElem);   // hkArrayUtil::_reserve

template <typename T>
static HK_FORCE_INLINE void constructWithCopy(T *p, int n, const T &fill)
{
    for (int i = 0; i < n; ++i)
        p[i] = fill;
}

template <typename T>
class hkArraySetSize_82CFF188 : public hkArrayBase<T> {
public:
    HK_FORCE_INLINE void _reserve(hkMemoryAllocator &a, int n)
    {
        const int capacity = this->getCapacity();
        if (capacity < n) {
            int cap2 = 2 * capacity;
            int newSize = (n < cap2) ? cap2 : n;
            fn_82CE6310(&a, this, newSize, sizeof(T));
        }
    }
    HK_FORCE_INLINE void setSize(int n, const T &fill)
    {
        hkMemoryAllocator &a = hkContainerHeapAllocator::get(this);
        _reserve(a, n);
        constructWithCopy(this->m_data + this->m_size, n - this->m_size, fill);
        this->m_size = n;
    }
    HK_FORCE_INLINE void setSizeUnchecked(int n) { this->m_size = n; }
};

class hkStreamWriter : public hkReferencedObject {
public:
    enum SeekWhence { STREAM_SET = 0, STREAM_CUR = 1, STREAM_END = 2 };
};

class hkArrayStreamWriter : public hkStreamWriter {
public:
    hkArraySetSize_82CFF188<char> *m_arr;   // +0x8
    int m_offset;                           // +0xC
    int m_ownerShip;                        // +0x10
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
            self->m_arr->setSize(absOffset + 1, 0);
            self->m_arr->setSizeUnchecked(absOffset);
        }
        self->m_offset = absOffset;
        return 0;
    }
    return 1;
}
