extern int fn_826E1E10();
extern int fn_826E1F68();
extern unsigned int lbl_8200D0F8;


unsigned int * fn_826E30D0(unsigned int *param_1,unsigned __int64 param_2,unsigned char param_3)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  
  param_1[1] = 1;
  *param_1 = &lbl_8200D0F8;
  param_1[4] = 0x400;
  param_1[2] = 0x30;
  param_1[3] = 3;
  param_1[5] = 0x400;
  puVar2 = param_1 + 6;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(unsigned char *)(param_1 + 10) = param_3;
  uVar1 = (unsigned __int64)(unsigned int)param_1[7];
  fn_826E1F68(puVar2,puVar2,param_2);
  if (uVar1 < (param_2 & 0xffffffff)) {
    fn_826E1E10(uVar1 * 0x28 + (unsigned __int64)*puVar2,param_2 - uVar1);
  }
  return param_1;
}

