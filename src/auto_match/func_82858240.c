extern void fn_8263CBB0(void *, int, void *, unsigned __int64);
int fn_82858240(void *a, int n, void *c)
{
  fn_8263CBB0(a, n, c, 0x8000000000000000ULL >> (unsigned)(n + 32));
  return 0;
}
