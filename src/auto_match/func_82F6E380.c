extern int fn_82A1E228(unsigned __int64 *);

unsigned __int64 fn_82F6E380(unsigned __int64 *out)
{
  unsigned __int64 ft;
  unsigned __int64 t;

  fn_82A1E228(&ft);
  t = (ft + 0xfe624e212ac18000ULL) / 10000000;
  if ((__int64)t > 0x793406fffLL) {
    t = 0xffffffffffffffffULL;
  }
  if (out != 0) {
    *out = t;
  }
  return t;
}
