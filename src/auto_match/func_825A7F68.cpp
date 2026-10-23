#include "havok/hkBase.h"
struct Body { char pad[8]; void *world; char padc[0xdc]; unsigned char type; };
struct Owner { char pad[0x10]; char *world; char pad14[0x100]; float value; };
class hkpEntity;
class hkpUnaryAction : public hkReferencedObject { public: hkpUnaryAction(hkpEntity *,hkUlong); char pad[0x14]; };
extern "C" {
extern void *lbl_821CA8E4[];
extern float lbl_821CC160;
void fn_82CED628(void *,const char *);
void fn_82D95528(void *,Body *);
void fn_82D888D0(void *,void *);
void fn_8251E530(void *,void *);
}
class Action : public hkpUnaryAction {
public:
 Owner *owner; int a,b,c;
 HK_FORCE_INLINE Action(Owner *o) : hkpUnaryAction(0,0) {
 owner=o; a=1; *(void ***)this=lbl_821CA8E4; c=-1; b=1;
 fn_82CED628((char *)this+0x14,"RigidBodyPhysics (ACTIVE)");
 }
};
struct Self { Owner *owner; char pad[12]; Action *action; float value; };
extern "C" void fn_825A7F68(Self *self,Body *body,char *context) {
 if(self->owner && body && body->world && body->type!=5) {
 char *world=*(char **)(context+0x4c); char *sub=world+0x1f0;
 Action *a=new Action(self->owner); self->action=a;
 fn_82D95528(a,body);
 if(self->action->owner) self->action->owner->world=world;
 Action *action=self->action;
 if(action->owner) self->value=action->owner->value; else self->value=lbl_821CC160;
 Action **last=*(Action ***)(sub+0x90),**p=*(Action ***)(sub+0x8c);
 while(p<last) {if(*p==action) {fn_8251E530(sub+0x8c,p); return;} ++p;}
 fn_82D888D0(*(void **)(sub+8),action);
 }
}
