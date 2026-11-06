extern int fn_826CC060();

unsigned int fn_827274C0(unsigned int *p)
{
  int n = fn_826CC060();
  unsigned int v;
  if (n >= 0) v = (n + 1) * 0x10 + *p; else v = 0;
  if (v != 0) return v + 4;
  return 0;
}
