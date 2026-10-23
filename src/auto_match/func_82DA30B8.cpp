// hkpSimulation::~hkpSimulation (Physics/Dynamics/World/Simulation/hkpSimulation.h), the implicit destructor: no members with destructors, so only hkBaseObject's vtable store is left. It is emitted out of line because the deleting destructor (fn_82D7FD30) calls it; ~hkpContinuousSimulation calls it too. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

class hkpWorld;

class hkpSimulation : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpSimulation(hkpWorld *world);
};

void emitVtable_82DA30B8(hkpSimulation *p) { p->hkpSimulation::~hkpSimulation(); }
