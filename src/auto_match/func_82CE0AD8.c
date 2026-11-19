extern int NetDll_send(int caller, unsigned int s, const char *buf, int len, int flags);

int send(unsigned int s, const char *buf, int len, int flags)
{
  return NetDll_send(1, s, buf, len, flags);
}
