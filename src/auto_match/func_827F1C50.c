void fn_827F1C50(unsigned short *param_1,int param_2,unsigned short *param_3)

{
  unsigned short uVar1;
  int iVar2;
  
  if (param_3 != *(unsigned short **)(*(int *)(param_2 + 0xd4) + 4)) {
    *(unsigned int *)(*(int *)(param_3 + 2) + 8) = *(unsigned int *)(param_3 + 4);
    *(unsigned int *)(*(int *)(param_3 + 4) + 4) = *(unsigned int *)(param_3 + 2);
    iVar2 = *(int *)(*(int *)(param_2 + 0xd4) + 4);
    *(int *)(param_3 + 2) = iVar2;
    *(unsigned short **)(iVar2 + 8) = param_3;
    *(unsigned int *)(param_3 + 4) = *(unsigned int *)(param_2 + 0xd4);
    *(unsigned short **)(*(int *)(param_2 + 0xd4) + 4) = param_3;
  }
  *(unsigned short **)(param_2 + 0xd4) = param_3;
  uVar1 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar1;
  return;
}

