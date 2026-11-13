unsigned int fn_827F1B90(int param_1,unsigned int *param_2)

{
  int iVar1;
  
  if (param_2 != *(unsigned int **)(*(int *)(param_1 + 0x14) + 4)) {
    *(unsigned int *)(param_2[1] + 8) = param_2[2];
    *(unsigned int *)(param_2[2] + 4) = param_2[1];
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4);
    param_2[1] = iVar1;
    *(unsigned int **)(iVar1 + 8) = param_2;
    param_2[2] = *(unsigned int *)(param_1 + 0x14);
    *(unsigned int **)(*(int *)(param_1 + 0x14) + 4) = param_2;
  }
  *(unsigned int **)(param_1 + 0x14) = param_2;
  return *param_2;
}

