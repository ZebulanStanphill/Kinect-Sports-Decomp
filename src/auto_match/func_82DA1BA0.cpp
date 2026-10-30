// hkpPoweredChainData scalar deleting destructor (primary vtable slot 0): the out-of-line destructor
// ??1hkpPoweredChainData@@UAA@XZ, then the class allocator's delete when flags & 1. It keeps its fn_ name
// (written out by hand, as for func_82D3A580).
// RTTI: hkpPoweredChainData : hkpConstraintChainData : hkpConstraintData : hkReferencedObject; only the primary base matters here.
#include "havok/hkBase.h"

class hkpPoweredChainData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual ~hkpPoweredChainData();
};

extern "C" hkpPoweredChainData *fn_82DA1BA0(hkpPoweredChainData *self, unsigned int flags)
{
    self->hkpPoweredChainData::~hkpPoweredChainData();
    if (flags & 1)
        hkpPoweredChainData::operator delete(self);
    return self;
}
