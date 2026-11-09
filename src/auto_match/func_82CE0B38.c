extern int NetDll_WSASendTo(int, unsigned int, void *, unsigned int, unsigned int *, unsigned int, const void *, int, void *, void *);

int fn_82CE0B38(unsigned int s, void *buffers, unsigned int count, unsigned int *bytesSent, unsigned int flags, const void *to, int tolen, void *overlapped, void *completion)
{
  return NetDll_WSASendTo(1, s, buffers, count, bytesSent, flags, to, tolen, overlapped, completion);
}
