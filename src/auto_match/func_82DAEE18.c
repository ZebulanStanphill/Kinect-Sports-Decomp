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
  void (*v1)(void *, int, int);
} Vt_82DAEE18;
typedef struct { Vt_82DAEE18 *vt; } Cb_82DAEE18;
typedef struct {
  Cb_82DAEE18 **data;
  int count;
} Vec_82DAEE18;
typedef struct {
  char pad[0x1b0];
  Vec_82DAEE18 v;
} Obj_82DAEE18;

extern void fn_82DAD5A8(Vec_82DAEE18 *);

void fn_82DAEE18(Obj_82DAEE18 *o, int a, int b)
{
  Vec_82DAEE18 *v = &o->v;
  int i;
  for (i = v->count - 1; i >= 0; i--) {
    if (v->data[i] != 0) {
      timer("TtimpLimitCb");
      v->data[i]->vt->v1(v->data[i], a, b);
      timer("Et");
    }
  }
  fn_82DAD5A8(v);
}
