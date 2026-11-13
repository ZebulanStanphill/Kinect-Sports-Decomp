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

typedef struct Obj_8309A9C8 {
  char pad0[0x18];
  int f18;
  char pad1c[0x34 - 0x1c];
  int f34;
  int f38;
} Obj_8309A9C8;

extern int fn_8309A6F8(Obj_8309A9C8 *, int, int, int);
extern int fn_82CE8E78(void *, Obj_8309A9C8 *, Obj_8309A9C8 *, int);

void fn_8309A9C8(void *param_1, Obj_8309A9C8 *o)
{
  timer("TtCollQueryPairLinearCast");
  fn_8309A6F8(o, o->f18, o->f34, o->f38);
  timer("Et");
  fn_82CE8E78(param_1, o, o, 0);
}
