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
  void (*v0)(void *);
  void (*v1)(void *, int);
} Vt_82DADB30;
typedef struct { Vt_82DADB30 *vt; } Cb_82DADB30;
typedef struct {
  Cb_82DADB30 **data;
  int count;
} Vec_82DADB30;
typedef struct {
  char pad[0x138];
  Vec_82DADB30 v;
} Obj_82DADB30;

extern void fn_82DAD5A8(Vec_82DADB30 *);

void fn_82DADB30(Obj_82DADB30 *o, int arg)
{
  Vec_82DADB30 *v = &o->v;
  int i;
  for (i = v->count - 1; i >= 0; i--) {
    if (v->data[i] != 0) {
      timer("TtphntAddCb");
      v->data[i]->vt->v1(v->data[i], arg);
      timer("Et");
    }
  }
  fn_82DAD5A8(v);
}
