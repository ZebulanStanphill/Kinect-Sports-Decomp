unsigned __int64 fn_82F1ACE8(int param_1,unsigned __int64 param_2,int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  short *psVar12;
  __int64 lVar13;
  
  iVar6 = (int)param_2;
  if ((int)param_4 < 4) {
    uVar1 = *(unsigned int *)(param_1 + 0x2d0);
    iVar2 = *(int *)(param_1 + 0x9f0);
    uVar7 = (unsigned __int64)param_4 & 1;
    lVar9 = (param_2 & 0x7fffffff) * 2;
    lVar13 = (__int64)(int)((param_4 & 2) + param_3 * 4) * (__int64)(int)uVar1 + uVar7 + lVar9;
    iVar5 = (int)lVar13 * 2;
    iVar3 = iVar5 + iVar2;
    if (*(short *)(iVar5 + iVar2) == 0x4000) {
      uVar4 = (unsigned __int64)uVar1 & 0x7fffffff;
      if ((uVar7 + lVar9 == 0) || (lVar9 = 1, *(short *)(iVar3 + -2) != 0x4000)) {
        lVar9 = 0;
      }
      uVar10 = lVar9 << 1 | 1;
      if (((param_3 != 0) && (*(int *)(*(int *)(param_1 + 0x8d8) + param_3 * 4) == 0)) ||
         (1 < (int)param_4)) {
        uVar10 = (unsigned __int64)
                 LZCOUNT(*(unsigned short *)((int)((lVar13 + uVar4 * -2 & 0xffffffff) << 1) + iVar2) -
                         0x4000) >> 3 & 4 | uVar10;
      }
      if (((int)uVar10 != 7) ||
         (lVar9 = 1,
         *(short *)((int)(((lVar13 + uVar4 * -2) - 1 & 0xffffffff) << 1) + iVar2) != 0x4000)) {
        lVar9 = 0;
      }
      if ((((int)(uVar1 - 1) <= iVar6) && ((int)uVar7 != 0)) ||
         (lVar8 = 1, *(short *)(iVar3 + 2) != 0x4000)) {
        lVar8 = 0;
      }
      if (((*(int *)(param_1 + 0x2d4) + -1 <= param_3) && ((param_4 & 2) != 0)) ||
         (lVar11 = 1, *(short *)((int)((uVar4 * 2 + lVar13 & 0xffffffff) << 1) + iVar2) != 0x4000))
      {
        lVar11 = 0;
      }
      return lVar11 << 5 | lVar8 << 4 | lVar9 << 3 | uVar10;
    }
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x2d0);
    iVar2 = *(int *)(param_1 + 0x9f8);
    lVar9 = (__int64)(int)uVar1 * (__int64)param_3 + param_2;
    iVar5 = (int)lVar9 * 2;
    iVar3 = iVar5 + iVar2;
    if (*(short *)(iVar5 + iVar2) == 0x4000) {
      uVar7 = 1;
      if ((iVar6 != 0) && (*(short *)(iVar3 + -2) == 0x4000)) {
        uVar7 = 3;
      }
      if ((param_3 != 0) && (*(int *)(*(int *)(param_1 + 0x8d8) + param_3 * 4) == 0)) {
        psVar12 = (short *)((int)((lVar9 - (unsigned __int64)uVar1 & 0xffffffff) << 1) + iVar2);
        if (*psVar12 == 0x4000) {
          uVar7 = uVar7 | 4;
        }
        if ((iVar6 != 0) && (psVar12[-1] == 0x4000)) {
          uVar7 = uVar7 | 8;
        }
      }
      if (((int)(uVar1 - 1) <= iVar6) || (lVar13 = 1, *(short *)(iVar3 + 2) != 0x4000)) {
        lVar13 = 0;
      }
      if ((*(int *)(param_1 + 0x2d4) + -1 <= param_3) ||
         (lVar8 = 1,
         *(short *)((int)(((unsigned __int64)uVar1 + lVar9 & 0xffffffff) << 1) + iVar2) != 0x4000)) {
        lVar8 = 0;
      }
      return lVar8 << 5 | lVar13 << 4 | uVar7;
    }
  }
  return 0;
}

