// hkClass::writeSignature(hkStreamWriter *) const (Common/Base/Reflection/hkClass.cpp):
// writes the number of implemented interfaces, every declared enum's signature and
// count, then for each declared member a copy adjusted for signing (enums and flags
// record their storage size in the flags and drop the subtype; SERIALIZE_IGNORED
// members become TYPE_ZERO with the old type as subtype), the member's class chain
// and enum signatures, and the member's name, types, array size and flags, then the
// member count.
// Notes: getClassMemberTypeProperties takes the Type enum, not the hkUint8 storage
// (the conversion changes the register allocation); the members array is read into
// a local (base first in the add); the flags are updated before the subtype is
// cleared (otherwise the member copy's destination address is folded to one addi).
#include "havok/hkClass.h"

#include "havok/hkOArchive.h"

void hkClass::writeSignature(hkStreamWriter *w) const
{
    hkOArchive oa(w, true);
    oa.write32(m_numImplementedInterfaces);
    for (int i = 0; i < m_numDeclaredEnums; ++i)
        m_declaredEnums[i].writeSignature(w);
    oa.write32(m_numDeclaredEnums);
    for (int i = 0; i < m_numDeclaredMembers; ++i) {
        const hkClassMember *members = m_declaredMembers;
        const hkClassMember &member = members[i];
        hkClassMember mem = member;
        if (mem.m_type == hkClassMember::TYPE_ENUM || mem.m_type == hkClassMember::TYPE_FLAGS) {
            int size = hkClassMember::getClassMemberTypeProperties((hkClassMember::Type)mem.m_subtype).m_size;
            mem.m_flags = (hkUint16)((size << 3) ^ mem.m_flags);
            mem.m_subtype = hkClassMember::TYPE_VOID;
        }
        hkInt16 extraSubtype = 0;
        if (mem.m_flags & hkClassMember::SERIALIZE_IGNORED) {
            mem.m_flags ^= hkClassMember::SERIALIZE_IGNORED;
            if (mem.m_subtype)
                extraSubtype = mem.m_subtype;
            mem.m_subtype = mem.m_type;
            mem.m_type = hkClassMember::TYPE_ZERO;
        }
        if (mem.m_class && member.m_type != hkClassMember::TYPE_POINTER &&
            member.m_subtype != hkClassMember::TYPE_POINTER) {
            for (const hkClass *c = member.getClass(); c; c = c->m_parent)
                c->writeSignature(w);
        }
        if (mem.m_enum)
            member.getEnumClass().writeSignature(w);
        oa.writeRaw(mem.m_name, hkString::strLen(mem.m_name));
        oa.write16(mem.m_type);
        oa.write16(mem.m_subtype);
        if (extraSubtype)
            oa.write16(extraSubtype);
        oa.write16(mem.m_cArraySize);
        oa.write16(mem.m_flags);
    }
    oa.write32(m_numDeclaredMembers);
}
