// Queue an update message when the owner is ready and either explicitly
// requested or more than 2500 ticks past the previous update. Record the
// current system tick count after dispatching the new message.

struct System_828B00F8 {
 virtual void vf00(); virtual void vf04(); virtual float vf08();
 virtual unsigned __int64 vf0C();
 virtual void vf10(); virtual void vf14(); virtual void vf18();
 virtual void vf1C(); virtual void vf20();
 virtual void *vf24(unsigned int, int); virtual void vf28(void *);
};
extern "C" System_828B00F8 *fn_825089A0();
struct Object_828B00F8 { int pad[2]; void *owner; int padding; unsigned __int64 time; };
extern "C" {
unsigned char fn_828ACCE8(void *); unsigned char fn_828ACCB0(void *);
unsigned char fn_828ACC50(void *); unsigned char fn_828AD740(void *);
void *fn_8265C9E0(unsigned); void *fn_828DA568(void *,void *);
void fn_82886518(void *,int,int); void fn_8289EEE0(void *);
void *fn_82897BD0(); void fn_828BE158(void *,void *,void *,int);
}
extern "C" void fn_828B00F8(Object_828B00F8 *self,unsigned char force) {
 if((fn_828ACCE8(self->owner)||fn_828ACCB0(self->owner)) && !fn_828ACC50(self->owner) && !fn_828AD740(self->owner)) {
 unsigned __int64 now=fn_825089A0()->vf0C();
 if(force || (unsigned)now-(unsigned)self->time > 2500) {
 void *mem=fn_8265C9E0(0xb0); void *p=mem ? fn_828DA568(mem,self->owner):0;
 fn_82886518(p,-1,-1); fn_8289EEE0(self->owner);
 fn_828BE158(self->owner,p,fn_82897BD0(),0); self->time=now;
 } }
}
