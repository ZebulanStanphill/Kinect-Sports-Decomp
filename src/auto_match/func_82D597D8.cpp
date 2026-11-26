// hkpCollisionDispatcher::~hkpCollisionDispatcher (Physics/Collide/Dispatch/hkpCollisionDispatcher.cpp): the
// debug tables are freed first, then the contact manager factories (8x8 table at +0xC) are released; the
// hkArray at +0x1E24 (8-byte items) is then destroyed.
#include "havok/hkpCollisionDispatcher.h"

class hkpContactMgrFactory : public hkReferencedObject {
};

hkpCollisionDispatcher::~hkpCollisionDispatcher()
{
    disableDebugging();
    for (int i = 0; i < HK_MAX_RESPONSE_TYPE; i++) {
        hkpContactMgrFactory **row = m_contactMgrFactory[i];
        for (int j = 0; j < HK_MAX_RESPONSE_TYPE; j++) {
            if (row[j])
                row[j]->removeReference();
        }
    }
}
