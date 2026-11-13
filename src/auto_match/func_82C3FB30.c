unsigned __int64 fn_82C3FB30(unsigned __int64 param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  int iVar12;
  __int64 lVar11;
  short *psVar15;
  unsigned __int64 uVar13;
  int iVar16;
  __int64 lVar14;
  
  uVar4 = *(unsigned int *)(param_2 + 0x34);
  uVar6 = (unsigned __int64)uVar4;
  psVar15 = (short *)(*(short *)(param_2 + 0x72) * 2 + *(int *)(*(int *)(param_2 + 0x1a8) + 8));
  sVar1 = *psVar15;
  sVar2 = psVar15[-1];
  uVar10 = (unsigned __int64)sVar1;
  uVar13 = (unsigned __int64)sVar2;
  iVar12 = (int)sVar1;
  iVar16 = (int)sVar2;
  if (iVar12 < iVar16) {
    sVar3 = *(short *)(param_2 + 0x76);
    trapWord(6,uVar10,0);
    iVar12 = 0;
    trapWord(5,uVar10 & ~(((uVar13 & 0x7fffffff) << 1 | (uVar13 & 0xffffffff) >> 0x1f) - 1),0xffff);
    if (0 < sVar3) {
      uVar10 = (unsigned __int64)(unsigned int)((int)sVar2 / (int)sVar1) & 0x3fffffff;
      lVar9 = uVar6 - 4;
      lVar11 = uVar6 + uVar10 * -4;
      do {
        lVar11 = lVar11 + uVar10 * 4;
        iVar12 = iVar12 + 1;
        lVar9 = lVar9 + 4;
        *(unsigned int *)lVar9 = *(unsigned int *)lVar11;
      } while (iVar12 < *(short *)(param_2 + 0x76));
      return (__int64)sVar3;
    }
    return (__int64)sVar3;
  }
  if (iVar16 < iVar12) {
    sVar1 = *(short *)(param_2 + 0x76);
    iVar12 = iVar12 / iVar16;
    uVar7 = (unsigned __int64)iVar12;
    trapWord(6,uVar13,0);
    uVar5 = (((__int64)sVar1 & 0x7fffffffU) << 1 | ((__int64)sVar1 & 0xffffffffU) >> 0x1f) - 1;
    trapWord(6,uVar7,0);
    uVar8 = (__int64)((int)sVar1 / iVar12) - 1;
    trapWord(5,uVar13 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1),0xffff);
    trapWord(5,uVar7 & ~uVar5,0xffff);
    if (-1 < (__int64)uVar8) {
      lVar9 = (__int64)(int)uVar8 * (__int64)iVar12;
      lVar11 = (uVar8 & 0x3fffffff) * 4 + uVar6;
      do {
        lVar14 = 0;
        uVar6 = uVar7;
        if (0 < iVar12) {
          do {
            uVar10 = lVar9 + lVar14;
            uVar5 = (unsigned __int64)*(unsigned int *)lVar11;
            lVar14 = lVar14 + 1;
            *(unsigned int *)((int)((uVar10 & 0xffffffff) << 2) + uVar4) = *(unsigned int *)lVar11;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        uVar8 = uVar8 - 1;
        lVar11 = lVar11 + -4;
        lVar9 = lVar9 - uVar7;
      } while (-1 < (__int64)uVar8);
      return uVar5;
    }
    return uVar5;
  }
  return param_1;
}

