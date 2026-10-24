// hkpGravityGun::hkpGravityGun() (Physics/Utilities/Weapons/hkpGravityGun.cpp): the out-of-line
// hkpFirstPersonGun constructor, the vtable, an empty m_grabbedBodies array, the pick parameters
// (10, 200.0f, 50.0f, 100.0f, 50.0f), m_type = WEAPON_TYPE_GRAVITYGUN, m_name = "GravityGun" through
// hkStringPtr::operator=(const char *) (fn_82CED628, kept: Matching units call it), then the two
// vectors. Built with /O2 /QVMXReserve (flag file).
//
// Constants: the source used literals, whose loads the compiler schedules freely. The game's merged
// copies carry other names, renamed in the map: the floats lbl_8207A328/lbl_8207F25C/lbl_82005748 to
// __real@..., the vector (0, 1, 0, 0) lbl_820D2840 and the vector (2.5, 0.6, 0, 0), which symbols.txt
// names as the string "@ " (its first bytes are 40 20 00), to the compiler's __vmx@... names.
// hkVector4::set builds the quad in a local, which the compiler folds into one vector constant.
//
// hkStringPtr is declared here rather than taken from the shared havok/hkStringPtr.h (skipped through
// its include guard), which lacks the const char * assignment.
#define HAVOK_HKSTRINGPTR_H
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkStringPtr;
extern "C" {
hkStringPtr *fn_82CED628(hkStringPtr *self, const char *string);  // hkStringPtr::operator=(const char *)
}

class hkStringPtr {
public:
    HK_FORCE_INLINE hkStringPtr &operator=(const char *string) { return *fn_82CED628(this, string); }

    const char *m_stringAndFlag;
};

class hkVector4 {
public:
    HK_FORCE_INLINE void set(hkReal a, hkReal b, hkReal c, hkReal d = 0.0f)
    {
        hkQuadReal q;
        q.vector4_f32[0] = a;
        q.vector4_f32[1] = b;
        q.vector4_f32[2] = c;
        q.vector4_f32[3] = d;
        m_quad = q;
    }
    hkQuadReal m_quad;
};

class hkpFirstPersonGunBulletListener;
class hkpRigidBody;

class hkpFirstPersonGun : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    enum Type { WEAPON_TYPE_INVALID = 0, WEAPON_TYPE_BALLGUN, WEAPON_TYPE_GRENADEGUN, WEAPON_TYPE_GRAVITYGUN,
                WEAPON_TYPE_MOUNTEDBALLGUN, WEAPON_TYPE_TWEAKERGUN, WEAPON_TYPE_MISSILEGUN };

    hkpFirstPersonGun();
    virtual ~hkpFirstPersonGun();

    hkUint8 m_type;                                          // +0x8 hkEnum<Type, hkUint8>
    hkStringPtr m_name;                                      // +0xc
    hkUint8 m_keyboardKey;                                   // +0x10 hkEnum<hkKeyboardCommand, hkUint8>
    hkArray<hkpFirstPersonGunBulletListener *> m_listeners;  // +0x14
};

class hkpGravityGun : public hkpFirstPersonGun {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    hkpGravityGun();

    hkArray<hkpRigidBody *> m_grabbedBodies;     // +0x20
    int m_maxNumObjectsPicked;                   // +0x2c
    hkReal m_maxMassOfObjectPicked;              // +0x30
    hkReal m_maxDistOfObjectPicked;              // +0x34
    hkReal m_impulseAppliedWhenObjectNotPicked;  // +0x38
    hkReal m_throwVelocity;                      // +0x3c
    hkVector4 m_capturedObjectPosition;          // +0x40
    hkVector4 m_capturedObjectsOffset;           // +0x50
};

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
