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

typedef struct { char pad_0[0x8]; void (*f)(void *, void *); } Vt_82DAD1B0;
typedef struct { Vt_82DAD1B0 *vt; } Cb_82DAD1B0;
typedef struct {
  Cb_82DAD1B0 **data;
  unsigned short count;
} Vec_82DAD1B0;
typedef struct {
  char pad[512];
  Vec_82DAD1B0 v;
} Obj_82DAD1B0;
typedef struct { int pad[3]; int x; } Arg_82DAD1B0;

extern void fn_82DAC990(Vec_82DAD1B0 *);

void fn_82DAD1B0(Obj_82DAD1B0 *o, Arg_82DAD1B0 *a)
{
  Vec_82DAD1B0 *v = &o->v;
  int i;
  for (i = v->count - 1; i >= 0; i--) {
    if (v->data[i] != 0) {
      timer("TtFinCollCb");
      v->data[i]->vt->f(v->data[i], a);
      timer("Et");
    }
  }
  fn_82DAC990(v);
}
