// hkClass::writeSignature(hkStreamWriter *) const (Common/Base/Reflection/hkClass.cpp), kept as a plain fn_
// function: writes the class version, every declared enum's signature and count, then for each declared
// member a copy adjusted for signing (enums and flags record their storage size in the flags and drop the
// subtype; SERIALIZE_IGNORED members become TYPE_ZERO with the old type as subtype), the member's class
// chain and enum signatures, and the member's name, types, array size and flags, then the member count.
// Notes: hkClassMember::getClassMemberTypeProperties (fn_82CFD4F0) takes the Type enum, not the hkUint8
// storage (the conversion changes the register allocation); the members array is read into a local (base
// first in the add); the flags are updated before the subtype is cleared (otherwise the member copy's
// destination address is folded to one addi).
#include "havok/hkBase.h"

class hkStreamWriter;
class hkClassEnum {
public:
    int m_data[5];   // 0x14 bytes
};

class hkOArchive {
public:
    hkOArchive(hkStreamWriter *writer, hkBool byteSwap);
    virtual ~hkOArchive();
    int m_data[3];
};

class hkClass;
class hkClassMember {
public:
    enum Type { TYPE_VOID = 0, TYPE_ZERO = 19, TYPE_POINTER = 20, TYPE_ENUM = 24, TYPE_FLAGS = 31 };
    enum FlagValues { SERIALIZE_IGNORED = 0x400 };
    struct TypeProperties {
        int m_type;
        const char *m_name;
        hkInt16 m_size;
        hkInt16 m_align;
    };

    const char *m_name;              // +0x0
    const hkClass *m_class;          // +0x4
    const hkClassEnum *m_enum;       // +0x8
    hkUint8 m_type;                  // +0xc
    hkUint8 m_subtype;               // +0xd
    hkUint16 m_cArraySize;           // +0xe
    hkUint16 m_flags;                // +0x10
    hkUint16 m_offset;               // +0x12
    const void *m_attributes;        // +0x14
};

class hkClass {
public:
    const char *m_name;                      // +0x0
    const hkClass *m_parent;                 // +0x4
    int m_objectSize;                        // +0x8
    int m_describedVersion;                  // +0xc
    const hkClassEnum *m_declaredEnums;      // +0x10
    int m_numDeclaredEnums;                  // +0x14
    const hkClassMember *m_declaredMembers;  // +0x18
    int m_numDeclaredMembers;                // +0x1c

    const hkClassEnum &getDeclaredEnum(int i) const { return m_declaredEnums[i]; }
};

extern "C" {
void fn_82CFE418(hkOArchive *self, int i);                          // hkOArchive::write32
void fn_82CFE3B8(hkOArchive *self, hkUint16 i);                     // hkOArchive::write16u
void fn_82CFE180(hkOArchive *self, const char *buf, int nbytes);    // hkOArchive::writeRaw
int fn_82CFBE40(const char *s);                                     // hkString::strLen
void fn_82CFE8F8(const hkClassEnum *self, hkStreamWriter *writer);  // hkClassEnum::writeSignature
const hkClassMember::TypeProperties *fn_82CFD4F0(hkClassMember::Type type);   // getClassMemberTypeProperties
const hkClass *fn_82CFD5B0(const hkClassMember *self);              // hkClassMember::getClass
const hkClassEnum *fn_82CFD5B8(const hkClassMember *self);          // hkClassMember::getEnumClass
void fn_82CEB628(const hkClass *self, hkStreamWriter *writer);
}

extern "C" void fn_82CEB628(const hkClass *self, hkStreamWriter *writer)
{
    hkOArchive oa(writer, true);
    fn_82CFE418(&oa, self->m_describedVersion);
    for (int i = 0; i < self->m_numDeclaredEnums; ++i)
        fn_82CFE8F8(&self->getDeclaredEnum(i), writer);
    fn_82CFE418(&oa, self->m_numDeclaredEnums);
    for (int i = 0; i < self->m_numDeclaredMembers; ++i) {
        const hkClassMember *members = self->m_declaredMembers;
        const hkClassMember &member = members[i];
        hkClassMember mem = member;
        if (mem.m_type == hkClassMember::TYPE_ENUM || mem.m_type == hkClassMember::TYPE_FLAGS) {
            int size = fn_82CFD4F0((hkClassMember::Type)mem.m_subtype)->m_size;
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
            for (const hkClass *c = fn_82CFD5B0(&member); c; c = c->m_parent)
                fn_82CEB628(c, writer);
        }
        if (mem.m_enum)
            fn_82CFE8F8(fn_82CFD5B8(&member), writer);
        fn_82CFE180(&oa, mem.m_name, fn_82CFBE40(mem.m_name));
        fn_82CFE3B8(&oa, mem.m_type);
        fn_82CFE3B8(&oa, mem.m_subtype);
        if (extraSubtype)
            fn_82CFE3B8(&oa, extraSubtype);
        fn_82CFE3B8(&oa, mem.m_cArraySize);
        fn_82CFE3B8(&oa, mem.m_flags);
    }
    fn_82CFE418(&oa, self->m_numDeclaredMembers);
}
