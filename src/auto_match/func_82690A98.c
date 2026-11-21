void fn_82690A98(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  
  uVar5 = (unsigned __int64)*(unsigned short *)(param_2 + 3);
  if (0x20 < uVar5) {
    uVar5 = (unsigned __int64)param_2[4];
  }
  iVar3 = (int)uVar5;
  param_1[99] = param_1[99] - iVar3;
  if (uVar5 < 0x21) {
    iVar2 = (int)((uVar5 & 0x3fffffff) << 2);
    puVar1 = *(unsigned int **)(iVar2 + (int)param_1);
    if (param_2 == puVar1) {
      if (puVar1 == (unsigned int *)puVar1[1]) {
        *(unsigned int *)(iVar2 + (int)param_1) = 0;
        *param_1 = *param_1 & ~(1 << (iVar3 - 1U & 0x3f));
        return;
      }
      *(unsigned int **)(iVar2 + (int)param_1) = (unsigned int *)puVar1[1];
    }
  }
  else {
    if (0x40 < uVar5) {
      fn_826905F8(param_1 + 0x42);
      return;
    }
    param_1 = param_1 + 0x21;
    iVar2 = (int)((uVar5 - 0x20 & 0x3fffffff) << 2);
    puVar1 = *(unsigned int **)(iVar2 + (int)param_1);
    if (param_2 != puVar1) {
      *(unsigned int *)(*param_2 + 4) = param_2[1];
      *(unsigned int *)param_2[1] = *param_2;
      return;
    }
    if (puVar1 == (unsigned int *)puVar1[1]) {
      *(unsigned int *)(iVar2 + (int)param_1) = 0;
      uVar4 = *param_1 & ~(1 << (iVar3 - 0x21U & 0x3f));
      goto LAB_82690b8c;
    }
    *(unsigned int **)(iVar2 + (int)param_1) = (unsigned int *)puVar1[1];
  }
  *(unsigned int *)(*param_2 + 4) = param_2[1];
  param_1 = (unsigned int *)param_2[1];
  uVar4 = *param_2;
LAB_82690b8c:
  *param_1 = uVar4;
  return;
}
