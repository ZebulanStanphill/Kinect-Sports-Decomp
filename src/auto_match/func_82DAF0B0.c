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

typedef struct { char pad[20]; void (*f)(void *, void *); } Vt_82DAF0B0;
typedef struct { Vt_82DAF0B0 *vt; } Cb_82DAF0B0;
typedef struct {
  Cb_82DAF0B0 **data;
  int count;
} Vec_82DAF0B0;
typedef struct {
  char pad[420];
  Vec_82DAF0B0 v;
} Obj_82DAF0B0;
typedef struct { int pad[4]; int x; } Arg_82DAF0B0;

extern void fn_82DAD5A8(Vec_82DAF0B0 *);

void fn_82DAF0B0(Obj_82DAF0B0 *o, Arg_82DAF0B0 *a)
{
  Vec_82DAF0B0 *v = &o->v;
  int i;
  a->x = 0;
  for (i = v->count - 1; i >= 0; i--) {
    if (v->data[i] != 0) {
      timer("TtcpRemCb");
      v->data[i]->vt->f(v->data[i], a);
      timer("Et");
    }
  }
  fn_82DAD5A8(v);
}
