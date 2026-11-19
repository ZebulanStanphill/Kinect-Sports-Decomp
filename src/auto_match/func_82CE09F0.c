extern int NetDll_WSAGetOverlappedResult(int caller, unsigned int s, void *overlapped, unsigned int *transferred, int wait, unsigned int *flags);

int WSAGetOverlappedResult(unsigned int s, void *overlapped, unsigned int *transferred, int wait, unsigned int *flags)
{
  return NetDll_WSAGetOverlappedResult(1, s, overlapped, transferred, wait, flags);
}
