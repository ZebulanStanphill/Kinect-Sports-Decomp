extern int fn_826829A0();
extern int fn_826C09B0();
extern unsigned int lbl_8200E8C0;
extern unsigned int lbl_8200E914;


unsigned int * fn_82711098(unsigned int *param_1,int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  
  fn_826C09B0();
  *param_1 = &lbl_8200E914;
  param_1[4] = &lbl_8200E8C0;
  iVar1 = *(int *)(*param_2 + 8);
  param_1[0xc] = iVar1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  fn_826829A0(param_1 + 4,param_2,param_3);
  return param_1;
}

