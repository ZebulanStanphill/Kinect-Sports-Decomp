extern int fn_826C0B08();
extern int fn_8270F960();
extern unsigned int lbl_8200E8C0;
extern unsigned int lbl_8200E914;


unsigned int * fn_827108A8(unsigned int *param_1,int param_2)

{
  int iVar1;
  
  fn_826C0B08();
  *param_1 = &lbl_8200E914;
  param_1[4] = &lbl_8200E8C0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x78) + 8);
  param_1[0xc] = iVar1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  fn_8270F960(param_1,param_2);
  return param_1;
}

