typedef struct { int a; char cs[28]; } Glob;
extern Glob *lbl_832642E0;
extern void *lbl_83264EC4;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
void fn_83032810(void *p)
{
  void *cs = lbl_832642E0->cs;
  RtlEnterCriticalSection(cs);
  if (lbl_83264EC4 == 0 && p != 0) lbl_83264EC4 = p;
  RtlLeaveCriticalSection(cs);
}

