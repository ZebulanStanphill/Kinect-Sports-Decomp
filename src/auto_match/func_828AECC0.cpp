// Applies the requested lifecycle state and records the current system time.
struct System_828AECC0 { virtual void vf00(); virtual void vf04(); virtual float vf08(); };
struct Object_828AECC0 {
 virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual void vf0C(); virtual void vf10(); virtual void vf14(); virtual void vf18();
 int pad[19]; void *owner; int pad2[13]; int state; float time;
};
extern "C" { System_828AECC0 *fn_825089A0(); void fn_823AA970(); void fn_828995F0(void *,Object_828AECC0 *); }
extern "C" void fn_828AECC0(Object_828AECC0 *self,int state) {
 switch(state) { case 1: self->state=1; self->vf14(); break;
 case 2: { fn_823AA970(); if(self->state==1) { self->vf18(); } else { fn_828995F0(self->owner,self); } self->state=2; } break; }
 self->time=fn_825089A0()->vf08();
}
