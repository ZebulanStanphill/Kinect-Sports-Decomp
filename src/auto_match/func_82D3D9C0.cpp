// hkpListShape::disableChild(hkpShapeKey) (Physics/Collide/Shape/Compound/Collection/List/hkpListShape.cpp): clears
// the child's bit in m_enabledChildren and counts it in m_numDisabledChildren when it was set.
#include "havok/hkpListShape.h"

void hkpListShape::disableChild(hkpShapeKey index)
{
    hkUint32 &word = m_enabledChildren[index >> 5];
    int old = word;
    int bits = old & ~(1 << (index & 0x1f));
    if (old != bits) {
        word = bits;
        m_numDisabledChildren++;
    }
}
