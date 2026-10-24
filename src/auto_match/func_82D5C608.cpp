// Collision agent factory (keeps its fn_ name), Physics/Collide/Agent/...: with a contact manager, asks the
// dispatcher (vtable +0xC) which case applies and creates a hkpSymmetricAgent<hkpConvexListAgent> (0x90 bytes),
// a hkpShapeCollectionAgent (0x38) or a hkpPredGskfAgent (0x80); without one, a hkpShapeCollectionAgent.
// The agents use Havok's class allocator (blockAlloc + m_memSizeAndFlags, no null check). The base
// constructors are out of line: hkpGskfAgent's (renamed), hkpConvexListAgent's (fn_82D5C050, keeps its
// fn_ name) and hkpShapeCollectionAgent's (renamed).
#include "havok/hkBase.h"

class hkpCdBody;
struct hkpCollisionInput;
class hkpContactMgr;

extern "C" {
void fn_82D5C050(void *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpContactMgr *mgr);   // hkpConvexListAgent::hkpConvexListAgent
}

#define AGENT_ALLOCATOR \
    static HK_FORCE_INLINE void *operator new(unsigned n) \
    { \
        hkReferencedObject *b = (hkReferencedObject *)hkMemoryRouter::getInstance().heap().blockAlloc(n); \
        b->m_memSizeAndFlags = n; \
        return b; \
    }

class __declspec(novtable) hkpGskfAgent {
public:
    AGENT_ALLOCATOR
    hkpGskfAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *mgr);
    virtual ~hkpGskfAgent() {}

    unsigned short m_memSizeAndFlags;
    unsigned short m_referenceCount;
    char m_data[0x78];
};

class hkpPredGskfAgent : public hkpGskfAgent {
public:
    hkpPredGskfAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *mgr) : hkpGskfAgent(bodyA, bodyB, mgr) {}
};

class __declspec(novtable) hkpConvexListAgent {
public:
    AGENT_ALLOCATOR
    hkpConvexListAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
    {
        fn_82D5C050(this, bodyA, bodyB, input, mgr);
    }
    virtual ~hkpConvexListAgent() {}

    unsigned short m_memSizeAndFlags;
    unsigned short m_referenceCount;
    char m_data[0x88];
};

template <class AGENT>
class hkpSymmetricAgent : public AGENT {
public:
    hkpSymmetricAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
        : AGENT(bodyB, bodyA, input, mgr)
    {
    }
};

class hkpShapeCollectionAgent : public hkReferencedObject {
public:
    hkpShapeCollectionAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);

    char m_data[0x30];
};

class Dispatcher {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual unsigned getCase(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input);   // +0xC
};

struct hkpCollisionInput {
    char m_pad[0x10];
    Dispatcher *m_dispatcher;   // +0x10
};

extern "C" void *fn_82D5C608(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    if (mgr) {
        switch (input.m_dispatcher->getCase(bodyA, bodyB, input)) {
        case 0:
            return new hkpSymmetricAgent<hkpConvexListAgent>(bodyA, bodyB, input, mgr);
        case 1:
            return new hkpShapeCollectionAgent(bodyA, bodyB, input, mgr);
        case 2:
            return new hkpPredGskfAgent(bodyA, bodyB, mgr);
        default:
            return 0;
        }
    }
    return new hkpShapeCollectionAgent(bodyA, bodyB, input, 0);
}
