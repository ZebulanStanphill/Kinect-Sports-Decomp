// hkpGunProjectile scalar deleting destructor (primary vtable slot 0): the out-of-line destructor
// ??1hkpGunProjectile@@UAA@XZ, then the class allocator's delete when flags & 1. It keeps its fn_ name
// (written out by hand, as for func_82D3A580).
// RTTI: hkpGunProjectile : hkReferencedObject + hkpContactListener (+8); only the primary base matters here.
#include "havok/hkBase.h"

class hkpGunProjectile : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual ~hkpGunProjectile();
};

extern "C" hkpGunProjectile *fn_82DF4950(hkpGunProjectile *self, unsigned int flags)
{
    self->hkpGunProjectile::~hkpGunProjectile();
    if (flags & 1)
        hkpGunProjectile::operator delete(self);
    return self;
}
