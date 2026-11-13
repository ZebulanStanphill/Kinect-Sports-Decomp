void fn_82635C30(int *param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = *param_1;
  param_1[iVar1 * 0x9b4 + 0x9b3] = 0;
  iVar4 = iVar1 * 0x26d0 + 0x2528;
  *(unsigned __int64 *)(param_1 + iVar1 * 0x9b4 + 0x944) =
       1L << (0x3f - ((param_2 & 0xffffffff) >> 2) & 0x7f) |
       *(unsigned __int64 *)(param_1 + iVar1 * 0x9b4 + 0x944);
  param_2 = ((unsigned __int64)*(unsigned int *)(param_1[iVar1 * 0x9b4 + 0x9b5] + 0x4db4) & 4) * 0x40 + param_2;
  uVar3 = (unsigned int)param_2;
  uVar2 = (unsigned int)((param_2 & 0xffffffff) >> 3) & 0x1ffffffc;
  piVar5 = param_1 + iVar1 * 0x9b4 + (uVar3 + 0x30) * 4 + 0x5c;
  *piVar5 = *param_3;
  piVar5[1] = param_3[1];
  piVar5[2] = param_3[2];
  piVar5[3] = param_3[3];
  *(unsigned int *)((int)param_1 + uVar2 + iVar4) =
       1 << (uVar3 & 0x1f) | *(unsigned int *)((int)param_1 + uVar2 + iVar4);
  return;
}

