typedef struct IoStatus_8306C6E8 {
  int Status;
  unsigned int Information;
} IoStatus_8306C6E8;

extern __int64 *fn_82A36058(__int64 *timeout, unsigned int ms);
extern int NtRemoveIoCompletion(void *port, void **key, void **apc, IoStatus_8306C6E8 *iosb, __int64 *timeout);
extern void fn_82A2A370(unsigned int err);
extern void fn_82A31F28(int status);

int fn_8306C6E8(void *port, unsigned int *bytes, void **key, void **overlapped, unsigned int ms)
{
  int st;
  void *apc;
  IoStatus_8306C6E8 iosb;
  __int64 timeout;

  st = NtRemoveIoCompletion(port, key, &apc, &iosb, fn_82A36058(&timeout, ms));
  if (st >= 0 && st != 0x102) {
    *overlapped = apc;
    *bytes = iosb.Information;
    if (iosb.Status >= 0) {
      return 1;
    }
    st = iosb.Status;
  } else {
    *overlapped = 0;
    if (st == 0x102) {
      fn_82A2A370(0x102);
      return 0;
    }
  }
  fn_82A31F28(st);
  return 0;
}
