// hkp3AxisSweep scalar deleting destructor (primary vtable slot 0): the out-of-line destructor
// ??1hkp3AxisSweep@@UAA@XZ, then the class allocator's delete when flags & 1. It keeps its fn_ name
// (written out by hand, as for func_82D3A580).
// RTTI: hkp3AxisSweep : hkpBroadPhase : hkReferencedObject; only the primary base matters here.
#include "havok/hkBase.h"

class hkp3AxisSweep : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual ~hkp3AxisSweep();
};

extern "C" hkp3AxisSweep *fn_83095E30(hkp3AxisSweep *self, unsigned int flags)
{
    self->hkp3AxisSweep::~hkp3AxisSweep();
    if (flags & 1)
        hkp3AxisSweep::operator delete(self);
    return self;
}
