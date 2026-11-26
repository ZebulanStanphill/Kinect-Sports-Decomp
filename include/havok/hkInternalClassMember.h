// hkInternalClassEnumItem, hkInternalClassEnum and hkInternalClassMember
// (Common/Base/Reflection/hkInternalClassMember.h): the POD images of
// hkClassEnum::Item (0x8 bytes), hkClassEnum (0x14 bytes) and hkClassMember
// (0x18 bytes) that Havok's generated *Class.cpp files define as static
// data and pass to hkClass::hkClass (fn_82CEB3D8) cast to the real types.
// The layouts are those of hkClassEnum.h and hkClassMember.h; the generated
// files' initialisers in the reflection units fill them field by field.
#ifndef HAVOK_HKINTERNALCLASSMEMBER_H
#define HAVOK_HKINTERNALCLASSMEMBER_H

#include "havok/hkBaseTypes.h"

class hkClass;
class hkClassEnum;
class hkCustomAttributes;

struct hkInternalClassEnumItem {
    int m_value;         // +0x00
    const char *m_name;  // +0x04
};

struct hkInternalClassEnum {
    const char *m_name;                        // +0x00
    const hkInternalClassEnumItem *m_items;    // +0x04
    int m_numItems;                            // +0x08
    const hkCustomAttributes *m_attributes;    // +0x0C
    hkUint32 m_flags;                          // +0x10
};

struct hkInternalClassMember {
    const char *m_name;                      // +0x00
    const hkClass *m_class;                  // +0x04
    const hkClassEnum *m_enum;               // +0x08
    hkUint8 m_type;                          // +0x0C (hkClassMember::Type)
    hkUint8 m_subtype;                       // +0x0D (hkClassMember::Type)
    hkInt16 m_cArraySize;                    // +0x0E
    hkUint16 m_flags;                        // +0x10 (hkClassMember::FlagValues)
    hkUint16 m_offset;                       // +0x12
    const hkCustomAttributes *m_attributes;  // +0x14
};

#endif
