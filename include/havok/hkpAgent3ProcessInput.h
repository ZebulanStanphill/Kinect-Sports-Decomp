// hkpAgent3ProcessInput (Physics/Collide/Agent3/hkpAgent3.h, where Havok declares it with the agent3 function
// types), 0x80 bytes: what an agent3 process function gets. The layout is the agent3 process functions' (the
// convex list agent3 82D5B3B0 and the box-box agent3 82D67EF8): the two bodies, the override body A, the
// process input and the contact manager, the transform from B to A at +0x20, a word at +0x60 and the linear TIM
// information at +0x70. 82D5B3B0 copies the whole input to pass another contact manager. Havok's header has its
// pointers as hkPadSpu<..>, which is the plain pointer on this platform. The member names follow Havok's header;
// the word at +0x60 is not named by the game.
#ifndef HAVOK_HKPAGENT3PROCESSINPUT_H
#define HAVOK_HKPAGENT3PROCESSINPUT_H

#include "havok/hkBase.h"
#include "havok/hkTransform.h"

class hkpCdBody;
class hkpContactMgr;
struct hkpProcessCollisionInput;

struct hkpAgent3ProcessInput {
    const hkpCdBody *m_bodyA;                   // +0x0
    const hkpCdBody *m_bodyB;                   // +0x4
    const hkpCdBody *m_overrideBodyA;           // +0x8
    const hkpProcessCollisionInput *m_input;    // +0xC
    hkpContactMgr *m_contactMgr;                // +0x10
    hkTransform m_aTb;                          // +0x20
    hkUint32 m_data60;                          // +0x60, not known
    hkVector4 m_linearTimInfo;                  // +0x70
};

#endif
