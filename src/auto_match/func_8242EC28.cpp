// Lazily construct the shared payload and forward it to the target object.
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float v[4]; unsigned int u[4]; } __vector4;
struct System_8242EC28 { virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual void vf0C(); virtual void vf10(); virtual void vf14(); virtual void vf18(); virtual void vf1C(); virtual void vf20(); virtual void *vf24(unsigned int,int); };
struct Payload_8242EC28 { void *vtable; char data[0x19c]; __vector4 vector; };
struct Block_8242EC28 { void *vtable; int uses,weaks,pad; Payload_8242EC28 value; };
struct Shared_8242EC28 { Payload_8242EC28 *value; Block_8242EC28 *owner; };
struct Target_8242EC28 { virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual void vf0C(); virtual void vf10(); virtual void vf14(unsigned int,Payload_8242EC28 *); };
struct State_8242EC28 { char pad[8]; Target_8242EC28 *target; };
extern "C" {
System_8242EC28 *fn_825089A0();
__vector4 __VMXGetReg(int);
Payload_8242EC28 *fn_823BE8C8(Payload_8242EC28 *);
void fn_822315A0(Block_8242EC28 *);
extern void *lbl_821B903C[]; extern void *lbl_821B9B9C[];
void fn_8242EC28(State_8242EC28 *self,unsigned int key,Shared_8242EC28 *shared) {
 Payload_8242EC28 *value;
 if (shared) {
  if (!shared->value) {
   Block_8242EC28 *block=(Block_8242EC28 *)fn_825089A0()->vf24(0x1c8,1);
   if (block) {
    block->uses=1; block->vtable=lbl_821B903C; block->weaks=1;
    Payload_8242EC28 *p=&block->value;
    if (p) { p=fn_823BE8C8(p); p->vtable=lbl_821B9B9C; p->vector=__VMXGetReg(77); }
   }
   Block_8242EC28 *old=shared->owner;
   shared->owner=block; shared->value=&block->value;
   if (old) fn_822315A0(old);
  }
  value=shared->value;
 } else value=0;
 self->target->vf14(key,value);
}
}
