extern unsigned __int64 __mftb(void);
typedef struct { const char *name; unsigned time, unused; } TimerEntry_82DBFAA8;
typedef struct { void *pad; TimerEntry_82DBFAA8 *current; void *pad2; TimerEntry_82DBFAA8 *end; } TimerStream_82DBFAA8;
extern TimerStream_82DBFAA8 *KeTlsGetValue(unsigned);
extern unsigned lbl_8323B4A0;
static __forceinline void timer_82DBFAA8(const char *name) {
 TimerStream_82DBFAA8 *stream=KeTlsGetValue(lbl_8323B4A0);
 if(stream->current < stream->end) {
  TimerEntry_82DBFAA8 *entry=stream->current;
  entry->name=name;
  entry->time=(unsigned)__mftb();
  stream->current=entry+1;
 }
}
typedef struct { void (*f[4])(void *,void *); } Vt_82DBFAA8;
typedef struct { Vt_82DBFAA8 *vt; } Callback_82DBFAA8;
typedef struct { Callback_82DBFAA8 **data; unsigned short count; } Vec_82DBFAA8;
typedef struct { char pad[32]; Vec_82DBFAA8 v; } Obj_82DBFAA8;
extern void fn_82DBF878(Vec_82DBFAA8 *);
void fn_82DBFAA8(Obj_82DBFAA8 *o) {
 Vec_82DBFAA8 *v=&o->v;
 int i;
 for(i=v->count-1;i>=0;i--) {
  if(o->v.data[i]) {
   timer_82DBFAA8("TtconDeletedCb");
   o->v.data[i]->vt->f[3](o->v.data[i],o);
   timer_82DBFAA8("Et");
  }
 }
 fn_82DBF878(v);
}
