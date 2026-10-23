// hkpFirstPersonGun::hkpFirstPersonGun() (Physics/Utilities/Weapons/hkpFirstPersonGun.h): the
// hkReferencedObject part, the vtable, m_type = WEAPON_TYPE_INVALID, m_name("") through the out-of-line
// hkStringPtr(const char *) constructor (fn_82CED488, kept: Matching units call it), m_keyboardKey = 'q'
// and an empty listener array. The "" is the terminator of another string (the linker merged it), so it
// is referenced as lbl_82196582.
// hkStringPtr is declared here rather than taken from the shared havok/hkStringPtr.h (skipped through its
// include guard), which lacks the const char * constructor.
#define HAVOK_HKSTRINGPTR_H
#include "havok/hkBase.h"

class hkStringPtr;
extern "C" {
void fn_82CED308(hkStringPtr *self, hkFinishLoadedObjectFlag f);  // hkStringPtr::hkStringPtr(hkFinishLoadedObjectFlag)
void fn_82CED5B8(hkStringPtr *self);                              // hkStringPtr::~hkStringPtr()
void fn_82CED488(hkStringPtr *self, const char *string);          // hkStringPtr::hkStringPtr(const char *)
extern const char lbl_82196582[];                                 // ""
}

class hkStringPtr {
public:
    HK_FORCE_INLINE hkStringPtr(const char *string) { fn_82CED488(this, string); }
    HK_FORCE_INLINE hkStringPtr(hkFinishLoadedObjectFlag f) { fn_82CED308(this, f); }
    HK_FORCE_INLINE ~hkStringPtr() { fn_82CED5B8(this); }

    const char *m_stringAndFlag;
};

class hkpFirstPersonGunBulletListener;
class hkpWorld;

class hkpFirstPersonGun : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    enum Type { WEAPON_TYPE_INVALID = 0, WEAPON_TYPE_BALLGUN, WEAPON_TYPE_GRENADEGUN, WEAPON_TYPE_GRAVITYGUN,
                WEAPON_TYPE_MOUNTEDBALLGUN, WEAPON_TYPE_TWEAKERGUN, WEAPON_TYPE_MISSILEGUN };
    enum { HK_KEY_Q = 0x71 };

    hkpFirstPersonGun();
    virtual ~hkpFirstPersonGun();

    hkUint8 m_type;                                          // +0x8 hkEnum<Type, hkUint8>
    hkStringPtr m_name;                                      // +0xc
    hkUint8 m_keyboardKey;                                   // +0x10 hkEnum<hkKeyboardCommand, hkUint8>
    hkArray<hkpFirstPersonGunBulletListener *> m_listeners;  // +0x14
};

hkpFirstPersonGun::hkpFirstPersonGun()
    : m_type(WEAPON_TYPE_INVALID), m_name(lbl_82196582), m_keyboardKey(HK_KEY_Q)
{
}
