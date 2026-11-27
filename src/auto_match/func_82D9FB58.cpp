// hkpLinearParametricCurve::getPointsToDraw (slot +0x2C of ??_7hkpLinearParametricCurve@@6B@): copies the points
// (hkArray's assignment; hkArray.h has none yet, so it is written out here).
#include "havok/hkpLinearParametricCurve.h"

template <typename T>
static HK_FORCE_INLINE void copyArray(hkArray<T> &dst, const hkArray<T> &src)
{
    hkMemoryAllocator &a = hkContainerHeapAllocator::get(&dst);
    const int cap = dst.getCapacity();
    if (cap < src.m_size) {
        if ((dst.m_capacityAndFlags & hkArray<T>::DONT_DEALLOCATE_FLAG) == 0) {
            a.bufFree(dst.m_data, cap, sizeof(T));
        }
        int sz = src.m_size;
        dst.m_data = (T *)a.bufAlloc(sz, sizeof(T));
        dst.m_capacityAndFlags = sz;
    }
    const int n = src.m_size;
    T *d = dst.m_data;
    dst.m_size = n;
    const T *s = src.m_data;
    for (int i = 0; i < n; i++) {
        d[i] = s[i];
    }
}

void hkpLinearParametricCurve::getPointsToDraw(hkArray<hkVector4> &pathPoints)
{
    copyArray(pathPoints, m_points);
}
