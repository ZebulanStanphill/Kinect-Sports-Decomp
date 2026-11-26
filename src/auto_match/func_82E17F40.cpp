// hkObjectCopier::hkObjectCopier(layoutIn, layoutOut, flags) (hkObjectCopier.cpp): byte swapping when the two layouts differ in endianness.
// hkObjectCopier (Common/Serialize/Copier/hkObjectCopier.h, 0x18 bytes).
#include "havok/hkObjectCopier.h"

hkObjectCopier::hkObjectCopier(const hkStructureLayout::LayoutRules &layoutIn, const hkStructureLayout::LayoutRules &layoutOut, ObjectCopierFlags flags)
    : m_layoutIn(layoutIn), m_layoutOut(layoutOut), m_flags(flags)
{
    m_byteSwap = m_layoutIn.m_littleEndian != m_layoutOut.m_littleEndian;
}
