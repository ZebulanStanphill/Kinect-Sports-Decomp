extern unsigned __int64 __mftb();
typedef struct { const char *name; unsigned time; int pad; const char *name2; } TimerEntryA;
typedef struct { const char *name; unsigned time, pad; } TimerEntryB;
typedef struct { void *pad; char *current; void *pad2; char *end; } TimerStream;
extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;
extern void fn_830B1390(int, int, int, int);
extern void fn_82CE8E78(void *, void *, void *, int);

typedef struct { char pad[0x8]; int f8, fc, f10; } Cfg_82DC5128;
typedef struct { char pad[0x20]; Cfg_82DC5128 *cfg; } Arg_82DC5128;
typedef struct { int base; } Self_82DC5128;

void fn_82DC5128(int *self, void *out, Arg_82DC5128 *a)
{
  TimerStream *s;
  TimerEntryA *ea;
  TimerEntryB *eb;
  Cfg_82DC5128 *c;
  s = KeTlsGetValue(lbl_8323B4A0);
  if (s->current < s->end) {
    ea = (TimerEntryA *)s->current;
    ea->name = "LtIntegrate";
    ea->name2 = "StSolverExport";
    ea->time = (unsigned)__mftb();
    s->current = (char *)(ea + 1);
  }
  c = a->cfg;
  fn_830B1390(*self + 0x1e0, c->f10, c->fc, c->f8);
  s = KeTlsGetValue(lbl_8323B4A0);
  if (s->current < s->end) {
    eb = (TimerEntryB *)s->current;
    eb->name = "lt";
    eb->time = (unsigned)__mftb();
    s->current = (char *)(eb + 1);
  }
  fn_82CE8E78(out, a, a, 0);
}
