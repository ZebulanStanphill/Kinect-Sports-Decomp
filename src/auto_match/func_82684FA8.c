extern int fn_82684E28();
extern unsigned int lbl_8200132C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005B00;


unsigned int * fn_82684FA8(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

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
  param_1[5] = param_3;
  param_1[7] = 0;
  param_1[8] = 0;
  fn_82684E28();
  return param_1;
}

