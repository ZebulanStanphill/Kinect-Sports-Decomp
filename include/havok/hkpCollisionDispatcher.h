#ifndef HAVOK_HKPCOLLISIONDISPATCHER_H
#define HAVOK_HKPCOLLISIONDISPATCHER_H

#include "havok/hkBase.h"
#include "havok/hkpCdBody.h"
#include "havok/hkpCollisionInput.h"

class hkpCollisionAgent;
class hkpContactMgr;

// hkpCollisionDispatcher (Physics/Collide/Dispatch/hkpCollisionDispatcher.h): the 32x32 agent type tables at +0x1A0
// and +0x5A0 (predictive) and the 0x14-byte AgentFuncs at +0x9A0, as getNewCollisionAgent reads them.
class hkpCollisionDispatcher : public hkReferencedObject {
public:
    enum { HK_MAX_SHAPE_TYPE = 32 };
    typedef hkpCollisionAgent *(HK_CALL *CreateFunc)(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                     const hkpCollisionInput &input, hkpContactMgr *mgr);
    struct AgentFuncs {
        CreateFunc m_createFunc;
        void *m_getPenetrationsFunc;
        void *m_getClosestPointFunc;
        void *m_linearCastFunc;
        hkBool m_isFlipped;
        hkBool m_isPredictive;
    };

    virtual ~hkpCollisionDispatcher();   // out of line (fn_82D597D8)

    HK_FORCE_INLINE hkpCollisionAgent *getNewCollisionAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                            const hkpCollisionInput &input, hkpContactMgr *mgr) const
    {
        int typeA = bodyA.getShape()->m_type;
        int typeB = bodyB.getShape()->m_type;
        const hkUint8 (*table)[HK_MAX_SHAPE_TYPE] = input.m_createPredictiveAgents ? m_agent2TypesPred : m_agent2Types;
        int agentType = table[typeA][typeB];
        CreateFunc f = m_agent2Func[agentType].m_createFunc;
        return f(bodyA, bodyB, input, mgr);
    }

    hkUint8 m_members[0x198];                                          // +0x8
    hkUint8 m_agent2Types[HK_MAX_SHAPE_TYPE][HK_MAX_SHAPE_TYPE];       // +0x1A0
    hkUint8 m_agent2TypesPred[HK_MAX_SHAPE_TYPE][HK_MAX_SHAPE_TYPE];   // +0x5A0
    AgentFuncs m_agent2Func[32];                                       // +0x9A0
};

#endif
