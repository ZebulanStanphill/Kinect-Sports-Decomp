extern int NetDll_recv(int caller, unsigned int s, char *buf, int len, int flags);

int fn_82CE0A20(unsigned int s, char *buf, int len, int flags)
{
  return NetDll_recv(1, s, buf, len, flags);
}
