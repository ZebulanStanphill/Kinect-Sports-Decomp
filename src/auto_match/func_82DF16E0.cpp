// hkpGravityGun scalar deleting destructor (primary vtable slot 0 of ??_7hkpGravityGun@@6B@). The
// destructor is inline: m_grabbedBodies is freed, then the out-of-line ??1hkpFirstPersonGun@@UAA@XZ runs,
// then the class allocator's delete when flags & 1.
#include "havok/hkpGravityGun.h"

extern "C" hkpGravityGun *fn_82DF16E0(hkpGravityGun *self, unsigned int flags)
{
    self->hkpGravityGun::~hkpGravityGun();
    if (flags & 1)
        hkpGravityGun::operator delete(self);
    return self;
}
