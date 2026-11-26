// hkpMoppCode (Physics/Collide/Shape/Compound/Tree/Mopp/Code/hkpMoppCode.h), 0x30 bytes: the byte code of a MOPP
// tree. The size, the members and the BuildType enumerators are the game's hkClass (initialisers 83133B20 for
// CodeInfo and 83133BA8): m_info (+0x10), m_data (an hkArray of bytes, +0x20) and m_buildType (an enum stored in
// an hkInt8, +0x2C).
//
// The finish constructor is inline (finishLoadedObject 82DCA1E0); the destructor is out of line
// (??1hkpMoppCode@@UAA@XZ, 82DCA208). ??_7hkpMoppCode@@6B@ has hkReferencedObject's three slots.
#ifndef HAVOK_HKPMOPPCODE_H
#define HAVOK_HKPMOPPCODE_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"

class hkpMoppCode : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    enum BuildType { BUILT_WITH_CHUNK_SUBDIVISION, BUILT_WITHOUT_CHUNK_SUBDIVISION, BUILD_NOT_SET };

    // 0x10 bytes (hkpMoppCodeCodeInfo): the offset of the tree's integer space, its scale in w.
    struct CodeInfo {
        hkVector4 m_offset;   // +0x0
    };

    hkpMoppCode(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_data(f) {}
    virtual ~hkpMoppCode();   // out of line (82DCA208)

    HK_FORCE_INLINE int getCodeSize() const { return m_data.getSize(); }

    CodeInfo m_info;            // +0x10
    hkArray<hkUint8> m_data;    // +0x20
    hkInt8 m_buildType;         // +0x2C hkEnum<BuildType, hkInt8>
};

#endif
