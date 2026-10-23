// hkpContinuousSimulation's scalar deleting destructor ??_GhkpContinuousSimulation@@UAAPAXI@Z
// (Physics/Dynamics/World/Simulation/Continuous/hkpContinuousSimulation.h): calls the out-of-line
// destructor (fn_82DB6110), then frees through the class allocator. The function at the end only makes the
// compiler emit the vtable, and with it this function.
#include "havok/hkBase.h"

class hkpWorld;
class hkpEntity;
class hkpToiResourceMgr;

// hkpSimulation (Physics/Dynamics/World/Simulation/hkpSimulation.h), 0x30 bytes.
class hkpSimulation : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpSimulation(hkpWorld *world);
    virtual ~hkpSimulation();

    hkUint32 m_determinismCheckFrameCounter;   // +0x8
    hkpWorld *m_world;                         // +0xC
    hkUint8 m_lastProcessingStep;              // +0x10
    hkReal m_currentTime;                      // +0x14
    hkReal m_currentPsiTime;                   // +0x18
    hkReal m_physicsDeltaTime;                 // +0x1C
    hkReal m_simulateUntilTime;                // +0x20
    hkReal m_frameMarkerPsiSnap;               // +0x24
    hkUint32 m_previousStepResult;             // +0x28
    hkUint32 m_unknown2C;                      // +0x2C
};

struct hkpToiEvent {
    __declspec(align(16)) char m_data[0x70];
};

// hkpContinuousSimulation (Physics/Dynamics/World/Simulation/Continuous/hkpContinuousSimulation.h).
class hkpContinuousSimulation : public hkpSimulation {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpContinuousSimulation(hkpWorld *world, int) : hkpSimulation(world) {}
    virtual ~hkpContinuousSimulation();

    hkArray<hkpToiEvent> m_toiEvents;                                   // +0x30
    hkPointerMap<hkpEntity *, int> m_entitiesNeedingPsiCollisionDetection;   // +0x3C
    hkpToiResourceMgr *m_toiResourceMgr;                                // +0x48
    int m_toiCounter;                                                   // +0x4C
};

void emitVtable_82DBA048(void *p, hkpWorld *w) { new (p) hkpContinuousSimulation(w, 0); }
