extern int memcpy();


unsigned __int64 fn_82C18288(int *param_1,__int64 param_2,unsigned short *param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  int iVar14;
  int iVar15;
  unsigned __int64 uVar16;
  int iVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  __int64 lVar20;
  __int64 lVar21;
  unsigned __int64 uVar22;
  __int64 lVar23;
  __int64 lVar24;
  unsigned __int64 uVar25;
  
  uVar2 = param_1[0x53];
  uVar22 = (unsigned __int64)uVar2;
  uVar10 = param_1[0x55];
  iVar3 = *param_1;
  uVar4 = param_1[0x5a];
  uVar25 = (unsigned __int64)uVar4;
  uVar5 = param_1[0x52];
  uVar16 = (unsigned __int64)uVar5;
  iVar14 = (int)((__int64)(int)(unsigned int)*param_3 * (__int64)(int)uVar2);
  if (iVar14 < (int)uVar10) {
    param_1[0x55] = uVar10 - iVar14;
    if ((*param_3 != 0) && (lVar23 = 0, 0 < (int)uVar4)) {
      iVar14 = 0;
      do {
        uVar7 = (**(int (***)())(iVar3 + 0x20c))
                          (param_2,*(unsigned int *)(iVar3 + 0x58),*(unsigned short *)(iVar3 + 0x6e),
                           (__int64)(int)(*param_3 - 1) * (__int64)(int)uVar4 + lVar23);
        lVar23 = lVar23 + 1;
        *(unsigned int *)(param_1[0x56] + iVar14) = uVar7;
        iVar14 = iVar14 + 4;
      } while ((int)lVar23 < (int)uVar4);
    }
    *param_3 = 0;
    return 0;
  }
  uVar12 = (__int64)(int)(unsigned int)*param_3 * (__int64)(int)uVar2 - (unsigned __int64)uVar10;
  uVar6 = *(unsigned int *)(iVar3 + 0x58);
  uVar1 = (int)param_4 / (int)uVar6;
  iVar14 = (int)uVar12 / (int)uVar5;
  trapWord(6,(unsigned __int64)uVar6,0);
  iVar15 = iVar14 + 1;
  trapWord(6,uVar16,0);
  trapWord(6,uVar25,0);
  trapWord(5,uVar16 & ~(((uVar12 & 0x7fffffff) << 1 | (uVar12 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,(unsigned __int64)uVar6 &
             ~((((unsigned __int64)param_4 & 0x7fffffff) << 1 | (unsigned __int64)(param_4 >> 0x1f)) - 1),0xffff);
  trapWord(5,uVar25 & ~((((unsigned __int64)uVar1 & 0x7fffffff) << 1 | (unsigned __int64)(uVar1 >> 0x1f)) - 1),
           0xffff);
  if ((int)uVar1 / (int)uVar4 < iVar15) {
    return 0xffffffff80070057;
  }
  uVar12 = (__int64)iVar14 * (__int64)(int)uVar5 + (unsigned __int64)uVar10;
  lVar23 = 0;
  iVar8 = (int)uVar12 / (int)uVar2;
  trapWord(6,uVar22,0);
  trapWord(5,uVar22 & ~(((uVar12 & 0x7fffffff) << 1 | (uVar12 & 0xffffffff) >> 0x1f) - 1),0xffff);
  if (0 < (int)uVar4) {
    iVar9 = 0;
    do {
      uVar7 = (**(int (***)())(iVar3 + 0x20c))
                        (param_2,*(unsigned int *)(iVar3 + 0x58),*(unsigned short *)(iVar3 + 0x6e),
                         (__int64)(int)(*param_3 - 1) * (__int64)(int)uVar4 + lVar23);
      lVar23 = lVar23 + 1;
      *(unsigned int *)(iVar9 + param_1[0x57]) = uVar7;
      iVar9 = iVar9 + 4;
    } while ((int)lVar23 < (int)uVar4);
  }
  iVar9 = *(int *)(iVar3 + 0x58);
  uVar19 = (__int64)(iVar9 * iVar8) * (__int64)(int)uVar4 + param_2;
  iVar17 = iVar8;
  if (iVar8 <= iVar14) {
    iVar17 = iVar14;
  }
  lVar23 = (__int64)(iVar9 * iVar17) * (__int64)(int)uVar4 + param_2;
  iVar17 = 0;
  if (iVar14 < iVar8) {
    iVar17 = iVar8 - iVar14;
  }
  uVar18 = (__int64)iVar9 * (__int64)(int)uVar4 + param_2;
  lVar20 = uVar12 - (__int64)iVar8 * (__int64)(int)uVar2;
  if ((uVar18 & 0xffffffff) <= (uVar19 & 0xffffffff)) {
    do {
      lVar24 = 0;
      if (0 < (int)uVar4) {
        iVar14 = (int)lVar20;
        lVar21 = -uVar25;
        do {
          if (iVar14 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = (**(int (***)())(iVar3 + 0x20c))
                              (uVar19,*(unsigned int *)(iVar3 + 0x58),*(unsigned short *)(iVar3 + 0x6e),
                               lVar24);
          }
          iVar9 = (**(int (***)())(iVar3 + 0x20c))
                            (uVar19,*(unsigned int *)(iVar3 + 0x58),*(unsigned short *)(iVar3 + 0x6e),
                             lVar21);
          uVar13 = (__int64)iVar9 * (__int64)(int)(uVar2 - iVar14) +
                   (__int64)iVar8 * (__int64)iVar14;
          uVar11 = uVar22 & ~(((uVar13 & 0x7fffffff) << 1 | (uVar13 & 0xffffffff) >> 0x1f) - 1);
          trapWord(6,uVar22,0);
          trapWord(5,uVar11,0xffff);
          (**(int (***)())(iVar3 + 0x208))((int)uVar13 / (int)uVar2,lVar23,iVar3,lVar24,uVar11);
          lVar24 = lVar24 + 1;
          lVar21 = lVar21 + 1;
        } while ((int)lVar24 < (int)uVar4);
      }
      lVar20 = lVar20 - uVar16;
      if (lVar20 < 1) {
        trapWord(6,uVar22,0);
        uVar11 = (lVar20 - uVar22) + 1;
        iVar14 = (int)uVar11 / (int)uVar2;
        trapWord(5,uVar22 & ~(((uVar11 & 0x7fffffff) << 1 | (uVar11 & 0xffffffff) >> 0x1f) - 1),
                 0xffff);
        lVar20 = lVar20 - (__int64)iVar14 * (__int64)(int)uVar2;
        uVar19 = (__int64)(*(int *)(iVar3 + 0x58) * iVar14) * (__int64)(int)uVar4 + uVar19;
      }
      lVar23 = lVar23 - (__int64)*(int *)(iVar3 + 0x58) * (__int64)(int)uVar4;
    } while ((uVar18 & 0xffffffff) <= (uVar19 & 0xffffffff));
  }
  if ((0 < param_1[0x55]) && (param_1[0x55] < (int)uVar2)) {
    lVar24 = 0;
    if ((int)uVar4 < 1) goto LAB_82c1862c;
    iVar14 = 0;
    do {
      iVar8 = (**(int (***)())(iVar3 + 0x20c))
                        (param_2,*(unsigned int *)(iVar3 + 0x58),*(unsigned short *)(iVar3 + 0x6e),lVar24)
      ;
      uVar10 = *(int *)(param_1[0x56] + iVar14) * (uVar2 - (int)lVar20) + iVar8 * (int)lVar20;
      trapWord(6,uVar22,0);
      trapWord(5,uVar22 & ~((((unsigned __int64)uVar10 & 0x7fffffff) << 1 | (unsigned __int64)(uVar10 >> 0x1f)) -
                           1),0xffff);
      (**(int (***)())(iVar3 + 0x208))((int)uVar10 / (int)uVar2,lVar23,iVar3,lVar24);
      lVar24 = lVar24 + 1;
      iVar14 = iVar14 + 4;
    } while ((int)lVar24 < (int)uVar4);
  }
  if (0 < (int)uVar4) {
    iVar14 = 0;
    do {
      *(unsigned int *)(param_1[0x56] + iVar14) = *(unsigned int *)(iVar14 + param_1[0x57]);
      iVar14 = iVar14 + 4;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
LAB_82c1862c:
  param_1[0x55] = ((int)uVar12 - *param_3 * uVar2) + uVar5;
  if (iVar17 != 0) {
    memcpy(param_2,(__int64)(*(int *)(iVar3 + 0x58) * iVar17) * (__int64)(int)uVar4 +
                         param_2,(__int64)(iVar15 * *(int *)(iVar3 + 0x58)) * (__int64)(int)uVar4)
    ;
  }
  *param_3 = (unsigned short)iVar15;
  return 0;
}

