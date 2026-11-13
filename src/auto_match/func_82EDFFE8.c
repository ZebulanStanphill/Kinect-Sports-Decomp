extern void *fn_82E4FE08(unsigned);
extern void *memcpy(void *, const void *, unsigned);

int *fn_82EDFFE8(const void *param_1, unsigned param_2)
{
  int *p;
  int n;

  if (param_2 > 0x7fffffff) {
    return 0;
  }
  n = param_2 * 2;
  p = (int *)fn_82E4FE08(n + 0x15U & 0xfffffff0);
  if (p != 0) {
    *p = n;
    p = p + 1;
    if (param_1 != 0) {
      memcpy(p, param_1, n);
    }
    ((short *)p)[param_2] = 0;
  }
  return p;
}
