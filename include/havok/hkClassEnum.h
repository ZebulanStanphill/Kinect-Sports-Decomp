// hkClassEnum (Common/Base/Reflection/hkClassEnum.h): the reflection
// descriptor of an enum. 0x14 bytes.
#ifndef HAVOK_HKCLASSENUM_H
#define HAVOK_HKCLASSENUM_H

#include "havok/hkArray.h"
#include "havok/hkStreamWriter.h"

class hkCustomAttributes;

class hkClassEnum {
public:
    class Item {
    public:
        int m_value;         // +0x00
        const char *m_name;  // +0x04
    };

    void writeSignature(hkStreamWriter *writer) const;
    hkResult decomposeFlags(int flagValue, hkArray<const char *> &bitsOut, int &bitsOver) const;

    const char *m_name;                // +0x00
    const Item *m_items;               // +0x04
    int m_numItems;                    // +0x08
    hkCustomAttributes *m_attributes;  // +0x0C
    hkUint32 m_flags;                  // +0x10
};

#endif
