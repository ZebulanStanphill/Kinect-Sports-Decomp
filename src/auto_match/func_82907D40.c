extern unsigned *fn_8265C940(unsigned, int);
extern void fn_8265C990(unsigned *, int);
extern void fn_82904F08(int, int, unsigned *);

int fn_82907D40(int param_1, int param_2, int *param_3, unsigned param_4)
{
  unsigned *buf;
  unsigned i;
  unsigned *t;

  buf = fn_8265C940(param_4 * 4, 0x24810000);
  if (buf == 0) {
    return 0x8007000e;
  }
  fn_82904F08(param_1, param_2, buf);
  for (i = 0; i < param_4; i++) {
    t = *(unsigned **)(param_3[i] * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
    *t = *t | buf[i];
  }
  fn_8265C990(buf, 0x24810000);
  return 0;
}
