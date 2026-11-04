extern unsigned __int64 __mftb();
typedef struct { const char *name; unsigned time, unused; } TimerEntry;
typedef struct { const char *name; unsigned time, unused; const char *name2; } TimerEntry2;
typedef struct { void *pad; TimerEntry *current; void *pad2; TimerEntry *end; } TimerStream;
extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;
extern void fn_830A9418(int, int, int);
extern void fn_82CE8E78(void *, void *, void *, int);

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

static void timer2(const char *name, const char *name2)
{
  TimerStream *stream = KeTlsGetValue(lbl_8323B4A0);
  if (stream->current < stream->end) {
    TimerEntry2 *entry = (TimerEntry2 *)stream->current;
    entry->name = name;
    entry->name2 = name2;
    entry->time = (unsigned)__mftb();
    stream->current = (TimerEntry *)(entry + 1);
  }
}

void fn_82DC4E70(unsigned *p, void *a, int *b)
{
  timer2("LtIntegrate", "StAppGrav");
  fn_830A9418(*p + 0x1e0, b[8], b[9]);
  timer("lt");
  fn_82CE8E78(a, b, b, 0);
}
