// Advance the object's state after checking its activity and pending requests.
struct System_828E1568 { virtual void vf00(); virtual void vf04(); virtual float vf08(); };
struct Object_828E1568 { int pad[3]; int state; float time; void *activity; void *context; char pad2[0xc]; unsigned char flag; };
struct Locals_828E1568 { unsigned char f0,f1,f2,f3; int v74,v78,v7c; __declspec(align(16)) char v80[16]; char v90[16]; char va0[32]; char vc0[48]; };
extern "C" {
System_828E1568 *fn_825089A0();
unsigned char fn_828AD740(void *); unsigned char fn_828ACC40(void *); unsigned char fn_828865A0(Object_828E1568 *); unsigned char fn_828ACCE8(void *);
void *fn_828D45F8(Object_828E1568 *); void *fn_828D47D0(void *,int,void *);
void fn_828E0DE0(Object_828E1568 *,int); void fn_828E0390(Object_828E1568 *,int);
void fn_828AC428(void *); void fn_828AC488(void *);
void fn_828E0FD0(void *,void *,void *,void *,void *,void *,void *,void *,void *,void *,void *,void *);
unsigned char fn_828A0C50(void *,void *);
}
static void *request(Object_828E1568 *self,int kind) { void *p=fn_828D45F8(self); return fn_828D47D0(p,kind,0); }
extern "C" {
}
static void set_state(Object_828E1568 *self,int state) { self->time=fn_825089A0()->vf08(); self->state=state; }
extern "C" {
void fn_828E1568(Object_828E1568 *self) {
 Locals_828E1568 local;
 float time; int state;
 if (fn_828AD740(self->activity)) {
 if (self->state==2) return;
 set_state(self,2); return;
 } else {
 if (!fn_828ACC40(self->context) && fn_828865A0(self)) {
 if (!fn_828ACCE8(self->context)) return;
 if (!self->flag && !request(self,3)) { fn_828E0DE0(self,7); return; }
 if (!self->flag && !request(self,4)) {
 fn_828AC428(local.va0);
 fn_828E0FD0(fn_828D45F8(self),local.vc0,local.v80,local.v90,&local.v7c,&local.f3,local.va0,&local.v74,&local.f0,&local.v78,&local.f1,&local.f2);
 if (fn_828A0C50((char *)*(void **)((char *)self->context+0x8c)+0x14,local.v80)) fn_828E0DE0(self,7);
 fn_828AC488(local.va0); return;
 }
 fn_828E0390(self,2); return;
 }
 if (self->state==0) return;
 set_state(self,0); return;
 }

}
}
