void fn_82CC6320(int param_1,__int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  __int64 lVar12;
  unsigned char *puVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  unsigned __int64 uVar17;
  unsigned int uVar18;
  int iVar19;
  __int64 lVar20;
  
  iVar4 = (int)param_2;
  uVar11 = *(unsigned int *)(param_1 + 0x20);
  uVar8 = *(unsigned int *)(*(int *)(param_1 + 0x30) + 4);
  lVar2 = ((unsigned __int64)uVar8 & 0x7fffffff) * 2;
  uVar18 = (int)(((unsigned __int64)uVar8 & 0x1ffffff) << 7) / (int)uVar11;
  uVar17 = (lVar2 - 7U & 0x3ffffff) << 6;
  uVar15 = ((unsigned __int64)uVar18 & 0x7fffffff) << 1;
  trapWord(6,(unsigned __int64)uVar11,0);
  iVar3 = (int)lVar2;
  trapWord(6,uVar15,0);
  lVar16 = (__int64)((int)uVar17 / (int)uVar15) + -1;
  trapWord(5,uVar15 & ~(((uVar17 & 0x7fffffff) << 1 | (lVar2 - 7U & 0x3ffffff) >> 0x19) - 1),0xffff)
  ;
  trapWord(5,(unsigned __int64)uVar11 &
             ~((((unsigned __int64)uVar8 & 0xffffff) << 8 | ((unsigned __int64)uVar8 & 0x1ffffff) >> 0x18) - 1),
           0xffff);
  lVar14 = (__int64)((int)uVar11 >> 1) + (unsigned __int64)((int)uVar11 < 0 && (uVar11 & 1) != 0);
  uVar18 = 0xffffffffU - ((int)uVar18 >> 0x1f) & uVar18;
  lVar12 = (__int64)iVar3 * (__int64)iVar4 + (unsigned __int64)*(unsigned int *)(param_1 + 0x34);
  if (iVar4 < (int)param_3) {
    param_3 = param_3 - param_2;
    puVar13 = (unsigned char *)(uVar11 * 2 * iVar4 + *(int *)(param_1 + 0x40) + -1);
    do {
      uVar11 = 0;
      iVar4 = (int)lVar12;
      if (0 < (int)lVar16) {
        lVar20 = lVar16;
        do {
          uVar8 = (int)uVar11 >> 6 & 0xfffffffe;
          uVar10 = uVar11 + uVar18;
          uVar9 = uVar10 & 0xff;
          puVar13[1] = (char)((int)((unsigned int)*(unsigned char *)(uVar8 + iVar4) * (0x80 - (uVar11 & 0x7f)) +
                                   (unsigned int)*(unsigned char *)(iVar4 + 2 + uVar8) * (uVar11 & 0x7f)) >> 7);
          uVar8 = (int)uVar10 >> 6 & 0xfffffffe;
          uVar1 = (int)uVar10 >> 6 & 0xfffffffc;
          uVar11 = uVar10 + uVar18;
          puVar13[3] = (char)((int)((unsigned int)*(unsigned char *)(uVar8 + iVar4) * (0x80 - (uVar10 & 0x7f)) +
                                   (unsigned int)*(unsigned char *)(iVar4 + 2 + uVar8) * (uVar10 & 0x7f)) >> 7);
          puVar13[2] = (char)(*(unsigned char *)(iVar4 + 5 + uVar1) * uVar9 +
                              (unsigned int)*(unsigned char *)(iVar4 + 1 + uVar1) * (0x100 - uVar9) >> 8);
          puVar13[4] = (char)(*(unsigned char *)(iVar4 + 7 + uVar1) * uVar9 +
                              (unsigned int)*(unsigned char *)(iVar4 + 3 + uVar1) * (0x100 - uVar9) >> 8);
          puVar13 = puVar13 + 4;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      if ((int)lVar16 < (int)lVar14) {
        lVar20 = lVar14 - lVar16;
        do {
          uVar8 = (int)uVar11 >> 6 & 0xfffffffe;
          iVar7 = uVar8 + 2;
          if (iVar3 < (int)uVar8) {
            uVar8 = iVar3 - 1;
          }
          if (iVar3 < iVar7) {
            iVar7 = iVar3 + -1;
          }
          uVar9 = uVar11 + uVar18;
          puVar13[1] = (char)((int)((unsigned int)*(unsigned char *)(uVar8 + iVar4) * (0x80 - (uVar11 & 0x7f)) +
                                   (unsigned int)*(unsigned char *)(iVar7 + iVar4) * (uVar11 & 0x7f)) >> 7);
          uVar11 = (int)uVar9 >> 6 & 0xfffffffe;
          iVar7 = uVar11 + 2;
          if (iVar3 < (int)uVar11) {
            uVar11 = iVar3 - 1;
          }
          if (iVar3 < iVar7) {
            iVar7 = iVar3 + -1;
          }
          uVar8 = (int)uVar9 >> 6 & 0xfffffffc;
          iVar6 = uVar8 + 1;
          uVar1 = uVar9 & 0xff;
          puVar13[3] = (char)((int)((unsigned int)*(unsigned char *)(uVar11 + iVar4) * (0x80 - (uVar9 & 0x7f)) +
                                   (unsigned int)*(unsigned char *)(iVar7 + iVar4) * (uVar9 & 0x7f)) >> 7);
          iVar19 = uVar8 + 3;
          iVar5 = uVar8 + 5;
          iVar7 = uVar8 + 7;
          if (iVar3 < iVar6) {
            iVar6 = iVar3 + -1;
          }
          if (iVar3 < iVar19) {
            iVar19 = iVar3 + -1;
          }
          if (iVar3 < iVar5) {
            iVar5 = iVar3 + -1;
          }
          if (iVar3 < iVar7) {
            iVar7 = iVar3 + -1;
          }
          uVar11 = uVar9 + uVar18;
          puVar13[2] = (char)((unsigned int)*(unsigned char *)(iVar6 + iVar4) * (0x100 - uVar1) +
                              *(unsigned char *)(iVar5 + iVar4) * uVar1 >> 8);
          puVar13 = puVar13 + 4;
          *puVar13 = (char)((unsigned int)*(unsigned char *)(iVar19 + iVar4) * (0x100 - uVar1) +
                            *(unsigned char *)(iVar7 + iVar4) * uVar1 >> 8);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      param_3 = param_3 + -1;
      lVar12 = lVar12 + lVar2;
    } while (param_3 != 0);
  }
  return;
}

