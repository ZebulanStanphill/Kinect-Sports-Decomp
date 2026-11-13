extern unsigned int lbl_831A9798;


void fn_82E82680(int *param_1,int param_2)

{
  if (*param_1 == 0) {
    param_1[0x213] = param_2;
    param_1[0x7a8] = param_2;
    param_1[0x214] = (&lbl_831A9798)[param_2];
    return;
  }
  param_1[0x213] = 0;
  param_1[0x7a8] = 0;
  param_1[0x214] = lbl_831A9798;
  return;
}

