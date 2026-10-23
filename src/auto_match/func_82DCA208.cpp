// hkpMoppCode::~hkpMoppCode (Physics/Collide/Shape/Compound/Tree/Mopp/hkpMoppCode.h): an empty user-written
// destructor, so the class vtable is stored first; then the m_data array (+0x20) is destroyed.
#include "havok/hkBase.h"

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkpMoppCode : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    struct CodeInfo {
        hkVector4 m_offset;
    };
    hkpMoppCode(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_data(f) {}
    virtual ~hkpMoppCode();

    CodeInfo m_info;            // +0x10
    hkArray<hkUint8> m_data;    // +0x20
    hkInt8 m_buildType;         // +0x2C
};

hkpMoppCode::~hkpMoppCode()
{
}
