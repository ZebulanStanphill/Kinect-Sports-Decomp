extern unsigned __int64 __mftb();
typedef struct { const char *name; unsigned time, unused; } TimerEntry;
typedef struct { void *pad; TimerEntry *current; void *pad2; TimerEntry *end; } TimerStream;
extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;

static void timer(const char *name)
{
  TimerStream *stream = KeTlsGetValue(lbl_8323B4A0);
  if (stream->current < stream->end) {
    TimerEntry *entry = stream->current;
    entry->name = name;
    entry->time = (unsigned)__mftb();
    stream->current = entry + 1;
  }
}

struct Obj_82DACE50;
typedef struct {
  char pad_0[0x10];
  
  
  void (*v3)(void *, struct Obj_82DACE50 *);
} Vt_82DACE50;
typedef struct { Vt_82DACE50 *vt; } Cb_82DACE50;
typedef struct {
  int pad0, pad4;
  Cb_82DACE50 **data;
  unsigned short count;
} Vec_82DACE50;
typedef struct Obj_82DACE50 {
  char pad[0x214];
  Vec_82DACE50 *v;
} Obj_82DACE50;

void fn_82DACE50(Obj_82DACE50 *o)
{
  Vec_82DACE50 *v = o->v;
  int i;
  Vec_82DACE50 *vv;
  vv = v;
  if (v != 0) {
    for (i = v->count - 1; i >= 0; i--) {
      if (vv->data[i] != 0) {
        timer("TtsetMotionTypeCb");
        vv->data[i]->vt->v3(vv->data[i], o);
        timer("Et");
      }
    }
  }
}
