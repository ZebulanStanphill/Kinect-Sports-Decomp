extern int fn_83008328();
extern unsigned int lbl_8217C7B0;
extern unsigned int lbl_821AAD20;


unsigned int * fn_8302ADA8(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  
  fn_83008328();
  *param_1 = &lbl_8217C7B0;
  *(unsigned short *)(param_1 + 8) = 0;
  uVar1 = lbl_821AAD20;
  param_1[4] = lbl_821AAD20;
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  param_1[9] = 0;
  param_1[0xb] = param_4;
  param_1[10] = (param_3 & 1) << 0x1e | param_1[10] & 0x3fffffff;
  return param_1;
}

