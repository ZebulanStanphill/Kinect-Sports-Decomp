void fn_8278FA90(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = *(int *)(param_1 + 0x24) + 1U & 7;
  iVar1 = uVar2 * 4;
  *(unsigned int *)(param_1 + 0x24) = uVar2;
  uVar3 = (unsigned __int64)*(unsigned int *)(iVar1 + param_1) * 0x2ab5245e + (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
  iVar6 = (int)(uVar3 >> 0x20);
  *(int *)(param_1 + 0x20) = iVar6;
  uVar4 = (uVar3 & 0xffffffff) + (uVar3 >> 0x20);
  iVar5 = (int)uVar4;
  if ((uVar4 & 0xffffffff) < uVar3 >> 0x20) {
    iVar5 = iVar5 + 1;
    *(int *)(param_1 + 0x20) = iVar6 + 1;
  }
  *(int *)(iVar1 + param_1) = -2 - iVar5;
  return;
}

