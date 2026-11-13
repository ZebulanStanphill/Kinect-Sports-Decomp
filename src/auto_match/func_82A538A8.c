extern int fn_82F68CC0();


unsigned __int64 fn_82A538A8(int *param_1,__int64 param_2,unsigned short *param_3,int param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  int iVar14;
  __int64 lVar13;
  int iVar15;
  __int64 lVar16;
  __int64 lVar17;
  __int64 lVar18;
  unsigned __int64 uVar19;
  
  iVar14 = param_1[0x53];
  uVar1 = param_1[0x55];
  iVar15 = (unsigned int)*param_3 * iVar14;
  iVar2 = *param_1;
  uVar3 = param_1[0x5a];
  uVar19 = (unsigned __int64)uVar3;
  uVar4 = param_1[0x52];
  if (iVar15 < (int)uVar1) {
    param_1[0x55] = uVar1 - iVar15;
    if ((*param_3 != 0) && (lVar16 = 0, 0 < (int)uVar3)) {
      iVar14 = 0;
      do {
        uVar5 = (**(int (***)())(iVar2 + 0x20c))
                          (param_2,*(unsigned int *)(iVar2 + 0x58),*(unsigned short *)(iVar2 + 0x6e),
                           (__int64)(int)(*param_3 - 1) * (__int64)(int)uVar3 + lVar16);
        lVar16 = lVar16 + 1;
        *(unsigned int *)(param_1[0x56] + iVar14) = uVar5;
        iVar14 = iVar14 + 4;
      } while ((int)lVar16 < (int)uVar3);
    }
    *param_3 = 0;
    return 0;
  }
  iVar15 = (int)(iVar15 - uVar1) / (int)uVar4;
  iVar8 = iVar15 + 1;
  if ((param_4 / *(int *)(iVar2 + 0x58)) / (int)uVar3 < iVar8) {
    return 0xffffffff80070057;
  }
  lVar16 = (__int64)iVar15 * (__int64)(int)uVar4 + (unsigned __int64)uVar1;
  lVar17 = 0;
  iVar9 = (int)lVar16;
  iVar6 = iVar9 / iVar14;
  if (0 < (int)uVar3) {
    iVar7 = 0;
    do {
      uVar5 = (**(int (***)())(iVar2 + 0x20c))
                        (param_2,*(unsigned int *)(iVar2 + 0x58),*(unsigned short *)(iVar2 + 0x6e),
                         (__int64)(int)(*param_3 - 1) * (__int64)(int)uVar3 + lVar17);
      lVar17 = lVar17 + 1;
      *(unsigned int *)(iVar7 + param_1[0x57]) = uVar5;
      iVar7 = iVar7 + 4;
    } while ((int)lVar17 < (int)uVar3);
  }
  iVar7 = *(int *)(iVar2 + 0x58);
  uVar12 = (__int64)(iVar7 * iVar6) * (__int64)(int)uVar3 + param_2;
  iVar10 = iVar6;
  if (iVar6 <= iVar15) {
    iVar10 = iVar15;
  }
  lVar17 = (__int64)(iVar7 * iVar10) * (__int64)(int)uVar3 + param_2;
  iVar10 = 0;
  if (iVar15 < iVar6) {
    iVar10 = iVar6 - iVar15;
  }
  uVar11 = (__int64)iVar7 * (__int64)(int)uVar3 + param_2;
  lVar16 = lVar16 - (__int64)iVar6 * (__int64)iVar14;
  if ((uVar11 & 0xffffffff) <= (uVar12 & 0xffffffff)) {
    do {
      lVar18 = 0;
      if (0 < (int)uVar3) {
        iVar15 = (int)lVar16;
        lVar13 = -uVar19;
        do {
          if (iVar15 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (**(int (***)())(iVar2 + 0x20c))
                              (uVar12,*(unsigned int *)(iVar2 + 0x58),*(unsigned short *)(iVar2 + 0x6e),
                               lVar18);
          }
          iVar7 = (**(int (***)())(iVar2 + 0x20c))
                            (uVar12,*(unsigned int *)(iVar2 + 0x58),*(unsigned short *)(iVar2 + 0x6e),
                             lVar13);
          (**(int (***)())(iVar2 + 0x208))
                    ((iVar7 * (iVar14 - iVar15) + iVar6 * iVar15) / iVar14,lVar17,iVar2,lVar18);
          lVar18 = lVar18 + 1;
          lVar13 = lVar13 + 1;
        } while ((int)lVar18 < (int)uVar3);
      }
      lVar16 = lVar16 - (unsigned __int64)uVar4;
      if (lVar16 < 1) {
        iVar15 = (((int)lVar16 - iVar14) + 1) / iVar14;
        lVar16 = lVar16 - (__int64)iVar15 * (__int64)iVar14;
        uVar12 = (__int64)(*(int *)(iVar2 + 0x58) * iVar15) * (__int64)(int)uVar3 + uVar12;
      }
      lVar17 = lVar17 - (__int64)*(int *)(iVar2 + 0x58) * (__int64)(int)uVar3;
    } while ((uVar11 & 0xffffffff) <= (uVar12 & 0xffffffff));
  }
  if ((0 < param_1[0x55]) && (param_1[0x55] < iVar14)) {
    lVar18 = 0;
    if ((int)uVar3 < 1) goto LAB_82a53bc0;
    iVar15 = 0;
    do {
      iVar6 = (**(int (***)())(iVar2 + 0x20c))
                        (param_2,*(unsigned int *)(iVar2 + 0x58),*(unsigned short *)(iVar2 + 0x6e),lVar18)
      ;
      (**(int (***)())(iVar2 + 0x208))
                ((*(int *)(param_1[0x56] + iVar15) * (iVar14 - (int)lVar16) + iVar6 * (int)lVar16) /
                 iVar14,lVar17,iVar2,lVar18);
      lVar18 = lVar18 + 1;
      iVar15 = iVar15 + 4;
    } while ((int)lVar18 < (int)uVar3);
  }
  if (0 < (int)uVar3) {
    iVar15 = 0;
    do {
      *(unsigned int *)(param_1[0x56] + iVar15) = *(unsigned int *)(iVar15 + param_1[0x57]);
      iVar15 = iVar15 + 4;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
LAB_82a53bc0:
  param_1[0x55] = (iVar9 - (unsigned int)*param_3 * iVar14) + uVar4;
  if (iVar10 != 0) {
    fn_82F68CC0(param_2,(__int64)(*(int *)(iVar2 + 0x58) * iVar10) * (__int64)(int)uVar3 +
                         param_2,(__int64)(iVar8 * *(int *)(iVar2 + 0x58)) * (__int64)(int)uVar3);
  }
  *param_3 = (unsigned short)iVar8;
  return 0;
}

