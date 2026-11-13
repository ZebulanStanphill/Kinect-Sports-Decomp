void fn_82635A90(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  param_1[iVar1 * 0x9b4 + 0x59] = *param_2;
  param_1[iVar1 * 0x9b4 + 0x5a] = param_2[1];
  param_1[iVar1 * 0x9b4 + 0x5b] = param_2[2];
  return;
}

