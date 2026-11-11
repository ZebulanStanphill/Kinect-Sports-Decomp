extern int NetDll_getsockopt(int caller, unsigned int s, int level, int optname, char *optval, int *optlen);

int fn_82CE0928(unsigned int s, int level, int optname, char *optval, int *optlen)
{
  return NetDll_getsockopt(1, s, level, optname, optval, optlen);
}
