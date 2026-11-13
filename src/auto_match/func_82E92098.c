extern unsigned int lbl_821AAD20;


void fn_82E92098(int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  
  uVar4 = lbl_821AAD20;
  if (*param_1 == 0) {
    return;
  }
  if ((unsigned __int64)(unsigned int)param_1[1] <= (param_2 & 0xffffffff)) {
    return;
  }
  iVar2 = (int)((param_2 + (param_2 & 0x3fffffff) * 4 & 0x1fffffff) << 3);
  param_2 = param_2 + (param_2 & 0x3fffffff) * 4;
  puVar1 = *(unsigned int **)(iVar2 + *param_1 + 4);
  puVar1[5] = lbl_821AAD20;
  puVar1[0x206] = 0;
  *puVar1 = uVar4;
  puVar1[4] = 0;
  puVar1[1] = uVar4;
  puVar1[2] = uVar4;
  iVar3 = (int)((param_2 & 0x1fffffff) << 3);
  *(unsigned int *)(iVar3 + *param_1 + 8) = 0;
  *(unsigned int *)(iVar3 + *param_1 + 0xc) = 0;
  *(unsigned int *)((int)((param_2 + 2 & 0xffffffff) << 3) + *param_1) = 0;
  *(unsigned int *)(iVar3 + *param_1 + 0x14) = 0;
  *(unsigned int *)((int)((param_2 + 3 & 0xffffffff) << 3) + *param_1) = 0;
  *(unsigned int *)(iVar3 + *param_1 + 0x1c) = 0;
  *(unsigned int *)(iVar2 + *param_1 + 0x20) = 0;
  *(unsigned int *)(iVar2 + *param_1 + 0x24) = 0;
  return;
}

