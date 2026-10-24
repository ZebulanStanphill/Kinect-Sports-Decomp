// PackfileObjectCopier::PackfileObjectCopier(layoutIn, layoutOut): an hkObjectCopier with the default
// flags (FLAG_NONE, built in a stack temporary and passed by value). The class is in an anonymous
// namespace in the game (??_7PackfileObjectCopier@?A0x9721bf3b@@6B@); its constructor and vtable are
// named here without the namespace, whose hash a recompile cannot reproduce.
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

// Common/Serialize/Copier/hkObjectCopier.h (0x18 bytes).
class hkObjectCopier : public hkReferencedObject {
public:
    enum FlagValues {
        FLAG_NONE = 0,
        FLAG_APPLY_DEFAULT_IF_SERIALIZE_IGNORED = 1,
        FLAG_RESPECT_SERIALIZE_IGNORED = 2
    };
    typedef hkFlags<FlagValues, int> ObjectCopierFlags;

    hkObjectCopier(const hkStructureLayout::LayoutRules &layoutIn, const hkStructureLayout::LayoutRules &layoutOut, ObjectCopierFlags flags = FLAG_NONE);
    virtual ~hkObjectCopier();

    hkStructureLayout::LayoutRules m_layoutIn;    // +0x8
    hkStructureLayout::LayoutRules m_layoutOut;   // +0xC
    ObjectCopierFlags m_flags;                    // +0x10
    hkBool m_byteSwap;                            // +0x14
};

class PackfileObjectCopier : public hkObjectCopier {
public:
    PackfileObjectCopier(const hkStructureLayout::LayoutRules &layoutIn, const hkStructureLayout::LayoutRules &layoutOut);
};

PackfileObjectCopier::PackfileObjectCopier(const hkStructureLayout::LayoutRules &layoutIn, const hkStructureLayout::LayoutRules &layoutOut)
    : hkObjectCopier(layoutIn, layoutOut)
{
}
