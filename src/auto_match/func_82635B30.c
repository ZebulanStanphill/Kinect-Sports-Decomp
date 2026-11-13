void fn_82635B30(int *param_1,unsigned int param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  param_1[iVar1 * 0x9b4 + 0x9b3] = 0;
  if (param_3 != 0) {
    iVar3 = iVar1 * 0x26d0 + 0x2688;
    uVar2 = param_2 >> 3 & 0x1ffffffc;
    *(unsigned int *)((int)param_1 + uVar2 + iVar3) =
         1 << (param_2 & 0x1f) | *(unsigned int *)((int)param_1 + uVar2 + iVar3);
  }
  iVar3 = iVar1 * 0x26d0 + 0x26a8;
  uVar2 = param_2 >> 3 & 0x1ffffffc;
  *(unsigned int *)((int)param_1 + uVar2 + iVar3) =
       1 << (param_2 & 0x1f) | *(unsigned int *)((int)param_1 + uVar2 + iVar3);
  *(unsigned __int64 *)(param_1 + iVar1 * 0x9b4 + 0x946) =
       1L << (0x1f - (unsigned __int64)(param_2 >> 5) & 0x7f) |
       *(unsigned __int64 *)(param_1 + iVar1 * 0x9b4 + 0x946);
  return;
}

