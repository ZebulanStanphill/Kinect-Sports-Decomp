// hkUFloat8::operator=(const hkReal &) (Common/Base/Types/hkBaseTypes.cpp): a binary search of the
// 256-entry float table, compared through the bits (all entries are positive).
#include "havok/hkUFloat8.h"

#define MIDDLE_82CE5458(lo, hi) ((const int *)(((hkUlong)(hi) >> 1) + ((hkUlong)(lo) >> 1)))

hkUFloat8 &hkUFloat8::operator=(const hkReal &fv)
{
    const int *table = reinterpret_cast<const int *>(lbl_82131F88);
    int bits = *reinterpret_cast<const int *>(&fv);
    const int *lo = table;
    const int *hi;
    const int *mid;

    // 0x3C23D70A = table[1] (0.01f)
    if (bits < 0x3c23d70a) {
        m_value = 0;
        return *this;
    }
    hi = table + 256;
    // 0x4358CCCD = table[128]
    if (bits > 0x4358cccd) {
        lo = table + 128;
    } else {
        hi = table + 128;
    }
    for (int i = 0; i < 6; i++) {
        mid = MIDDLE_82CE5458(lo, hi);
        if (bits > *mid) {
            lo = mid;
        } else {
            hi = mid;
        }
    }
    mid = MIDDLE_82CE5458(lo, hi);
    if (bits > *mid && mid < table + 255) {
        mid++;
    }
    m_value = hkUint8(mid - table);
    return *this;
}
