// hkpSimulation (Physics/Dynamics/World/Simulation/hkpSimulation.h), 0x30 bytes: the single-threaded discrete
// simulation of a world. The members are those the constructor (??0hkpSimulation@@QAA@PAVhkpWorld@@@Z,
// 82DA3248) sets; their names follow Havok's header, and +0x2C is not seen used. Its vtable
// (??_7hkpSimulation@@6B@, 15 slots) has twelve slots after hkReferencedObject's (stepping, integrating,
// colliding and the collision-information functions); no unit names them, so they are not declared here.
#ifndef HAVOK_HKPSIMULATION_H
#define HAVOK_HKPSIMULATION_H

#include "havok/hkBase.h"

class hkpWorld;

class hkpSimulation : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    enum LastProcessingStep { INTEGRATE, COLLIDE };

    hkpSimulation(hkpWorld *world);
    hkpSimulation(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual ~hkpSimulation();

    hkUint32 m_determinismCheckFrameCounter;   // +0x8
    hkpWorld *m_world;                         // +0xC
    hkUint8 m_lastProcessingStep;              // +0x10 hkEnum<LastProcessingStep, hkUint8>
    hkReal m_currentTime;                      // +0x14
    hkReal m_currentPsiTime;                   // +0x18
    hkReal m_physicsDeltaTime;                 // +0x1C
    hkReal m_simulateUntilTime;                // +0x20
    hkReal m_frameMarkerPsiSnap;               // +0x24
    hkUint32 m_previousStepResult;             // +0x28
    hkUint32 m_unknown2C;                      // +0x2C
};

#endif
