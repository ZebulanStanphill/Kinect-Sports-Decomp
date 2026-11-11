extern int NetDll_WSAGetOverlappedResult(int caller, unsigned int s, void *overlapped, unsigned int *transferred, int wait, unsigned int *flags);

int fn_82CE09F0(unsigned int s, void *overlapped, unsigned int *transferred, int wait, unsigned int *flags)
{
  return NetDll_WSAGetOverlappedResult(1, s, overlapped, transferred, wait, flags);
}
