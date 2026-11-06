extern unsigned __int64 __mftb(void);
typedef struct { const char *name; unsigned time, unused; } TimerEntry_82DAE3A0;
typedef struct { void *pad; TimerEntry_82DAE3A0 *current; void *pad2; TimerEntry_82DAE3A0 *end; } TimerStream_82DAE3A0;
extern TimerStream_82DAE3A0 *KeTlsGetValue(unsigned);
extern unsigned lbl_8323B4A0;
static __forceinline void timer_82DAE3A0(const char *name) {
 TimerStream_82DAE3A0 *stream=KeTlsGetValue(lbl_8323B4A0);
 if(stream->current < stream->end) {
  TimerEntry_82DAE3A0 *entry=stream->current;
  entry->name=name;
  entry->time=(unsigned)__mftb();
  stream->current=entry+1;
 }
}
typedef struct { void (*f[2])(void *,void *); } Vt_82DAE3A0;
typedef struct { Vt_82DAE3A0 *vt; } Callback_82DAE3A0;
typedef struct { Callback_82DAE3A0 **data; int count; } Vec_82DAE3A0;
typedef struct { char pad[336]; Vec_82DAE3A0 v; } Obj_82DAE3A0;
extern void fn_82DAD5A8(Vec_82DAE3A0 *);
void fn_82DAE3A0(Obj_82DAE3A0 *o) {
 Vec_82DAE3A0 *v=&o->v;
 int i;
 for(i=v->count-1;i>=0;i--) {
  if(o->v.data[i]) {
   timer_82DAE3A0("TtworldDelCb");
   o->v.data[i]->vt->f[1](o->v.data[i],o);
   timer_82DAE3A0("Et");
  }
 }
 fn_82DAD5A8(v);
}
