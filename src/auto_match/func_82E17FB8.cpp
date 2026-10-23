// hkObjectCopier::~hkObjectCopier() (hkObjectCopier.cpp): user-written and empty; its own vtable store is dead, leaving hkBaseObject's. PackfileObjectCopier's deleting destructor (fn_82E12620) calls it.
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

hkObjectCopier::~hkObjectCopier() {}
