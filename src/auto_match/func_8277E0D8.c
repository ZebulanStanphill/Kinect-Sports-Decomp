extern int fn_82F63CA0();


void fn_8277E0D8(int *param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = param_1[1];
  if (param_2 < uVar1) {
    iVar2 = param_2 * 4 + *param_1;
    fn_82F63CA0(iVar2 + 4,iVar2,uVar1 - param_2 & 0x3fffffff);
    *(unsigned int *)(param_2 * 4 + *param_1) = *param_3;
    param_1[1] = param_1[1] + 1;
  }
  else {
    param_1[1] = uVar1 + 1;
    *(unsigned int *)(uVar1 * 4 + *param_1) = *param_3;
  }
  return;
}

