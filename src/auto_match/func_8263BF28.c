extern unsigned char lbl_821CBFB0[];
extern void fn_8263BDD8(int, int, int, int, int *, int *, int *, int *);

void fn_8263BF28(int param_1, int param_2, int *param_3, int *param_4, int param_5)
{
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;

  fn_8263BDD8(param_1, 0, param_2, param_5, &iStack_30, &iStack_28, &iStack_2c, &iStack_24);
  if (param_4 != 0) {
    iStack_30 = (((unsigned int)lbl_821CBFB0[(*(unsigned int *)(param_1 + 0x20) & 0x3f) * 2 + 1] * *param_4) >> 3)
                + param_4[1] * iStack_28 + param_4[4] * iStack_2c + iStack_30;
  }
  *param_3 = iStack_28;
  param_3[1] = iStack_2c;
  param_3[2] = iStack_30;
}
