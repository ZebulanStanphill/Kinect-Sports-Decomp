#include "havok/hkBase.h"

extern "C" {
unsigned int strlen(const char *text);
char *strstr(const char *text, const char *pattern);
}

// hkArrayUtil::constructWithCopy (POD version): a loop over n copies.
template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *p, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i) {
        p[i] = tcopy;
    }
}

template <typename T> class Array_82CFC6A8 : public hkArrayBase<T>
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
        _pushBack(hkContainerHeapAllocator::get(this), e);
    }
};

// Records the offset of every occurrence of pattern in text (only the first one unless all is set).
extern "C" hkBool fn_82CFC6A8(const char *text, const char *pattern, Array_82CFC6A8<int> &positions, int all)
{
    int length = strlen(pattern);
    const char *match = strstr(text, pattern);
    hkBool found = false;

    while (match != HK_NULL) {
        found = true;
        positions.pushBack(int(match - text));
        if (!all) {
            break;
        }
        match = strstr(match + length, pattern);
    }
    return found;
}
