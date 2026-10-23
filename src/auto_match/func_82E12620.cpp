// The scalar deleting destructor of PackfileObjectCopier, a class in an anonymous
// namespace (RTTI: PackfileObjectCopier@?A0x9721bf3b -> hkObjectCopier). Its real
// name contains the anonymous namespace's hash, which a recompile cannot
// reproduce, so it keeps its fn_ name and is written out as the compiler
// generates it: the implicit destructor (only the out-of-line
// ~hkObjectCopier, fn_82E17FB8), then the class allocator's delete.
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

// hkObjectCopier (Common/Serialize/Copier/hkObjectCopier.h, 0x18 bytes).
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

namespace {
class PackfileObjectCopier : public hkObjectCopier {
public:
    PackfileObjectCopier(const hkStructureLayout::LayoutRules &layoutIn, const hkStructureLayout::LayoutRules &layoutOut)
        : hkObjectCopier(layoutIn, layoutOut, 0) {}
};
}

extern "C" void *fn_82E12620(void *p, unsigned int flags)
{
    PackfileObjectCopier *self = static_cast<PackfileObjectCopier *>(p);
    self->PackfileObjectCopier::~PackfileObjectCopier();
    if (flags & 1)
        PackfileObjectCopier::operator delete(self);
    return self;
}
