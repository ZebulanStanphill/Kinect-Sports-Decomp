// hkpAgent1nTrack (Physics/Collide/Agent3/Machine/1n/hkpAgent1nTrack.h), 0xC bytes: the sectors of the
// agents an 1-n agent (hkpListAgent, hkpBvTreeStreamAgent, the convex list agent's stream data) keeps for
// the children of its compound body.
// The destructor is out of line, fn_82CE4C80 (it frees the sector array; a Matching C unit defines it, so it
// keeps its fn_ name): the deleting destructors of hkpListAgent (82D5FDA0) and hkpBvTreeStreamAgent (82D54FD8)
// call it and nothing else for the track. The array is an hkArrayBase so that it is not destroyed twice.
// hkAgent1nMachine_InitTrack (Physics/Collide/Agent3/Machine/1n/hkpAgent1nMachine.h) is the function the
// agents' constructors call on their track (fn_82D70F30, which a Matching unit defines); it is declared here,
// with the track, because nothing else of hkpAgent1nMachine.h is declared yet.
#ifndef HAVOK_HKPAGENT1NTRACK_H
#define HAVOK_HKPAGENT1NTRACK_H

#include "havok/hkBase.h"

class hkpAgent1nSector;
struct hkpAgent1nTrack;

extern "C" {
void fn_82CE4C80(hkpAgent1nTrack *self);    // hkpAgent1nTrack::~hkpAgent1nTrack
void fn_82D70F30(hkpAgent1nTrack *track);   // hkAgent1nMachine_InitTrack
}

struct hkpAgent1nTrack {
    HK_FORCE_INLINE ~hkpAgent1nTrack() { fn_82CE4C80(this); }

    hkArrayBase<hkpAgent1nSector *> m_sectors;   // +0x0
};

static HK_FORCE_INLINE void hkAgent1nMachine_InitTrack(hkpAgent1nTrack &track) { fn_82D70F30(&track); }

#endif
