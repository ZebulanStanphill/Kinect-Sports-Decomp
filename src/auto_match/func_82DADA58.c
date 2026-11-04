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

typedef struct {
  char pad_0[0x10];
  void (*v1)(void *, int);
} Vt_82DADA58;
typedef struct { Vt_82DADA58 *vt; } Cb_82DADA58;
typedef struct {
  Cb_82DADA58 **data;
  int count;
} Vec_82DADA58;
typedef struct {
  char pad[0x12c];
  Vec_82DADA58 v;
} Obj_82DADA58;

extern void fn_82DAD5A8(Vec_82DADA58 *);

void fn_82DADA58(Obj_82DADA58 *o, int arg)
{
  Vec_82DADA58 *v = &o->v;
  int i;
  for (i = v->count - 1; i >= 0; i--) {
    if (v->data[i] != 0) {
      timer("TtsetMotionTypeCb");
      v->data[i]->vt->v1(v->data[i], arg);
      timer("Et");
    }
  }
  fn_82DAD5A8(v);
}
