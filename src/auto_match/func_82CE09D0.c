extern int NetDll_select(int caller, int nfds, void *readfds, void *writefds, void *exceptfds, const void *timeout);

int fn_82CE09D0(int nfds, void *readfds, void *writefds, void *exceptfds, const void *timeout)
{
  return NetDll_select(1, nfds, readfds, writefds, exceptfds, timeout);
}
