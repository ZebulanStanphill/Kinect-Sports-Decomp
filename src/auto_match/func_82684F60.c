extern unsigned int lbl_8200132C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005B00;


void fn_82684F60(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  param_1[1] = 1;
  *param_1 = &lbl_82005B00;
  uVar2 = lbl_82002AE0;
  param_1[2] = 1;
  uVar1 = lbl_8200132C;
  param_1[3] = 0;
  param_1[4] = uVar2;
  param_1[6] = uVar1;
  param_1[5] = param_2;
  param_1[7] = param_3;
  param_1[8] = param_4;
  return;
}

