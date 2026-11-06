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

typedef struct Inner_82DC4C80 { char pad0[0x18]; unsigned int f18; char pad1[0x25 - 0x1c]; unsigned char f25; } Inner_82DC4C80;
typedef struct Arg_82DC4C80 { char pad[0x14]; Inner_82DC4C80 *inner; unsigned int f18; } Arg_82DC4C80;
typedef struct Triple_82DC4C80 { unsigned int a, b, c; } Triple_82DC4C80;

extern void fn_82DAF6C8();
extern void fn_82D91828();
extern void fn_82CE8E78();

void fn_82DC4C80(void *unused, void *p2, Arg_82DC4C80 *p3)
{
  Inner_82DC4C80 *in;
  unsigned int n;
  Triple_82DC4C80 t;
  timer("TtSplitIsle");
  in = p3->inner;
  n = p3->f18 + 0x5c;
  in->f25 = in->f25 & 0x3f;
  t.a = 0;
  t.b = 0;
  t.c = 0x80000000;
  fn_82DAF6C8(in);
  fn_82D91828(in, in->f18, n, &t);
  timer("Et");
  fn_82CE8E78(p2, p3, p3, 0);
}
