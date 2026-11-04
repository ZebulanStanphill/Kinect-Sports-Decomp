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
  char pad_0[0x8];
  void (*v1)(void *, int);
} Vt_82DADE90;
typedef struct { Vt_82DADE90 *vt; } Cb_82DADE90;
typedef struct {
  Cb_82DADE90 **data;
  int count;
} Vec_82DADE90;
typedef struct {
  char pad[0x144];
  Vec_82DADE90 v;
} Obj_82DADE90;

extern void fn_82DAD5A8(Vec_82DADE90 *);

void fn_82DADE90(Obj_82DADE90 *o, int arg)
{
  Vec_82DADE90 *v = &o->v;
  int i;
  for (i = v->count - 1; i >= 0; i--) {
    if (v->data[i] != 0) {
      timer("TtconRemCb");
      v->data[i]->vt->v1(v->data[i], arg);
      timer("Et");
    }
  }
  fn_82DAD5A8(v);
}
