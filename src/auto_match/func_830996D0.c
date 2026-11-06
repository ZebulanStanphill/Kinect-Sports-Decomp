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

typedef struct Item_830996D0 {
    char pad0[0x20];
    int budget;
    int value;
    int used;
    int pad2c;
} Item_830996D0;

typedef struct Job_830996D0 {
    char pad0[0x24];
    Item_830996D0 *items;
    int numItems;
    int numWorkers;
    void *workers[1];
} Job_830996D0;

extern int fn_830B6200(void *worker, Item_830996D0 *item, int *value, int budget);
extern void fn_82CE8E78(void *ctx, Job_830996D0 *a, Job_830996D0 *b, int c);

void fn_830996D0(void *ctx, Job_830996D0 *job)
{
  Item_830996D0 *item;
  int n;
  int i;
  int j;
  int budget;
  int r;

  timer("TtCpuKdTreeAabb");
  n = job->numItems;
  item = job->items;
  for (i = 0; i < n; i++, item++) {
    int v;
    v = item->value;
    item->used = 0;
    budget = item->budget;
    for (j = 0; j < job->numWorkers; j++) {
      if (job->workers[j] != 0) {
        r = fn_830B6200(job->workers[j], item, &v, budget);
        budget -= r;
        item->used += r;
      }
    }
  }
  timer("Et");
  fn_82CE8E78(ctx, job, job, 0);
}
