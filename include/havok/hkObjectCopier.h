// hkObjectCopier (Common/Serialize/Copier/hkObjectCopier.h), 0x18 bytes: copies a reflected object from one
// structure layout to another. The members and their order are those the constructor
// (??0hkObjectCopier@@QAA@ABULayoutRules@hkStructureLayout@@0V?$hkFlags@W4FlagValues@hkObjectCopier@@H@@@Z,
// 82E17F40) fills in; its mangled name gives the flags type. The destructor is user-written, empty and out of
// line (??1hkObjectCopier@@UAA@XZ, 82E17FB8). The FlagValues names follow Havok's header.
// ??_7hkObjectCopier@@6B@ (8214B510, 6 slots): copyObject (its mangled name, 82E19B50), then
// areMembersCompatible (82E181D8: same member type, and the same subtype unless the type is TYPE_ENUM; the name
// is Havok's) and a slot not identified (fn_82DA1B98, a shared function that returns its argument).
#ifndef HAVOK_HKOBJECTCOPIER_H
#define HAVOK_HKOBJECTCOPIER_H

#include "havok/hkBase.h"
#include "havok/hkFlags.h"
#include "havok/hkStructureLayout.h"

class hkClassMember;
class hkRelocationInfo;
class hkStreamWriter;

class hkObjectCopier : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    enum FlagValues {
        FLAG_NONE = 0,
        FLAG_APPLY_DEFAULT_IF_SERIALIZE_IGNORED = 1,
        FLAG_RESPECT_SERIALIZE_IGNORED = 2
    };
    typedef hkFlags<FlagValues, int> ObjectCopierFlags;

    hkObjectCopier(const hkStructureLayout::LayoutRules &layoutIn, const hkStructureLayout::LayoutRules &layoutOut,
                   ObjectCopierFlags flags = FLAG_NONE);
    virtual ~hkObjectCopier();

    virtual hkResult copyObject(const void *dataIn, const hkClass &klassIn, hkStreamWriter *dataOut,
                                const hkClass &klassOut, hkRelocationInfo &reloc);                    // +0xC
    virtual hkBool32 areMembersCompatible(const hkClassMember &src, const hkClassMember &dst);      // +0x10
    virtual void *unknown14(void *p);                                                               // +0x14

    hkStructureLayout::LayoutRules m_layoutIn;    // +0x8
    hkStructureLayout::LayoutRules m_layoutOut;   // +0xC
    ObjectCopierFlags m_flags;                    // +0x10
    hkBool m_byteSwap;                            // +0x14
};

#endif
