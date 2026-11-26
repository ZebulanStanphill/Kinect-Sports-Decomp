// hkpProcessCollisionInput (Physics/Collide/Agent/hkpProcessCollisionInput.h), 0x80 bytes: the collision input
// the agents' processCollision gets, an hkpCollisionInput with the step and the world's agent settings.
//
// Layout from hkpWorld's constructor (fn_82D86990), which allocates 0x80 bytes, clears +0x64 (this inline
// constructor) and fills the rest: the dispatcher (+0x0), the tolerance from hkpWorldCinfo (+0x8), the filters
// (+0xC, +0x10), +0x14 cleared, the step info (+0x50..+0x5C) cleared, +0x60 the dispatcher's collision quality
// info (+0x1C60: m_collisionQualityInfo[1]), +0x68 the world's m_dynamicsStepInfo, the cinfo's
// m_enableDeprecatedWelding at +0x6C and m_allowToSkipConfirmedCallbacks at +0x6D, and at +0x70 a new 0x10-byte
// block holding the cinfo's iterative linear cast settings (hkpCollisionAgentConfig, no header). The copy
// constructor is out of line (fn_82D9C790, a C unit): it copies everything but +0x64, which it clears, copying
// the step info as two 64-bit words (hkStepInfo is 16-aligned). The scalar deleting destructor (fn_82D89688)
// frees the spare agent sector (0x200 bytes) and then the object (0x80 bytes) from the heap; the destructor is
// inline (the agent sector job, 82DC39A0, expands it). The world's destructor frees the block at +0x70 itself.
// The names follow Havok's header, whose members are these in this order.
#ifndef HAVOK_HKPPROCESSCOLLISIONINPUT_H
#define HAVOK_HKPPROCESSCOLLISIONINPUT_H

#include "havok/hkBase.h"
#include "havok/hkpCollisionInput.h"
#include "havok/hkStepInfo.h"

struct hkpCollisionQualityInfo;
struct hkpCollisionAgentConfig;
struct hkpProcessCollisionInput;

extern "C" void fn_82D9C790(hkpProcessCollisionInput *self, const hkpProcessCollisionInput *other);   // copy constructor

struct hkpProcessCollisionInput : public hkpCollisionInput {
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpProcessCollisionInput);
    HK_FORCE_INLINE hkpProcessCollisionInput() : m_spareAgentSector(HK_NULL) {}
    HK_FORCE_INLINE hkpProcessCollisionInput(const hkpProcessCollisionInput &other) { fn_82D9C790(this, &other); }
    HK_FORCE_INLINE ~hkpProcessCollisionInput()
    {
        if (m_spareAgentSector)
            hkMemoryRouter::getInstance().heap().blockFree(m_spareAgentSector, 0x200);
    }

    hkStepInfo m_stepInfo;                              // +0x50
    hkpCollisionQualityInfo *m_collisionQualityInfo;    // +0x60
    void *m_spareAgentSector;                           // +0x64: a 0x200-byte agent sector kept for reuse
    void *m_dynamicsInfo;                               // +0x68: the world's hkpWorldDynamicsStepInfo
    hkBool m_enableDeprecatedWelding;                   // +0x6C
    hkBool m_allowToSkipConfirmedCallbacks;             // +0x6D
    hkpCollisionAgentConfig *m_config;                  // +0x70
};

#endif
