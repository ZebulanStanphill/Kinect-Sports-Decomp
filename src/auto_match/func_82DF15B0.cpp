// hkpGravityGun::hkpGravityGun() (Physics/Utilities/Weapons/hkpGravityGun.cpp): the out-of-line
// hkpFirstPersonGun constructor, the vtable, an empty m_grabbedBodies array, the pick parameters
// (10, 200.0f, 50.0f, 100.0f, 50.0f), m_type = WEAPON_TYPE_GRAVITYGUN, m_name = "GravityGun" through
// hkStringPtr::operator=(const char *) (82CED628), then the two
// vectors. Built with /O2 /QVMXReserve (flag file).
//
// Constants: the source used literals, whose loads the compiler schedules freely. The game's merged
// copies carry other names, renamed in the map: the floats lbl_8207A328/lbl_8207F25C/lbl_82005748 to
// __real@..., the vector (0, 1, 0, 0) lbl_820D2840 and the vector (2.5, 0.6, 0, 0), which symbols.txt
// names as the string "@ " (its first bytes are 40 20 00), to the compiler's __vmx@... names.
// hkVector4::set builds the quad in a local, which the compiler folds into one vector constant.
#include "havok/hkBase.h"
#include "havok/hkpGravityGun.h"

hkpGravityGun::hkpGravityGun()
    : m_maxNumObjectsPicked(10),
      m_maxMassOfObjectPicked(200.0f),
      m_maxDistOfObjectPicked(50.0f),
      m_impulseAppliedWhenObjectNotPicked(100.0f),
      m_throwVelocity(50.0f)
{
    m_type = WEAPON_TYPE_GRAVITYGUN;
    m_name = "GravityGun";
    m_capturedObjectPosition.set(2.5f, 0.6f, 0.0f);
    m_capturedObjectsOffset.set(0.0f, 1.0f, 0.0f);
}
