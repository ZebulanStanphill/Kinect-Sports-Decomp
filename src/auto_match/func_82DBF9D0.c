extern unsigned __int64 __mftb(void);
typedef struct { const char *name; unsigned time, unused; } TimerEntry_82DBF9D0;
typedef struct { void *pad; TimerEntry_82DBF9D0 *current; void *pad2; TimerEntry_82DBF9D0 *end; } TimerStream_82DBF9D0;
extern TimerStream_82DBF9D0 *KeTlsGetValue(unsigned);
extern unsigned lbl_8323B4A0;
static __forceinline void timer_82DBF9D0(const char *name) {
 TimerStream_82DBF9D0 *stream=KeTlsGetValue(lbl_8323B4A0);
 if(stream->current < stream->end) {
  TimerEntry_82DBF9D0 *entry=stream->current;
  entry->name=name;
  entry->time=(unsigned)__mftb();
  stream->current=entry+1;
 }
}
typedef struct { void (*f[3])(void *,void *); } Vt_82DBF9D0;
typedef struct { Vt_82DBF9D0 *vt; } Callback_82DBF9D0;
typedef struct { Callback_82DBF9D0 **data; unsigned short count; } Vec_82DBF9D0;
typedef struct { char pad[32]; Vec_82DBF9D0 v; } Obj_82DBF9D0;
extern void fn_82DBF878(Vec_82DBF9D0 *);
void fn_82DBF9D0(Obj_82DBF9D0 *o) {
 Vec_82DBF9D0 *v=&o->v;
 int i;
 for(i=v->count-1;i>=0;i--) {
  if(o->v.data[i]) {
   timer_82DBF9D0("TtconRemCb");
   o->v.data[i]->vt->f[2](o->v.data[i],o);
   timer_82DBF9D0("Et");
  }
 }
 fn_82DBF878(v);
}
