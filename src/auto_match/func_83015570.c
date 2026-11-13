extern unsigned *fn_82FFE0F0(void *);


int fn_83015570(char *param_1, int param_2, unsigned *param_3, unsigned *param_4)
{
  unsigned *p;
  p = fn_82FFE0F0(param_1 + 4);
  if (p != 0) {
    *param_3 = p[0];
    *param_4 = p[1];
    return 1;
  }
  *param_4 = 0;
  *param_3 = 0xffffffff;
  return 2;
}
