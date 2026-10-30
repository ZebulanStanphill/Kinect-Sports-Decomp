// Collects the indices of all entries of a byte array that are not 0xff into an hkArray<hkUint16>.
#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *, void *, int);

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }

class Shorts_82DAC730 : public hkArrayBase<hkUint16> {
public:
    HK_FORCE_INLINE void push(const hkUint16 &v)
    {
        hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
        if (m_size == getCapacity()) fn_82CE63B0(&alloc, this, sizeof(hkUint16));
        constructWithCopy(m_data + m_size, 1, v);
        m_size++;
    }
};

extern "C" void fn_82DAC730(hkArray<hkUint8> *src, Shorts_82DAC730 *out)
{
    for (int i = 0; i < src->getSize(); i++) {
        if ((*src)[i] != 0xff) {
            hkUint16 v = (hkUint16)i;
            out->push(v);
        }
    }
}
