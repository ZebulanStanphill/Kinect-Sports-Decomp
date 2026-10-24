// hkObjectCopier::~hkObjectCopier() (hkObjectCopier.cpp): user-written and empty; its own vtable store is dead, leaving hkBaseObject's. PackfileObjectCopier's deleting destructor (fn_82E12620) calls it.
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

hkObjectCopier::~hkObjectCopier() {}
