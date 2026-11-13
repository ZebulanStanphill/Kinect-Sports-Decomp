extern int fn_82CD52D8();
extern int iRam83177568;


void fn_82CD5570(int param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5,
                  __int64 param_6,int param_7)

{
  unsigned char bVar1;
  int iVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned char *puVar6;
  unsigned char *puVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  unsigned int uVar11;
  unsigned char *pbVar12;
  int iVar13;
  unsigned int uVar14;
  unsigned char *pbVar15;
  __int64 lVar16;
  int iVar17;
  int iVar18;
  unsigned char *pbVar19;
  unsigned int uVar20;
  int iVar21;
  __int64 lVar22;
  int iVar23;
  unsigned int uVar24;
  unsigned __int64 uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  
  iVar17 = (int)param_5;
  if (iRam83177568 == 0) {
    iVar2 = *(int *)(param_7 + 0x38fc);
    uVar20 = (int)param_6 - iVar17;
    uVar26 = *(unsigned int *)(param_7 + 0x390c);
    uVar24 = iVar2 * iVar17;
    uVar27 = *(unsigned int *)(param_7 + 0x38b4);
    uVar14 = *(int *)(param_7 + 0x3910) * iVar2;
    uVar27 = ((int)uVar27 >> 3) + (unsigned int)((int)uVar27 < 0 && (uVar27 & 7) != 0);
    uVar9 = uVar27 * 4;
    uVar11 = iVar2 + (uVar9 & 0x7fffffff) * -2;
    lVar16 = (__int64)((int)uVar20 >> 1) + (unsigned __int64)((int)uVar20 < 0 && (uVar20 & 1) != 0);
    iVar18 = ((int)uVar26 >> 1) + (unsigned int)((int)uVar26 < 0 && (uVar26 & 1) != 0) +
             ((int)uVar14 >> 2) + (unsigned int)((int)uVar14 < 0 && (uVar14 & 3) != 0) +
             ((int)uVar24 >> 2) + (unsigned int)((int)uVar24 < 0 && (uVar24 & 3) != 0);
    pbVar19 = (unsigned char *)(uVar26 + uVar14 + uVar24 + param_2);
    param_1 = *(int *)(param_7 + 0x389c) * iVar17 + *(int *)(param_7 + 0x38a4) + param_1;
    param_3 = iVar18 + param_3;
    iVar18 = iVar18 + param_4;
    iVar17 = ((int)uVar11 >> 1) + (unsigned int)((int)uVar11 < 0 && (uVar11 & 1) != 0);
    if (0 < lVar16) {
      pbVar4 = (unsigned char *)(iVar18 + -1);
      pbVar5 = (unsigned char *)(param_3 + -1);
      lVar22 = lVar16;
      iVar21 = param_1;
      pbVar15 = pbVar19;
      do {
        if (0 < (int)uVar9) {
          pbVar12 = pbVar15 + iVar2 + -1;
          puVar8 = (unsigned int *)(*(int *)(param_7 + 0x389c) + iVar21 + -4);
          puVar10 = (unsigned int *)(iVar21 + -4);
          uVar26 = uVar9;
          do {
            pbVar4 = pbVar4 + 1;
            pbVar3 = pbVar15 + 1;
            pbVar5 = pbVar5 + 1;
            bVar1 = *pbVar15;
            uVar24 = ((unsigned int)*pbVar4 << 0x10 | (unsigned int)*pbVar5) << 8;
            pbVar15 = pbVar15 + 2;
            puVar10 = puVar10 + 1;
            *puVar10 = (unsigned int)*pbVar3 << 0x10 | (unsigned int)bVar1 | uVar24;
            pbVar3 = pbVar12 + 1;
            pbVar12 = pbVar12 + 2;
            puVar8 = puVar8 + 1;
            *puVar8 = (unsigned int)*pbVar12 << 0x10 | (unsigned int)*pbVar3 | uVar24;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
        }
        lVar22 = lVar22 + -1;
        pbVar5 = pbVar5 + iVar17;
        pbVar4 = pbVar4 + iVar17;
        iVar21 = *(int *)(param_7 + 0x38a0) + iVar21;
        pbVar15 = pbVar15 + uVar11 + iVar2;
      } while (lVar22 != 0);
    }
    uVar26 = *(unsigned int *)(param_7 + 0x38b4);
    param_1 = uVar27 * 0x10 + param_1;
    uVar24 = ((int)uVar26 >> 1) + (unsigned int)((int)uVar26 < 0 && (uVar26 & 1) != 0) +
             (uVar27 & 0x3fffffff) * -4;
    pbVar19 = pbVar19 + uVar27 * 8;
    iVar23 = 0;
    uVar26 = *(int *)(param_7 + 0x38fc) + (uVar24 & 0x7fffffff) * -2;
    iVar17 = (int)lVar16;
    iVar21 = ((int)uVar26 >> 1) + (unsigned int)((int)uVar26 < 0 && (uVar26 & 1) != 0);
    if (0 < iVar17) {
      pbVar4 = (unsigned char *)(uVar9 + iVar18 + -1);
      pbVar5 = (unsigned char *)(uVar9 + param_3 + -1);
      do {
        if (0 < (int)uVar24) {
          pbVar15 = pbVar19 + iVar2 + -1;
          puVar8 = (unsigned int *)(*(int *)(param_7 + 0x389c) + param_1 + -4);
          puVar10 = (unsigned int *)(param_1 + -4);
          uVar27 = uVar24;
          do {
            pbVar4 = pbVar4 + 1;
            pbVar12 = pbVar19 + 1;
            pbVar5 = pbVar5 + 1;
            bVar1 = *pbVar19;
            uVar9 = ((unsigned int)*pbVar4 << 0x10 | (unsigned int)*pbVar5) << 8;
            pbVar19 = pbVar19 + 2;
            puVar10 = puVar10 + 1;
            *puVar10 = (unsigned int)*pbVar12 << 0x10 | (unsigned int)bVar1 | uVar9;
            pbVar12 = pbVar15 + 1;
            pbVar15 = pbVar15 + 2;
            puVar8 = puVar8 + 1;
            *puVar8 = (unsigned int)*pbVar15 << 0x10 | (unsigned int)*pbVar12 | uVar9;
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
        }
        pbVar5 = pbVar5 + iVar21;
        pbVar4 = pbVar4 + iVar21;
        if (iVar23 < iVar17 + -1) {
          param_1 = *(int *)(param_7 + 0x38a0) + param_1;
        }
        iVar23 = iVar23 + 1;
        pbVar19 = pbVar19 + iVar2 + uVar26;
      } while (iVar23 < iVar17);
    }
  }
  else {
    iVar2 = *(int *)(param_7 + 0x389c);
    param_6 = param_6 - param_5;
    iVar18 = *(int *)(param_7 + 0x38fc);
    iVar21 = *(int *)(param_7 + 0x38d0);
    iVar23 = *(int *)(param_7 + 0x38d4);
    uVar26 = *(unsigned int *)(param_7 + 0x3890);
    iVar13 = ((iVar17 >> 1) + (unsigned int)(iVar17 < 0 && (param_5 & 1) != 0)) * *(int *)(param_7 + 0x3934)
    ;
    param_1 = iVar2 * iVar17 + *(int *)(param_7 + 0x38a4) + param_1;
    param_2 = iVar18 * iVar17 + *(int *)(param_7 + 0x38cc) + param_2;
    iVar17 = param_1;
    if (0 < param_6) {
      do {
        if (0 < (int)uVar26) {
          puVar6 = (unsigned char *)(iVar17 + -2);
          puVar7 = (unsigned char *)(param_2 + -1);
          uVar25 = (unsigned __int64)uVar26;
          do {
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 2;
            *puVar6 = *puVar7;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
        param_6 = param_6 + -1;
        param_2 = param_2 + iVar18;
        iVar17 = iVar17 + iVar2;
      } while (param_6 != 0);
    }
    fn_82CD52D8(iVar21 + iVar13 + param_3,iVar23 + iVar13 + param_4,param_1 + 1,param_1 + 3,
                  *(unsigned int *)(param_7 + 0x3934),*(unsigned int *)(param_7 + 0x389c),1,4);
  }
  return;
}

