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

typedef struct Obj_82DAEB78 Obj_82DAEB78;
typedef struct {
  void (*v0)(void *);
  void (*v1)(void *, Obj_82DAEB78 *, int);
} Vt_82DAEB78;
typedef struct { Vt_82DAEB78 *vt; } Cb_82DAEB78;
typedef struct {
  Cb_82DAEB78 **data;
  int count;
} Vec_82DAEB78;
struct Obj_82DAEB78 {
  char pad[0x180];
  Vec_82DAEB78 v;
};

extern void fn_82DAD5A8(Vec_82DAEB78 *);

void fn_82DAEB78(Obj_82DAEB78 *o, int arg)
{
  Vec_82DAEB78 *v = &o->v;
  int i;
  for (i = v->count - 1; i >= 0; i--) {
    if (v->data[i] != 0) {
      timer("TtpostCollCb");
      v->data[i]->vt->v1(v->data[i], o, arg);
      timer("Et");
    }
  }
  fn_82DAD5A8(v);
}
