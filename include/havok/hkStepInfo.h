// hkStepInfo (Common/Base/Types/Physics/hkStepInfo.h), 0x10 bytes: the time span of one simulation step.
// A struct in the game's mangled names (`ABUhkStepInfo@@` in hkpMouseSpringAction's constructor, 82DF2A08).
// Layout from hkpWorld's constructor (82D86990), which fills the world's step info at +0x1D0 with four
// float stores (+0x0, +0x4, +0x8, +0xC: the end time and the delta time from the same constant, the inverse
// delta time from another), and from the actions' applyAction (82DF0090 reads m_deltaTime at +0x8). It sits
// at +0x50 in hkpProcessCollisionInput and at +0x0 in hkpWorldDynamicsStepInfo. The names follow Havok's
// header (which wraps them in hkPadSpu; on this platform that changes nothing the units show).
// It is 16-aligned: its implicit copy is two 64-bit loads and stores (hkpProcessCollisionInput's copy
// constructor, fn_82D9C790; the agent sector job, 82DC39A0, copies the job's step info so), which with four
// 4-aligned floats would be four word copies; and hkpProcessCollisionInput (0x74 bytes of members) is then
// 0x80 bytes, which is what hkpWorld's constructor allocates for it.
#ifndef HAVOK_HKSTEPINFO_H
#define HAVOK_HKSTEPINFO_H

#include "havok/hkBase.h"

struct __declspec(align(16)) hkStepInfo {
    hkReal m_startTime;      // +0x0
    hkReal m_endTime;        // +0x4
    hkReal m_deltaTime;      // +0x8
    hkReal m_invDeltaTime;   // +0xC
};

#endif
