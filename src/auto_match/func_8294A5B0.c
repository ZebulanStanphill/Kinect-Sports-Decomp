extern int fn_82949AB0(int a, int b, const char *s, int c, int d);
extern int fn_82960240(int a);

void fn_8294A5B0(int param_1)
{
  unsigned int *t;
  unsigned int *e;

  t = *(unsigned int **)(param_1 + 0x104);
  e = *(unsigned int **)(*(int *)(param_1 + 0x14) + ((int *)t[2])[t[0] & 0xfffff] * 4);
  if ((e[0xf] & 0x1f0000) == 0x80000) {
    e[0xf] &= ~0x80000;
    fn_82949AB0(param_1, 0, "XMVectorSubtract", 0, 0);
    e[0xf] |= 0x80000;
  }
  else {
    fn_82949AB0(param_1, 0, "XMVectorAdd", 0, 0);
  }
  fn_82960240(param_1);
}
