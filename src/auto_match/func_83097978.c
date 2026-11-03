typedef struct { const char *name; unsigned time, unused; } TimerEntry;
typedef struct { void *pad; TimerEntry *current; void *pad2; TimerEntry *end; } TimerStream;
extern unsigned __int64 __mftb();
extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;
extern void fn_83085320();
extern void fn_82CE8E78();

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

void fn_83097978(int param_1, int param_2)
{
  struct { int out; int pad; int first; int second; } L;

  timer("TtCpuKdTreeFastBuild");
  L.first = *(int *)(param_2 + 0x38);
  L.second = *(int *)(param_2 + 0x3c);
  L.out = 0;
  fn_83085320(&L.first, *(int *)(param_2 + 0x24), *(int *)(param_2 + 0x28), *(int *)(param_2 + 0x30), *(int *)(param_2 + 0x20), *(int *)(param_2 + 0x34), &L.out);
  **(int **)(param_2 + 0x2c) = L.out;
  timer("Et");
  fn_82CE8E78(param_1, param_2, param_2, 0);
}
