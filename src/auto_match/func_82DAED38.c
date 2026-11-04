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
} Vt_82DAED38;
typedef struct { Vt_82DAED38 *vt; } Cb_82DAED38;
typedef struct {
  Cb_82DAED38 **data;
  int count;
} Vec_82DAED38;
typedef struct {
  char pad[0x198];
  Vec_82DAED38 v;
} Obj_82DAED38;

extern void fn_82DAD5A8(Vec_82DAED38 *);

void fn_82DAED38(Obj_82DAED38 *o, int a, int b)
{
  Vec_82DAED38 *v = &o->v;
  int i;
  for (i = v->count - 1; i >= 0; i--) {
    if (v->data[i] != 0) {
      timer("TtpostCollCb");
      v->data[i]->vt->v1(v->data[i], a, b);
      timer("Et");
    }
  }
  fn_82DAD5A8(v);
}
