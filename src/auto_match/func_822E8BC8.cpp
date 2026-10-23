#include "havok/hkBase.h"
class hkpSphereShape : public hkReferencedObject { public: hkpSphereShape(float); char data[24]; };
struct Info { int quality; hkpSphereShape *shape; char pad[0xac]; unsigned char motion; char pad2[2]; unsigned char qualityType; char rest[8]; };
struct RigidBody : hkReferencedObject { void *world; unsigned int userData; char data[0x210]; };
extern "C" {
extern void *lbl_821AE078[];
void fn_82D8B168(Info *);
RigidBody *fn_82D8C258(RigidBody *,const Info *);
void fn_82D8B6C8(RigidBody *,int,int,int);
void fn_8253D4E8(void *,void *,RigidBody *,int);
}
struct Self {void **vt; char *owner; RigidBody *body; char *world; unsigned short mode; float radius;};
extern "C" Self *fn_822E8BC8(Self *self,char *world,char *owner,const unsigned short *mode,float radius) {
 self->owner=owner; self->world=world; self->body=0; self->vt=lbl_821AE078;
 unsigned short m=*mode; self->radius=radius; self->mode=m;
 hkpSphereShape *sphere=new hkpSphereShape(self->radius);
 Info info; fn_82D8B168(&info);
 info.shape=sphere; info.quality=10; info.qualityType=9; info.motion=4;
 RigidBody *body=(RigidBody *)RigidBody::operator new(sizeof(RigidBody));
 self->body=fn_82D8C258(body,&info);
 self->body->userData=*(unsigned int *)(self->owner+0x14);
 fn_82D8B6C8(self->body,4,1,0);
 fn_8253D4E8(self->world+0x1f0,self->world,self->body,1);
 return self;
}
