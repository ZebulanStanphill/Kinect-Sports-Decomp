extern unsigned char lbl_821CBFB0[];
extern void fn_8263BDD8(int, int, int, int, int *, int *, int *, int *);

void fn_8263BE98(int param_1, int param_2, int param_3, int *param_4, int *param_5, int param_6)
{
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;

  fn_8263BDD8(param_1, param_2, param_3, param_6, &iStack_30, &iStack_2c, &iStack_28, &iStack_24);
  if (param_5 != 0) {
    iStack_30 = (((unsigned int)lbl_821CBFB0[(*(unsigned int *)(param_1 + 0x20) & 0x3f) * 2 + 1] * *param_5) >> 3)
                + param_5[1] * iStack_2c + iStack_30;
  }
  *param_4 = iStack_2c;
  param_4[1] = iStack_30;
}
