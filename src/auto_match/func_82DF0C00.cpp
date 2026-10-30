// hkpFirstPersonGun scalar deleting destructor (primary vtable slot 0): the out-of-line destructor
// ??1hkpFirstPersonGun@@UAA@XZ, then the class allocator's delete when flags & 1. It keeps its fn_ name
// (written out by hand, as for func_82D3A580).
// RTTI: hkpFirstPersonGun : hkReferencedObject; only the primary base matters here.
#include "havok/hkBase.h"

class hkpFirstPersonGun : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual ~hkpFirstPersonGun();
};

extern "C" hkpFirstPersonGun *fn_82DF0C00(hkpFirstPersonGun *self, unsigned int flags)
{
    self->hkpFirstPersonGun::~hkpFirstPersonGun();
    if (flags & 1)
        hkpFirstPersonGun::operator delete(self);
    return self;
}
