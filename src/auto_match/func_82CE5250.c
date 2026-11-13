unsigned int fn_82CE5250(int *param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = (*(int (**)())(*param_1 + 4))(param_1,param_2 + param_3 + 0x10);
  uVar2 = iVar1 + param_3 + 0xfU & ~(param_3 - 1U);
  *(int **)(uVar2 - 0x10) = param_1;
  *(int *)(uVar2 - 0xc) = param_2 + param_3;
  *(unsigned int *)(uVar2 - 8) = uVar2 - iVar1;
  return uVar2;
}

