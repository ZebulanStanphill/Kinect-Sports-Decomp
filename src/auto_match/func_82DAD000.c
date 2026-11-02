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

typedef struct { void (*f)(void *, void *); } Vt_82DAD000;
typedef struct { Vt_82DAD000 *vt; } Cb_82DAD000;
typedef struct {
  Cb_82DAD000 **data;
  unsigned short count;
} Vec_82DAD000;
typedef struct {
  char pad[512];
  Vec_82DAD000 v;
} Obj_82DAD000;
typedef struct { int pad[3]; int x; } Arg_82DAD000;

extern void fn_82DAC990(Vec_82DAD000 *);

void fn_82DAD000(Obj_82DAD000 *o, Arg_82DAD000 *a)
{
  Vec_82DAD000 *v = &o->v;
  int i;
  for (i = v->count - 1; i >= 0; i--) {
    if (v->data[i] != 0) {
      timer("TtcpCb");
      v->data[i]->vt->f(v->data[i], a);
      timer("Et");
    }
  }
  fn_82DAC990(v);
}
