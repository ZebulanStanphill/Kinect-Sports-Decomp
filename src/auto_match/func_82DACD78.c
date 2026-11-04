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

struct Obj_82DACD78;
typedef struct {
  void (*v0)(void *);
  void (*v1)(void *);
  void (*v2)(void *);
  void (*v3)(void *, struct Obj_82DACD78 *);
} Vt_82DACD78;
typedef struct { Vt_82DACD78 *vt; } Cb_82DACD78;
typedef struct {
  int pad0, pad4;
  Cb_82DACD78 **data;
  unsigned short count;
} Vec_82DACD78;
typedef struct Obj_82DACD78 {
  char pad[0x214];
  Vec_82DACD78 *v;
} Obj_82DACD78;

void fn_82DACD78(Obj_82DACD78 *o)
{
  Vec_82DACD78 *v = o->v;
  int i;
  Vec_82DACD78 *vv;
  vv = v;
  if (v != 0) {
    for (i = v->count - 1; i >= 0; i--) {
      if (vv->data[i] != 0) {
        timer("TtsetShapeCb");
        vv->data[i]->vt->v3(vv->data[i], o);
        timer("Et");
      }
    }
  }
}
