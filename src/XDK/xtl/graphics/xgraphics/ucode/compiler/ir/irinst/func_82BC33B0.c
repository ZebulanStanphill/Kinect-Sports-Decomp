extern int fn_82BC2800();
extern unsigned int lbl_820E0830;


void fn_82BC33B0(unsigned int *param_1,unsigned int param_2,int param_3)

{
  param_1[6] = param_2;
  param_1[1] = 0;
  *param_1 = &lbl_820E0830;
  param_1[2] = 0;
  param_1[0x38] = *(unsigned int *)(param_3 + 0x560);
  *(int *)(param_3 + 0x560) = *(int *)(param_3 + 0x560) + 1;
  param_1[0xdf] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = param_3;
  param_1[0xef] = 0;
  param_1[0x39] = 1;
  fn_82BC2800();
  return;
}

