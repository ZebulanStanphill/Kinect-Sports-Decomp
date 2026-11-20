// hkClassMember (Common/Base/Reflection/hkClassMember.h): the reflection
// descriptor of one member of a Havok class. 0x18 bytes.
#ifndef HAVOK_HKCLASSMEMBER_H
#define HAVOK_HKCLASSMEMBER_H

#include "havok/hkBaseTypes.h"

class hkClass;
class hkClassEnum;
class hkCustomAttributes;

class hkClassMember {
public:
    enum Type {
        TYPE_VOID = 0,
        TYPE_BOOL,
        TYPE_CHAR,
        TYPE_INT8,
        TYPE_UINT8,
        TYPE_INT16,
        TYPE_UINT16,
        TYPE_INT32,
        TYPE_UINT32,
        TYPE_INT64,
        TYPE_UINT64,
        TYPE_REAL,
        TYPE_VECTOR4,
        TYPE_QUATERNION,
        TYPE_MATRIX3,
        TYPE_ROTATION,
        TYPE_QSTRANSFORM,
        TYPE_MATRIX4,
        TYPE_TRANSFORM,
        TYPE_ZERO,
        TYPE_POINTER,
        TYPE_FUNCTIONPOINTER,
        TYPE_ARRAY,
        TYPE_INPLACEARRAY,
        TYPE_ENUM,
        TYPE_STRUCT,
        TYPE_SIMPLEARRAY,
        TYPE_HOMOGENEOUSARRAY,
        TYPE_VARIANT,
        TYPE_CSTRING,
        TYPE_ULONG,
        TYPE_FLAGS,
        TYPE_HALF,
        TYPE_STRINGPTR,
        TYPE_MAX
    };

    enum FlagValues {
        FLAGS_NONE = 0,
        ALIGN_8 = 0x80,
        ALIGN_16 = 0x100,
        NOT_OWNED = 0x200,
        SERIALIZE_IGNORED = 0x400
    };

    // One entry per Type (lbl_8317F680).
    struct TypeProperties {
        hkUint8 m_type;      // +0x00
        const char *m_name;  // +0x04
        hkInt16 m_size;      // +0x08
        hkInt16 m_align;     // +0x0A
    };

    static const TypeProperties &HK_CALL getClassMemberTypeProperties(Type type);

    const hkClass *getClass() const;
    const hkClass &getStructClass() const;
    const hkClassEnum &getEnumClass() const;
    int getCstyleArraySize() const;
    int getSizeInBytes() const;

    const char *m_name;                      // +0x00
    const hkClass *m_class;                  // +0x04
    const hkClassEnum *m_enum;               // +0x08
    hkUint8 m_type;                          // +0x0C (Type)
    hkUint8 m_subtype;                       // +0x0D (Type)
    hkInt16 m_cArraySize;                    // +0x0E
    hkUint16 m_flags;                        // +0x10 (FlagValues)
    hkUint16 m_offset;                       // +0x12
    const hkCustomAttributes *m_attributes;  // +0x14
};

#endif
