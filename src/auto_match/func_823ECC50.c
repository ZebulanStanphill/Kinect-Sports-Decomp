extern int fn_8223C610();


void fn_823ECC50(int param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned int iVar1;
  
  iVar1 = fn_8223C610(param_2,*(unsigned int *)(param_1 + 8),0,0);
  if (iVar1 == 7) {
    iVar1 = -1;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
  return;
}

