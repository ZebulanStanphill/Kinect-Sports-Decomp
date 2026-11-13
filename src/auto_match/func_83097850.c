typedef struct { const char *name; unsigned time, unused; } TimerEntry;
typedef struct { void *pad; TimerEntry *current; void *pad2; TimerEntry *end; } TimerStream;
extern unsigned __int64 __mftb();
extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;

typedef struct Job_83097850 {
    char pad0[0x20];
    void *f20;
    void *f24;
    void *f28;
    int f2c;
    int f30;
    int f34;
    float f38;
    float f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
} Job_83097850;

extern void fn_8309AF30(void *a, void *b, int c, int d, int e, float f, float g, int h, int i, int *j, int k, int *l);
extern void fn_8309B280(void *b, int c, int d, int e, float f, float g, int h, int i, int *j, int k, int *l);
extern void fn_82CE8E78(void *a, Job_83097850 *b, Job_83097850 *c, int d);

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

void fn_83097850(void *ctx, Job_83097850 *j)
{
  timer("TtCpuAutoRayBundleJob");
  j->f48 = 0;
  j->f50 = 0;
  if (j->f20 != 0) {
    fn_8309AF30(j->f20, j->f28, j->f2c, j->f30, j->f34, j->f38, j->f3c, j->f40, j->f44, &j->f48, j->f4c, &j->f50);
  } else {
    fn_8309B280(j->f24, j->f2c, j->f30, j->f34, j->f38, j->f3c, j->f40, j->f44, &j->f48, j->f4c, &j->f50);
  }
  timer("Et");
  fn_82CE8E78(ctx, j, j, 0);
}
