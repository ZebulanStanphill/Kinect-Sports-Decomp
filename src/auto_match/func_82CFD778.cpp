#include "havok/hkClass.h"

// The TypeProperties table indexed by hkClassMember::Type.
extern "C" const hkClassMember::TypeProperties lbl_8317F680[];

// hkClassMember::getAlignment() const (probably), kept on its fn_ name.
extern "C" int fn_82CFD778(const hkClassMember *member);

static __forceinline int BaseAlign_82CFD778(const hkClassMember *member)
{
    int type = member->m_type;
    int align;
    int i;

    if (type == hkClassMember::TYPE_ENUM || type == hkClassMember::TYPE_FLAGS) {
        type = member->m_subtype;
    }
    if (type == hkClassMember::TYPE_STRUCT) {
        align = 1;
        for (i = 0; i < member->m_class->getNumMembers(); i++) {
            if (fn_82CFD778(&member->m_class->getMember(i)) > align) {
                align = fn_82CFD778(&member->m_class->getMember(i));
            }
        }
        return align;
    }
    return lbl_8317F680[type].m_align;
}

extern "C" int fn_82CFD778(const hkClassMember *member)
{
    int align = BaseAlign_82CFD778(member);
    int extra;

    if ((member->m_flags & (hkClassMember::ALIGN_8 | hkClassMember::ALIGN_16)) != 0) {
        extra = ((unsigned char)(member->m_flags >> 8) & 1) ? 16 : 8;
        if (extra > align) {
            align = extra;
        }
    }
    return align;
}
