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

class hkOArchive {
public:
    hkOArchive(hkStreamWriter *writer, hkBool byteSwap);
    virtual ~hkOArchive();
    int m_data[3];
};

extern "C" {
void fn_82CFE418(hkOArchive *self, int i);                          // hkOArchive::write32
void fn_82CFE3B8(hkOArchive *self, hkUint16 i);                     // hkOArchive::write16u
void fn_82CFE180(hkOArchive *self, const char *buf, int nbytes);    // hkOArchive::writeRaw
int fn_82CFBE40(const char *s);                                     // hkString::strLen
}

void hkClass::writeSignature(hkStreamWriter *w) const
{
    hkOArchive oa(w, true);
    fn_82CFE418(&oa, m_numImplementedInterfaces);
    for (int i = 0; i < m_numDeclaredEnums; ++i)
        m_declaredEnums[i].writeSignature(w);
    fn_82CFE418(&oa, m_numDeclaredEnums);
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
        fn_82CFE180(&oa, mem.m_name, fn_82CFBE40(mem.m_name));
        fn_82CFE3B8(&oa, mem.m_type);
        fn_82CFE3B8(&oa, mem.m_subtype);
        if (extraSubtype)
            fn_82CFE3B8(&oa, extraSubtype);
        fn_82CFE3B8(&oa, mem.m_cArraySize);
        fn_82CFE3B8(&oa, mem.m_flags);
    }
    fn_82CFE418(&oa, m_numDeclaredMembers);
}
