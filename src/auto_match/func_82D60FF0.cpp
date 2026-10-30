// hkpMultiRayConvexAgent scalar deleting destructor (primary vtable slot 0): the out-of-line destructor
// ??1hkpMultiRayConvexAgent@@UAA@XZ, then the class allocator's delete when flags & 1. It keeps its fn_ name
// (written out by hand, as for func_82D3A580).
// RTTI: hkpMultiRayConvexAgent : hkpIterativeLinearCastAgent : hkpCollisionAgent : hkReferencedObject; only the primary base matters here.
#include "havok/hkBase.h"

class hkpMultiRayConvexAgent : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual ~hkpMultiRayConvexAgent();
};

extern "C" hkpMultiRayConvexAgent *fn_82D60FF0(hkpMultiRayConvexAgent *self, unsigned int flags)
{
    self->hkpMultiRayConvexAgent::~hkpMultiRayConvexAgent();
    if (flags & 1)
        hkpMultiRayConvexAgent::operator delete(self);
    return self;
}
