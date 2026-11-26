#include "havok/hkpMotion.h"
class hkpRigidBody;
class Link { public: virtual void a();virtual void b();virtual void c();virtual Link* clone(hkpRigidBody*); };
struct __declspec(align(16)) RigidBodyInfo { unsigned char bytes[0xc0]; };
class hkpRigidBody : public hkReferencedObject {
public:
 virtual void unused(); virtual void *getCollidable();
 char pad[4];int userData;char pad2[8];void *owner;char pad3[0x58];hkStringPtr name;char pad4[0x28];Link *link;char pad5[0x3c];hkpMaxSizeMotion motion;char pad6[0x20];
};
template<int size> static HK_FORCE_INLINE void memCpy16(void *dst, const void *src) {
 const hkUint32 *src32=(const hkUint32 *)src;
 hkUint32 *dst32=(hkUint32 *)dst;
 for (int i=0;i<size/16;i++) {
  dst32[0]=src32[0]; dst32[1]=src32[1]; dst32[2]=src32[2]; dst32[3]=src32[3];
  dst32+=4; src32+=4;
 }
}
extern "C" {
void fn_82D8B168(RigidBodyInfo*);
void fn_82D8C548(const hkpRigidBody*,RigidBodyInfo*);
hkpRigidBody *fn_82D8C258(hkpRigidBody*,const RigidBodyInfo*);
void fn_82D8C858(hkpRigidBody*,const hkpRigidBody*);
}
extern "C" hkpRigidBody *fn_82D8C6B0(const hkpRigidBody *self) {
 RigidBodyInfo info;fn_82D8B168(&info);fn_82D8C548(self,&info);
 void *mem=hkpRigidBody::operator new(sizeof(hkpRigidBody));
 hkpRigidBody *copy=fn_82D8C258((hkpRigidBody*)mem,&info);
 memCpy16<sizeof(hkpMaxSizeMotion)>(&copy->motion,&self->motion);
 if(self->motion.m_savedMotion) {
  copy->motion.m_savedMotion=new hkpMaxSizeMotion;
  memCpy16<sizeof(hkpMaxSizeMotion)>(copy->motion.m_savedMotion,self->motion.m_savedMotion);
 }
 copy->owner=copy->getCollidable();fn_82D8C858(copy,self);
 copy->name=self->name.cString();
 copy->userData=self->userData;
 if(self->link) copy->link=self->link->clone(copy);
 return copy;
}
