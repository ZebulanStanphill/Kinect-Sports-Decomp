long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);

extern long lbl_831575AC;
extern long KeTlsAlloc(void);
extern int KeTlsFree(long index);

long fn_828636B8(void)
{
  if (lbl_831575AC == -1) {
    long index = KeTlsAlloc();
    long old = _InterlockedCompareExchange(&lbl_831575AC, index, -1);
    if (old != -1)
      KeTlsFree(old);
  }
  return lbl_831575AC;
}
