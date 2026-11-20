#include "havok/hkBase.h"


// hkArrayUtil::constructWithCopy (POD version): a loop over n copies.
template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *p, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i) {
        p[i] = tcopy;
    }
}

template <typename T> class Array_82D048D0 : public hkArrayBase<T>
{
  public:
    HK_FORCE_INLINE void pushBackUnchecked(const T &e)
    {
        constructWithCopy(this->m_data + this->m_size, 1, e);
        this->m_size++;
    }

    HK_FORCE_INLINE void _pushBack(hkMemoryAllocator &alloc, const T &e)
    {
        if (this->m_size == this->getCapacity()) {
            hkArrayUtil::_reserveMore(alloc, this, sizeof(T));
        }
        pushBackUnchecked(e);
    }

    HK_FORCE_INLINE void pushBack(const T &e)
    {
        _pushBack(hkContainerTempAllocator::get(this), e);
    }
};

struct String_82D048D0 {
    Array_82D048D0<char> m_string;

    HK_FORCE_INLINE int getLength() const
    {
        return m_string.getSize() - 1;
    }

    HK_FORCE_INLINE int indexOf(char c, int startIndex, int endIndex = 0x7fffffff) const
    {
        endIndex = endIndex < getLength() ? endIndex : getLength();
        for (int i = startIndex; i < endIndex; ++i) {
            if (m_string[i] == c) {
                return i;
            }
        }
        return -1;
    }
};

// hkString::split: cuts the string at every separator in place, appends the start of each piece
// and returns the number of pieces.
extern "C" int fn_82D048D0(String_82D048D0 *self, char sep, Array_82D048D0<const char *> *out)
{
    int cur = 1;

    out->pushBack(self->m_string.begin());
    for (;;) {
        int idx = self->indexOf(sep, cur);
        if (idx < 0) {
            break;
        }
        self->m_string[idx] = 0;
        cur = idx + 1;
        out->pushBack(self->m_string.begin() + cur);
    }
    return out->getSize();
}
