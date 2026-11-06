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

typedef struct Rec_82D742B0 {
  char pad0[0x1c];
  int count;
  char pad1[0x50 - 0x20];
  int bits[8];
} Rec_82D742B0;
typedef struct Obj_82D742B0 {
  int f0;
  Rec_82D742B0 **f4;
} Obj_82D742B0;

extern int **fn_82CE5410(void);
extern void fn_82D71B20(char *c, Obj_82D742B0 *o, char *r, int *buf, int e);

char *fn_82D742B0(Obj_82D742B0 *o, int a, char *c, int b, int e)
{
  Rec_82D742B0 *r;
  int *buf;
  int n;
  int i;
  int k;
  int **sp;
  timer("TtList3");
  r = *o->f4;
  n = r->count;
  sp = fn_82CE5410();
  buf = *sp;
  *sp = (int *)((char *)buf + ((n * 4 + 0x83) & 0xffffff80));
  k = 0;
  for (i = 0; i < n; i++) {
    if ((unsigned)i >= 0x100 || (r->bits[(unsigned)i >> 5] & (1 << (i & 31))) != 0)
      buf[k++] = i;
  }
  buf[k] = -1;
  fn_82D71B20(c, o, (char *)r + 0x10, buf, e);
  timer("Et");
  sp = fn_82CE5410();
  *sp = buf;
  return c + 0x10;
}
