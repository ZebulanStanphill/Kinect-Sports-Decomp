typedef unsigned char bool;
extern unsigned int *auStack_40;


short * fn_82D34928(int param_1,unsigned short param_2,unsigned short *param_3)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  unsigned short uVar5;
  short *psVar6;
  unsigned int uVar7;
  bool bVar8;
  short *psVar9;
  int iVar10;
  unsigned short *puVar11;
  unsigned short *puVar12;
  short *psVar13;
  short *psVar14;
  unsigned int uVar15;
  int iVar16;
  __int64 lVar17;
  short sStack_42;
  unsigned short auStack_40 [32];
  
  iVar10 = *(int *)(param_1 + 0x1c);
  uVar15 = ((unsigned int)param_2 + (unsigned int)param_2 * 4) * 4 + iVar10;
  uVar1 = *(unsigned short *)(uVar15 + 0x10);
  uVar7 = uVar1 & 0x7fff;
  if (uVar7 == 0x7fff) {
    iVar16 = 0;
  }
  else {
    iVar16 = (uVar7 + (uVar1 & 0x7fff) * 4) * 4 + iVar10;
  }
  uVar2 = *(unsigned short *)(iVar16 + 0x10);
  uVar7 = uVar2 & 0x7fff;
  if (uVar7 == 0x7fff) {
    psVar9 = (short *)0x0;
  }
  else {
    psVar9 = (short *)((uVar7 + (uVar2 & 0x7fff) * 4) * 4 + iVar10);
  }
  uVar3 = *(unsigned short *)(iVar16 + 0xe);
  uVar4 = *(unsigned short *)(iVar16 + 0xc);
  *param_3 = uVar1 & 0x7fff;
  param_2 = uVar4 ^ uVar3 ^ param_2;
  uVar15 = (unsigned int)uVar4 * 0x14 + iVar10 ^ (unsigned int)uVar3 * 0x14 + iVar10 ^ uVar15;
  if (psVar9 == (short *)0x0) {
    *(unsigned int *)(param_1 + 0x10) = uVar15;
    *(unsigned short *)(uVar15 + 0x10) = *(unsigned short *)(uVar15 + 0x10) | 0x7fff;
    *(unsigned short *)(param_1 + 0x14) = param_2;
    psVar14 = *(short **)(param_1 + 0x10);
  }
  else {
    bVar8 = iVar16 == (unsigned int)(unsigned short)psVar9[7] * 0x14 + *(int *)(param_1 + 0x1c);
    psVar9[bVar8 + 6] = param_2;
    *(unsigned short *)(uVar15 + 0x10) = *(unsigned short *)(uVar15 + 0x10) & 0x8000 | uVar2 & 0x7fff;
    psVar6 = *(short **)(param_1 + 0x10);
    if (bVar8) {
      iVar10 = (unsigned int)(unsigned short)psVar9[6] * 0x14 + *(int *)(param_1 + 0x1c);
      uVar1 = *(unsigned short *)(iVar10 + 0x10);
      *(unsigned short *)(iVar10 + 0x12) = param_2;
      while ((uVar1 & 0x8000) == 0) {
        iVar10 = (unsigned int)*(unsigned short *)(iVar10 + 0xe) * 0x14 + *(int *)(param_1 + 0x1c);
        *(unsigned short *)(iVar10 + 0x12) = param_2;
        uVar1 = *(unsigned short *)(iVar10 + 0x10);
      }
    }
    do {
      puVar11 = (unsigned short *)((unsigned int)(unsigned short)psVar9[7] * 0x14 + *(int *)(param_1 + 0x1c));
      puVar12 = (unsigned short *)((unsigned int)(unsigned short)psVar9[6] * 0x14 + *(int *)(param_1 + 0x1c));
      auStack_40[3] = puVar11[3];
      if (puVar12[3] < puVar11[3]) {
        auStack_40[3] = puVar12[3];
      }
      auStack_40[0] = *puVar11;
      if (*puVar11 < *puVar12) {
        auStack_40[0] = *puVar12;
      }
      auStack_40[4] = puVar12[4];
      if (puVar11[4] <= puVar12[4]) {
        auStack_40[4] = puVar11[4];
      }
      auStack_40[1] = puVar12[1];
      if (puVar12[1] <= puVar11[1]) {
        auStack_40[1] = puVar11[1];
      }
      auStack_40[5] = puVar11[5];
      if (puVar12[5] < puVar11[5]) {
        auStack_40[5] = puVar12[5];
      }
      auStack_40[2] = puVar12[2];
      if (puVar12[2] <= puVar11[2]) {
        auStack_40[2] = puVar11[2];
      }
      iVar10 = 0;
      psVar13 = psVar9;
      while ((psVar13[3] == *(short *)((int)auStack_40 + -(int)psVar9 + 6 + (int)psVar13) &&
             (*psVar13 == *(short *)((int)auStack_40 + -(int)psVar9 + (int)psVar13)))) {
        iVar10 = iVar10 + 1;
        psVar13 = psVar13 + 1;
        psVar14 = psVar9;
        if (2 < iVar10) goto LAB_82d34c38;
      }
      psVar14 = &sStack_42;
      psVar13 = psVar9 + -1;
      lVar17 = 6;
      do {
        psVar14 = psVar14 + 1;
        psVar13 = psVar13 + 1;
        *psVar13 = *psVar14;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      uVar7 = (unsigned short)psVar9[8] & 0x7fff;
      psVar14 = psVar6;
    } while ((uVar7 != 0x7fff) &&
            (psVar9 = (short *)((uVar7 + ((unsigned short)psVar9[8] & 0x7fff) * 4) * 4 +
                               *(int *)(param_1 + 0x1c)), psVar9 != (short *)0x0));
  }
LAB_82d34c38:
  if ((unsigned int)*(unsigned short *)(iVar16 + 0xc) * 0x14 + *(int *)(param_1 + 0x1c) == uVar15) {
    uVar5 = *(unsigned short *)(iVar16 + 0x12);
    uVar1 = *(unsigned short *)(uVar15 + 0x10);
    *(unsigned short *)(uVar15 + 0x12) = uVar5;
    while ((uVar1 & 0x8000) == 0) {
      uVar15 = (unsigned int)*(unsigned short *)(uVar15 + 0xe) * 0x14 + *(int *)(param_1 + 0x1c);
      *(unsigned short *)(uVar15 + 0x12) = uVar5;
      uVar1 = *(unsigned short *)(uVar15 + 0x10);
    }
  }
  return psVar14;
}

