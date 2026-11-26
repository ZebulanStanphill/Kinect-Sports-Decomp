#include "havok/hkBase.h"
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } hkQuadReal;
extern "C" const hkQuadReal lbl_82145840;
class hkpFirstPersonGun : public hkReferencedObject { public: char m_type; char pad9[3]; hkStringPtr m_name; char pad10[0x30]; };
class hkpBallGun : public hkpFirstPersonGun { public: hkpBallGun(); char pad40[0x20]; };
class hkpMountedBallGun : public hkpBallGun { public: hkpMountedBallGun(); hkQuadReal m_position; };
hkpMountedBallGun::hkpMountedBallGun() { m_type=4; m_name="MountedBallGun"; m_position=lbl_82145840; }
