#ifndef HAVOK_HKPCDBODYPAIRCOLLECTOR_H
#define HAVOK_HKPCDBODYPAIRCOLLECTOR_H

#include "havok/hkBase.h"

class hkpCdBody;

// Receives the pairs of bodies that a penetration query finds. An interface without base class,
// with Havok's non-virtual class allocator; the constructor calls reset().
class hkpCdBodyPairCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpCdBodyPairCollector);
    hkpCdBodyPairCollector() { reset(); }
    virtual ~hkpCdBodyPairCollector() {}
    virtual void addCdBodyPair(const hkpCdBody &bodyA, const hkpCdBody &bodyB) = 0;
    virtual void reset() { m_earlyOut = false; }

    hkBool m_earlyOut;   // +0x4
};

#endif
