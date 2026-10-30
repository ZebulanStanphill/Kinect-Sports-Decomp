// hkpBroadPhaseBorder scalar deleting destructor (primary vtable slot 0): the out-of-line destructor
// ??1hkpBroadPhaseBorder@@UAA@XZ, then the class allocator's delete when flags & 1. It keeps its fn_ name
// (written out by hand, as for func_82D3A580).
// RTTI: hkpBroadPhaseBorder : hkReferencedObject + hkpWorldDeletionListener (+8), hkpPhantomOverlapListener (+0xc), hkpWorldPostSimulationListener (+0x10); only the primary base matters here.
#include "havok/hkBase.h"

class hkpBroadPhaseBorder : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual ~hkpBroadPhaseBorder();
};

extern "C" hkpBroadPhaseBorder *fn_82D8E458(hkpBroadPhaseBorder *self, unsigned int flags)
{
    self->hkpBroadPhaseBorder::~hkpBroadPhaseBorder();
    if (flags & 1)
        hkpBroadPhaseBorder::operator delete(self);
    return self;
}
