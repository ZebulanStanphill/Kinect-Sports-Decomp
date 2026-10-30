// hkpPoweredChainMapper scalar deleting destructor (primary vtable slot 0): the out-of-line destructor
// ??1hkpPoweredChainMapper@@UAA@XZ, then the class allocator's delete when flags & 1. It keeps its fn_ name
// (written out by hand, as for func_82D3A580).
// RTTI: hkpPoweredChainMapper : hkReferencedObject; only the primary base matters here.
#include "havok/hkBase.h"

class hkpPoweredChainMapper : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual ~hkpPoweredChainMapper();
};

extern "C" hkpPoweredChainMapper *fn_82DE4AA0(hkpPoweredChainMapper *self, unsigned int flags)
{
    self->hkpPoweredChainMapper::~hkpPoweredChainMapper();
    if (flags & 1)
        hkpPoweredChainMapper::operator delete(self);
    return self;
}
