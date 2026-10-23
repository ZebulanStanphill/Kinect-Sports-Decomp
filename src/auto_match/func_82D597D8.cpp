// hkpCollisionDispatcher::~hkpCollisionDispatcher (Physics/Collide/Dispatch/hkpCollisionDispatcher.cpp): an
// out-of-line member (fn_82D58828) runs first, then the contact manager factories (8x8 table at +0xC) are
// released; the hkArray at +0x1E24 (8-byte items) is then destroyed.
#include "havok/hkBase.h"

extern "C" void fn_82D58828(void *self);

class hkpContactMgrFactory : public hkReferencedObject {
};

class hkpCollisionDispatcher : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    enum { HK_MAX_RESPONSE_TYPE = 8 };
    struct ShapeInheritance {
        hkUint32 m_a;
        hkUint32 m_b;
    };
    virtual ~hkpCollisionDispatcher();
    void unknown_82D58828() { fn_82D58828(this); }

    hkUint32 m_unknown8;                                                              // +0x8
    hkpContactMgrFactory *m_contactMgrFactory[HK_MAX_RESPONSE_TYPE][HK_MAX_RESPONSE_TYPE];   // +0xC
    hkUint8 m_data[0x1E24 - 0x10C];                                                   // +0x10C
    hkArray<ShapeInheritance> m_shapeInheritance;                                     // +0x1E24
};

hkpCollisionDispatcher::~hkpCollisionDispatcher()
{
    unknown_82D58828();
    for (int i = 0; i < HK_MAX_RESPONSE_TYPE; i++) {
        hkpContactMgrFactory **row = m_contactMgrFactory[i];
        for (int j = 0; j < HK_MAX_RESPONSE_TYPE; j++) {
            if (row[j])
                row[j]->removeReference();
        }
    }
}
