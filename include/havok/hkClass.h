// hkClass (Common/Base/Reflection/hkClass.h): the reflection descriptor of a
// Havok class. 0x30 bytes. The constructor keeps its old name (??0hkClass@@...
// is referenced by hundreds of class-descriptor units) and is not declared here.
#ifndef HAVOK_HKCLASS_H
#define HAVOK_HKCLASS_H

#include "havok/hkClassEnum.h"
#include "havok/hkClassMember.h"

class hkClass {
public:
    int getObjectSize() const;
    int getNumMembers() const;
    const hkClassMember &getMember(int memberIndex) const;
    hkClassMember &getMember(int memberIndex);
    void writeSignature(hkStreamWriter *w) const;

    const char *m_name;                       // +0x00
    const hkClass *m_parent;                  // +0x04
    int m_objectSize;                         // +0x08
    int m_numImplementedInterfaces;           // +0x0C
    const hkClassEnum *m_declaredEnums;       // +0x10
    int m_numDeclaredEnums;                   // +0x14
    const hkClassMember *m_declaredMembers;   // +0x18
    int m_numDeclaredMembers;                 // +0x1C
    const void *m_defaults;                   // +0x20
    const hkCustomAttributes *m_attributes;   // +0x24
    hkUint32 m_flags;                         // +0x28
    int m_describedVersion;                   // +0x2C
};

#endif
