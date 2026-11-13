extern unsigned __int64 __mftb();
typedef struct { const char *name; unsigned time; int pad; const char *name2; } TimerEntryA;
typedef struct { const char *name; unsigned time, pad; } TimerEntryB;
typedef struct { void *pad; char *current; void *pad2; char *end; } TimerStream;
extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;

typedef struct Block_82DC4F30 { int v[4]; } Block_82DC4F30;
typedef struct Cfg_82DC4F30 {
  char pad[0x8];
  int f8, fc;
  Block_82DC4F30 *blocks;
  int f14;
  unsigned int size;
} Cfg_82DC4F30;
typedef struct Arg_82DC4F30 {
  char pad[0x20];
  unsigned int f20;
  int f24;
  int f28;
  Cfg_82DC4F30 *cfg;
} Arg_82DC4F30;

extern void fn_830AE0E8(char *solver, int a, int b, int c, int d, Block_82DC4F30 *blocks);
extern void fn_82CE8E78(void *out, Arg_82DC4F30 *a, Arg_82DC4F30 *b, int flags);

void fn_82DC4F30(char **self, void *out, Arg_82DC4F30 *a)
{
  TimerStream *s;
  TimerEntryA *ea;
  TimerEntryB *eb;
  Cfg_82DC4F30 *c;
  int f8, fc;
  Block_82DC4F30 *blocks;
  int i, n;

  s = KeTlsGetValue(lbl_8323B4A0);
  if (s->current < s->end) {
    ea = (TimerEntryA *)s->current;
    ea->name = "LtIntegrate";
    ea->name2 = "StSolve";
    ea->time = (unsigned)__mftb();
    s->current = (char *)(ea + 1);
  }
  c = a->cfg;
  f8 = c->f8;
  fc = c->fc;
  blocks = c->blocks;
  a->f24 = *(int *)(*self + 0x2f8);
  if (a->f20 == 0) {
    n = (c->size + 15) >> 4;
    for (i = 0; i < n; i++) {
      blocks[i].v[0] = 0;
      blocks[i].v[1] = 0;
      blocks[i].v[2] = 0;
      blocks[i].v[3] = 0;
    }
  }
  fn_830AE0E8(*self + 0x1e0, a->f20, a->f28, fc, f8, blocks);
  s = KeTlsGetValue(lbl_8323B4A0);
  if (s->current < s->end) {
    eb = (TimerEntryB *)s->current;
    eb->name = "lt";
    eb->time = (unsigned)__mftb();
    s->current = (char *)(eb + 1);
  }
  fn_82CE8E78(out, a, a, 0);
}
