// hkpConstraintChainInstance scalar deleting destructor (primary vtable slot 0): the out-of-line destructor
// ??1hkpConstraintChainInstance@@UAA@XZ, then the class allocator's delete when flags & 1. It keeps its fn_ name
// (written out by hand, as for func_82D3A580).
// RTTI: hkpConstraintChainInstance : hkpConstraintInstance : hkReferencedObject; only the primary base matters here.
#include "havok/hkBase.h"

class hkpConstraintChainInstance : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual ~hkpConstraintChainInstance();
};

extern "C" hkpConstraintChainInstance *fn_82D7EA18(hkpConstraintChainInstance *self, unsigned int flags)
{
    self->hkpConstraintChainInstance::~hkpConstraintChainInstance();
    if (flags & 1)
        hkpConstraintChainInstance::operator delete(self);
    return self;
}
