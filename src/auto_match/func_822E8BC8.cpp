// Game code: the constructor of an object that owns a keyframed sphere rigid body (quality 9, collision
// filter info 10), registered with its world. Same shape as func_82563908.cpp.
#include "havok/hkpRigidBody.h"
#include "havok/hkpRigidBodyCinfo.h"
#include "havok/hkpSphereShape.h"
extern "C" {
extern void *lbl_821AE078[];
void fn_82D8B6C8(hkpRigidBody *,int,int,int);
void fn_8253D4E8(void *,void *,hkpRigidBody *,int);
}
struct Self {void **vt; char *owner; hkpRigidBody *body; char *world; unsigned short mode; float radius;};
extern "C" Self *fn_822E8BC8(Self *self,char *world,char *owner,const unsigned short *mode,float radius) {
 self->owner=owner; self->world=world; self->body=0; self->vt=lbl_821AE078;
 unsigned short m=*mode; self->radius=radius; self->mode=m;
 hkpSphereShape *sphere=new hkpSphereShape(self->radius);
 hkpRigidBodyCinfo info;
 info.m_shape=(const hkpShape *)sphere; info.m_collisionFilterInfo=10; info.m_qualityType=9; info.m_motionType=4;
 self->body=new hkpRigidBody(info);
 self->body->m_userData=*(unsigned int *)(self->owner+0x14);
 fn_82D8B6C8(self->body,4,1,0);
 fn_8253D4E8(self->world+0x1f0,self->world,self->body,1);
 return self;
}
