typedef int (*Cb_82652820)(int, void *);
extern unsigned *__imp_KeCertMonitorData;
extern unsigned *__imp_KeDebugMonitorData;
extern void fn_826518D0(void);
extern void fn_826525A0(void);
extern void fn_82652640(void);

static __forceinline void DbgCall(int a, void *b)
{
  if (*__imp_KeDebugMonitorData != 0)
    (*(Cb_82652820 *)(*__imp_KeDebugMonitorData + 0x18))(a, b);
}

void fn_82652820(int param_1)
{
  Cb_82652820 cb;
  struct { void (*f)(void); int p; } s;
  unsigned m = *__imp_KeCertMonitorData;
  if (m != 0) {
    cb = *(Cb_82652820 *)m;
    if (cb == 0) goto skip;
  } else {
    if (*__imp_KeDebugMonitorData == 0) goto skip;
    cb = *(Cb_82652820 *)(*__imp_KeDebugMonitorData + 0x18);
  }
  cb(0x1c, (void *)fn_826525A0);
skip:
  s.f = fn_826518D0;
  s.p = param_1;
  if (*__imp_KeDebugMonitorData != 0)
    (*(Cb_82652820 *)(*__imp_KeDebugMonitorData + 0x18))(0x42, &s);
  {
    unsigned d = *__imp_KeDebugMonitorData;
    if (d != 0)
      (*(Cb_82652820 *)(d + 0x18))(0x59, (void *)fn_82652640);
  }
  *(int *)(param_1 + 0x5550) = 0;
  *(int *)(param_1 + 0x5554) = 0;
  *(int *)(param_1 + 0x5558) = 1;
}
