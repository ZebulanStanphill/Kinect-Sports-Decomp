extern int fn_830503D0();
extern int fn_83050E80();
extern void RtlEnterCriticalSection();
extern void RtlLeaveCriticalSection();

void fn_83055798(char *o, int p2, long long p3, int p4, int p5, int p6)
{
  RtlEnterCriticalSection(o + 0x38);
  fn_830503D0(o, &p3, p4, p5, p6 == 1);
  fn_83050E80(o, p6);
  o[0xa0] = 0;
  RtlLeaveCriticalSection(o + 0x38);
}
