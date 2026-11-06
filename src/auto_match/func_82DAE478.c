extern unsigned __int64 __mftb(void);
typedef struct { const char *name; unsigned time, unused; } TimerEntry_82DAE478;
typedef struct { void *pad; TimerEntry_82DAE478 *current; void *pad2; TimerEntry_82DAE478 *end; } TimerStream_82DAE478;
extern TimerStream_82DAE478 *KeTlsGetValue(unsigned);
extern unsigned lbl_8323B4A0;
static __forceinline void timer_82DAE478(const char *name) {
 TimerStream_82DAE478 *stream=KeTlsGetValue(lbl_8323B4A0);
 if(stream->current < stream->end) {
  TimerEntry_82DAE478 *entry=stream->current;
  entry->name=name;
  entry->time=(unsigned)__mftb();
  stream->current=entry+1;
 }
}
typedef struct { void (*f[3])(void *,void *); } Vt_82DAE478;
typedef struct { Vt_82DAE478 *vt; } Callback_82DAE478;
typedef struct { Callback_82DAE478 **data; int count; } Vec_82DAE478;
typedef struct { char pad[336]; Vec_82DAE478 v; } Obj_82DAE478;
extern void fn_82DAD5A8(Vec_82DAE478 *);
void fn_82DAE478(Obj_82DAE478 *o) {
 Vec_82DAE478 *v=&o->v;
 int i;
 for(i=v->count-1;i>=0;i--) {
  if(o->v.data[i]) {
   timer_82DAE478("TtworldDelCb");
   o->v.data[i]->vt->f[2](o->v.data[i],o);
   timer_82DAE478("Et");
  }
 }
 fn_82DAD5A8(v);
}
