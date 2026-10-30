// hkpProjectileGun scalar deleting destructor (primary vtable slot 0): the out-of-line destructor
// ??1hkpProjectileGun@@UAA@XZ, then the class allocator's delete when flags & 1. It keeps its fn_ name
// (written out by hand, as for func_82D3A580).
// RTTI: hkpProjectileGun : hkpFirstPersonGun : hkReferencedObject; only the primary base matters here.
#include "havok/hkBase.h"

class hkpProjectileGun : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual ~hkpProjectileGun();
};

extern "C" hkpProjectileGun *fn_82DF49B8(hkpProjectileGun *self, unsigned int flags)
{
    self->hkpProjectileGun::~hkpProjectileGun();
    if (flags & 1)
        hkpProjectileGun::operator delete(self);
    return self;
}
