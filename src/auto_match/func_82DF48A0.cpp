#include "havok/hkBase.h"
class hkpFirstPersonGun : public hkReferencedObject { public: ~hkpFirstPersonGun(); char pad[0x24]; };
class hkpProjectileGun;
extern "C" void fn_82DF45C8(hkpProjectileGun *);
class hkpProjectileGun : public hkpFirstPersonGun { public: ~hkpProjectileGun(); hkArray<int> m_projectiles; };
hkpProjectileGun::~hkpProjectileGun() { fn_82DF45C8(this); }
