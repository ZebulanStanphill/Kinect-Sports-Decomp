extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern unsigned int fn_830161E8(void *, int);
extern void fn_83015E68(unsigned int, int);

int fn_83016298(void *cs, int a, int b)
{
  unsigned int p;
  RtlEnterCriticalSection(cs);
  p = fn_830161E8(cs, a);
  if (p != 0) {
    fn_83015E68(p, b);
    RtlLeaveCriticalSection(cs);
    return 1;
  }
  RtlLeaveCriticalSection(cs);
  return 0x34;
}
