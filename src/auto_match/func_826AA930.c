extern int fn_8267C4C8();
extern unsigned int lbl_8200730C;


unsigned int * fn_826AA930(unsigned int *param_1,int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  
  param_1[1] = 1;
  *param_1 = &lbl_8200730C;
  if ((int)param_3 != 0) {
    fn_8267C4C8(param_3);
  }
  param_1[2] = (int)param_3;
  iVar1 = *param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar1 = *(int *)(iVar1 + 8);
  param_1[6] = iVar1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  param_1[7] = 0xffffffff;
  return param_1;
}

