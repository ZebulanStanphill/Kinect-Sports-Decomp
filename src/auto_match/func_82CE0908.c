extern int NetDll_setsockopt(int caller, unsigned int s, int level, int optname, const char *optval, int optlen);

int fn_82CE0908(unsigned int s, int level, int optname, const char *optval, int optlen)
{
  return NetDll_setsockopt(1, s, level, optname, optval, optlen);
}
