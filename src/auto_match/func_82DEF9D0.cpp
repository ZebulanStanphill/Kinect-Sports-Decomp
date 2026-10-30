// hkpBallGun scalar deleting destructor (primary vtable slot 0): the out-of-line destructor
// ??1hkpBallGun@@UAA@XZ, then the class allocator's delete when flags & 1. It keeps its fn_ name
// (written out by hand, as for func_82D3A580).
// RTTI: hkpBallGun : hkpFirstPersonGun : hkReferencedObject; only the primary base matters here.
#include "havok/hkBase.h"

class hkpBallGun : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual ~hkpBallGun();
};

extern "C" hkpBallGun *fn_82DEF9D0(hkpBallGun *self, unsigned int flags)
{
    self->hkpBallGun::~hkpBallGun();
    if (flags & 1)
        hkpBallGun::operator delete(self);
    return self;
}
