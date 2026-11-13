extern char lbl_8315C428[];
extern unsigned int lbl_83215000[];
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern int KeSetEvent(void *, int, int);

void fn_829CFD70(void)

{
  unsigned int *ev;
  int p;

  RtlEnterCriticalSection(lbl_8315C428);
  for (p = (int)(lbl_83215000 + 0x2128 / 4); p < (int)(lbl_83215000 + 0x2140 / 4); p += 4) {
    ev = (unsigned int *)*(unsigned int *)p;
    if (ev != 0) {
      KeSetEvent(ev,1,0);
      if (ev[4] != 0) {
        KeSetEvent((void *)ev[4],1,0);
      }
    }
  }
  if (lbl_83215000[0x2140 / 4] != 0) {
    KeSetEvent((void *)lbl_83215000[0x2140 / 4],1,0);
  }
  RtlLeaveCriticalSection(lbl_8315C428);
}
