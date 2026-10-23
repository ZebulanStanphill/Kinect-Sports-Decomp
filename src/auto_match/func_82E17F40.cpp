// hkObjectCopier::hkObjectCopier(layoutIn, layoutOut, flags) (hkObjectCopier.cpp): byte swapping when the two layouts differ in endianness. The flags type (int) is a guess.
// hkObjectCopier (Common/Serialize/Copier/hkObjectCopier.h, 0x18 bytes).
#include "havok/hkBase.h"

class hkStructureLayout {
public:
    struct LayoutRules {
        hkUint8 m_bytesInPointer;
        hkUint8 m_littleEndian;
        hkUint8 m_reusePaddingOptimization;
        hkUint8 m_emptyBaseClassOptimization;
    };
};

class hkObjectCopier : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    hkObjectCopier(const hkStructureLayout::LayoutRules &layoutIn, const hkStructureLayout::LayoutRules &layoutOut, int flags);
    virtual ~hkObjectCopier();   // out of line (fn_82E17FB8)

    hkStructureLayout::LayoutRules m_layoutIn;    // +0x8
    hkStructureLayout::LayoutRules m_layoutOut;   // +0xC
    int m_flags;                                  // +0x10
    hkBool m_byteSwap;                            // +0x14
};

hkObjectCopier::hkObjectCopier(const hkStructureLayout::LayoutRules &layoutIn, const hkStructureLayout::LayoutRules &layoutOut, int flags)
    : m_layoutIn(layoutIn), m_layoutOut(layoutOut), m_flags(flags)
{
    m_byteSwap = m_layoutIn.m_littleEndian != m_layoutOut.m_littleEndian;
}
