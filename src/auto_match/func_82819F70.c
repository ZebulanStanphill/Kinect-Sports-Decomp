void fn_82819F70(int param_1,short param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x7c);
  iVar4 = param_2 * 0x40 + iVar2;
  sVar1 = *(short *)(*(short *)(param_1 + 0x82) * 0x40 + iVar2 + 0x34);
  iVar3 = *(int *)(iVar4 + 0x20);
  *(short *)(param_1 + 0x82) = *(short *)(param_1 + 0x82) + 1;
  param_3 = param_3 - iVar3;
  iVar3 = sVar1 * 0x40 + iVar2;
  *(unsigned short *)(iVar3 + 0x2e) = *(unsigned short *)(iVar4 + 0x2e);
  *(short *)(iVar3 + 0x2c) = param_2;
  if (*(short *)(iVar4 + 0x2e) != -1) {
    *(short *)(*(short *)(iVar4 + 0x2e) * 0x40 + iVar2 + 0x2c) = sVar1;
  }
  *(short *)(iVar4 + 0x2e) = sVar1;
  *(int *)(iVar3 + 0x20) = *(int *)(iVar4 + 0x20) + param_3;
  *(int *)(iVar3 + 0x24) = *(int *)(iVar4 + 0x24) - param_3;
  *(int *)(iVar4 + 0x24) = param_3;
  return;
}

