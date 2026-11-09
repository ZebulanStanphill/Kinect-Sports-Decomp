extern long _InterlockedExchangeAdd(long *, long);
extern void fn_82676EB8(int *, int *, unsigned __int64);
void fn_82676FA0(int *self, unsigned int *source)
{
 unsigned int value;
 unsigned int *dest;
 fn_82676EB8(self, self, (unsigned __int64)(unsigned)self[1] + 1);
 dest = (unsigned int *)(self[1] * 4 + self[0] - 4);
 if (dest) {
  value = *source;
  if (value) _InterlockedExchangeAdd((long *)(value + 4), 1);
  *dest = *source;
 }
}
