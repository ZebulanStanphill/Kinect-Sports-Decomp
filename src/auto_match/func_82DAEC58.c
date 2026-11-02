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
} Vt_82DAEC58;
typedef struct { Vt_82DAEC58 *vt; } Cb_82DAEC58;
typedef struct {
  Cb_82DAEC58 **data;
  int count;
} Vec_82DAEC58;
typedef struct {
  char pad[0x18c];
  Vec_82DAEC58 v;
} Obj_82DAEC58;

extern void fn_82DAD5A8(Vec_82DAEC58 *);

void fn_82DAEC58(Obj_82DAEC58 *o, int a, int b)
{
  Vec_82DAEC58 *v = &o->v;
  int i;
  for (i = v->count - 1; i >= 0; i--) {
    if (v->data[i] != 0) {
      timer("TtpostIntCb");
      v->data[i]->vt->v1(v->data[i], a, b);
      timer("Et");
    }
  }
  fn_82DAD5A8(v);
}
