extern int NetDll_send(int caller, unsigned int s, const char *buf, int len, int flags);

int fn_82CE0AD8(unsigned int s, const char *buf, int len, int flags)
{
  return NetDll_send(1, s, buf, len, flags);
}
