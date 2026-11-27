// hkpFirstPersonGun::quitGun(hkpWorld *) (Physics/Utilities/Weapons/hkpFirstPersonGun.cpp): slot +0x18 of
// ??_7hkpFirstPersonGun@@6B@, inherited by every gun's vtable. Resets the gun (slot +0x20).
#include "havok/hkpFirstPersonGun.h"

void hkpFirstPersonGun::quitGun(hkpWorld *world)
{
    reset(world);
}
