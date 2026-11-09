extern int NetDll_WSARecvFrom(int, unsigned int, void *, unsigned int, unsigned int *, unsigned int *, void *, int *, void *, void *);

int fn_82CE0A80(unsigned int s, void *buffers, unsigned int count, unsigned int *bytes, unsigned int *flags, void *addr, int *addrlen, void *overlapped, void *completion)
{
  return NetDll_WSARecvFrom(1, s, buffers, count, bytes, flags, addr, addrlen, overlapped, completion);
}
