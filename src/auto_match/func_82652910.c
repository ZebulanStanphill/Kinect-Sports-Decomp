typedef struct { char pad[0x18]; int (*f18)(int, void *); } DM;
extern DM **__imp_KeDebugMonitorData;
extern void fn_826518D0(void);
extern void fn_82652640(void);
typedef struct { void *fn; int arg; } Rec;
void fn_82652910(int param_1)
{
  Rec r;
  DM *d;
  d = *__imp_KeDebugMonitorData;
  if (d != 0) {
    d->f18(0x1c, 0);
  }
  r.fn = (void *)fn_826518D0;
  r.arg = param_1;
  d = *__imp_KeDebugMonitorData;
  if (d != 0) {
    d->f18(0x41, &r);
  }
  d = *__imp_KeDebugMonitorData;
  if (d != 0) {
    d->f18(0x5a, (void *)fn_82652640);
  }
}
