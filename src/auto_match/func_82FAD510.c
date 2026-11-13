int * fn_82FAD510(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_3;
  param_3[1] = iVar1;
  iVar2 = *(int *)(iVar1 + 4);
  *param_3 = iVar2;
  param_4[1] = iVar2;
  if (iVar1 == 0) {
    *(int **)(param_2 + 4) = param_4;
  }
  else {
    *(int **)(iVar1 + 4) = param_4;
  }
  if (iVar2 == 0) {
    *(int **)(param_2 + 8) = param_4;
  }
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  (**(int (***)())(*param_4 + 0x14))(param_4);
  *param_1 = *param_3;
  return param_1;
}

