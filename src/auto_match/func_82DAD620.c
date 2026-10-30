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
} Vt_82DAD620;
typedef struct { Vt_82DAD620 *vt; } Cb_82DAD620;
typedef struct {
  Cb_82DAD620 **data;
  int count;
} Vec_82DAD620;
typedef struct {
  char pad[0x120];
  Vec_82DAD620 v;
} Obj_82DAD620;

extern void fn_82DAD5A8(Vec_82DAD620 *);

void fn_82DAD620(Obj_82DAD620 *o, int arg)
{
  Vec_82DAD620 *v = &o->v;
  int i;
  for (i = v->count - 1; i >= 0; i--) {
    if (v->data[i] != 0) {
      timer("TtactAddCb");
      v->data[i]->vt->v1(v->data[i], arg);
      timer("Et");
    }
  }
  fn_82DAD5A8(v);
}
