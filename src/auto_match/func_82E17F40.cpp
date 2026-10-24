// hkObjectCopier::hkObjectCopier(layoutIn, layoutOut, flags) (hkObjectCopier.cpp): byte swapping when the two layouts differ in endianness.
// hkObjectCopier (Common/Serialize/Copier/hkObjectCopier.h, 0x18 bytes).
#include "havok/hkBase.h"
#include "havok/hkFlags.h"

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
    enum FlagValues {
        FLAG_NONE = 0,
        FLAG_APPLY_DEFAULT_IF_SERIALIZE_IGNORED = 1,
        FLAG_RESPECT_SERIALIZE_IGNORED = 2
    };
    typedef hkFlags<FlagValues, int> ObjectCopierFlags;

    hkObjectCopier(const hkStructureLayout::LayoutRules &layoutIn, const hkStructureLayout::LayoutRules &layoutOut, ObjectCopierFlags flags = FLAG_NONE);
    virtual ~hkObjectCopier();   // out of line (fn_82E17FB8)

    hkStructureLayout::LayoutRules m_layoutIn;    // +0x8
    hkStructureLayout::LayoutRules m_layoutOut;   // +0xC
    ObjectCopierFlags m_flags;                    // +0x10
    hkBool m_byteSwap;                            // +0x14
};

hkObjectCopier::hkObjectCopier(const hkStructureLayout::LayoutRules &layoutIn, const hkStructureLayout::LayoutRules &layoutOut, ObjectCopierFlags flags)
    : m_layoutIn(layoutIn), m_layoutOut(layoutOut), m_flags(flags)
{
    m_byteSwap = m_layoutIn.m_littleEndian != m_layoutOut.m_littleEndian;
}
