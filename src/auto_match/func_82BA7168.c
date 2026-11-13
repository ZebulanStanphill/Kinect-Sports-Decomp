void fn_82BA7168(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 0x2fd8) {
    param_2 = 0x2fd8;
  }
  iVar2 = param_1[1];
  piVar1 = (int *)(*(int (**)())(*param_1 + 0x5a0))(*(unsigned int *)(*param_1 + 0x5a4),param_2 + 8);
  param_1[1] = piVar1;
  *piVar1 = iVar2;
  iVar3 = (int)(param_2 + 8);
  *(int *)(param_1[1] + 4) = iVar3;
  iVar2 = param_1[1] + 8;
  param_1[2] = iVar2;
  param_1[5] = iVar2;
  param_1[4] = param_1[1] + iVar3;
  return;
}

