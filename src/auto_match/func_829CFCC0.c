extern char lbl_8315C428[];
extern int lbl_83215000[];
typedef struct Ev_829CFCC0 {
  char pad0[0x10];
  void *ev2;
  unsigned int flags;
} Ev_829CFCC0;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int KeSetEvent(void *ev, int inc, int wait);

void fn_829CFCC0(void)
{
  int *p;
  Ev_829CFCC0 *ev;
  void *ev2;

  RtlEnterCriticalSection(lbl_8315C428);
  p = &lbl_83215000[0x2128 / 4];
  do {
    ev = (Ev_829CFCC0 *)*p;
    if (ev != 0 && (ev->flags & 0x10000) == 0) {
      KeSetEvent(ev, 1, 0);
      if (ev->ev2 != 0) {
        KeSetEvent(ev->ev2, 1, 0);
      }
    }
    p++;
  } while ((int)p < (int)&lbl_83215000[0x2140 / 4]);
  if (lbl_83215000[0x2144 / 4] == 0 && (ev2 = (void *)lbl_83215000[0x2140 / 4]) != 0) {
    KeSetEvent(ev2, 1, 0);
  }
  RtlLeaveCriticalSection(lbl_8315C428);
}
