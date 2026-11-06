extern void fn_82A369B0(int *, int);
extern void fn_82A36AE8(int);
extern void fn_82A39AA8(int, int *, int, int, unsigned int);

void fn_82A36C68(int param_1, unsigned int param_2, int param_3, int param_4)
{
  int r[4];

  fn_82A369B0(r, param_1);
  fn_82A39AA8(param_3, &param_4, r[1], 0x14, param_2);
  *(int *)(param_3 + 0xc) = r[0];
  if ((param_2 & 1) != 0) {
    fn_82A36AE8(param_3);
  }
}
