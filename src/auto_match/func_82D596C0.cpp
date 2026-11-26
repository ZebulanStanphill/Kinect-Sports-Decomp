// hkpCollisionDispatcher::hkpCollisionDispatcher (Physics/Collide/Dispatch/hkpCollisionDispatcher.cpp): every
// cell of the contact manager factory table gets the default factory, the alternate-type masks start as
// 1 << type, and resetCreationFunctions (82D585E0) fills in the rest.
#include "havok/hkpCollisionDispatcher.h"

class hkpContactMgrFactory : public hkReferencedObject {
};

static HK_FORCE_INLINE void row(hkpContactMgrFactory **out, hkpContactMgrFactory *p)
{
    for (int j = 0; j < 8; ++j) {
        out[j] = p;
        if (p)
            p->addReference();
    }
}

hkpCollisionDispatcher::hkpCollisionDispatcher(void *defaultCollisionAgent, hkReferencedObject *defaultContactMgrFactory)
    : m_defaultCollisionAgent(defaultCollisionAgent), m_debugAgent2Table(HK_NULL), m_debugAgent2TablePred(HK_NULL),
      m_debugAgent3Table(HK_NULL), m_debugAgent3TablePred(HK_NULL)
{
    m_collisionAgentRegistered = false;
    m_checkEnabled = true;
    m_numAgent3Types = 0;
    m_midphaseAgent3Registered = false;
    hkpContactMgrFactory **dest = &m_contactMgrFactory[0][0];
    for (int i = 8; i; --i, dest += 8)
        row(dest, static_cast<hkpContactMgrFactory *>(defaultContactMgrFactory));
    unsigned int mask = 1;
    for (int i = 0; i < 32; ++i) {
        m_hasAlternateType[i] = mask;
        mask = (mask << 1) | (mask >> 31);
    }
    resetCreationFunctions();
    m_agent3Registered = false;
}
