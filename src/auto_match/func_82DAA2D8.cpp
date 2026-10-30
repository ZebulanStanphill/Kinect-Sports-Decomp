// hkpMultiThreadedSimulation scalar deleting destructor (primary vtable slot 0): the out-of-line destructor
// ??1hkpMultiThreadedSimulation@@UAA@XZ, then the class allocator's delete when flags & 1. It keeps its fn_ name
// (written out by hand, as for func_82D3A580).
// RTTI: hkpMultiThreadedSimulation : hkpContinuousSimulation : hkpSimulation : hkReferencedObject; only the primary base matters here.
#include "havok/hkBase.h"

class hkpMultiThreadedSimulation : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual ~hkpMultiThreadedSimulation();
};

extern "C" hkpMultiThreadedSimulation *fn_82DAA2D8(hkpMultiThreadedSimulation *self, unsigned int flags)
{
    self->hkpMultiThreadedSimulation::~hkpMultiThreadedSimulation();
    if (flags & 1)
        hkpMultiThreadedSimulation::operator delete(self);
    return self;
}
